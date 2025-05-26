#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

double calcularCALORIAS(int edad, string sexo, double peso, double altura){
    double calorias;

    if(sexo == "hombre"){
        calorias = 88.362 + (13.397 * peso) + (4.799 * altura) - (5.677 * edad);
    }
    else{
        calorias = 444.593 + (9.247 * peso) + (3.098 * altura) - (4.330 * edad);
    }

    return calorias;
}

double calcularACTIVIDAD_FISICA(double calorias, string actividad_fisica, string objetivo){
    double factor_actividad;
    double factor_objetivo = 1.0;

    if(actividad_fisica == "sedentario"){
        factor_actividad = 1.2;
    }
    else if(actividad_fisica == "ligeramente activo"){
        factor_actividad = 1.375;
    }
    else if(actividad_fisica == "muy activo"){
        factor_actividad = 1.725;
    }
    else{
        factor_actividad = 1.2;
    }

    if(objetivo == "deficit"){
        factor_objetivo = 0.8;
    }
    else if(objetivo == "mantemiento"){
        factor_objetivo = 1.1;
    }
    else if(objetivo == "superavit"){
        factor_objetivo = 0.9;
    }

    return calorias * factor_actividad * factor_objetivo;

}

double calcularProteina(double calorias, string objetivo){

    if(objetivo == "deficit"){
        return  (0.35 * calorias)/4;
    }
    else if(objetivo == "mantenimiento"){
        return  (0.30 * calorias)/4;
    }
    else if(objetivo == "superavit"){
        return (0.30 * calorias)/9;
    }

    return 0.0;

}

double calcularCarbohidratos(double calorias, string objetivo){

    if(objetivo == "deficit"){
        return  (0.45 * calorias)/4;
    }
    else if(objetivo == "mantenimiento"){
        return  (0.55 * calorias)/4;
    }
    else if(objetivo == "superavit"){
        return (0.60 * calorias)/9;
    }

    return 0.0;

}

double calcularGrasas(double calorias, string objetivo){

    if(objetivo == "deficit"){
        return  (0.30 * calorias)/4;
    }
    else if(objetivo == "mantenimiento"){
        return  (0.35 * calorias)/4;
    }
    else if(objetivo == "superavit"){
        return (0.30 * calorias)/9;
    }

    return 0.0;

}

double DIETA_SEMANAL(string objetivo){

    if(objetivo == "deficit"){
        cout << "DESAYUNO \n * 3 claras de huevo y 1 huevo entero revuelto con espinacas \n * 1 rebanada de pan integral \n * 1 taza de cafe" << endl;
        cout << "ALMUERZO \n * 150g de pechuga de pollo a la plancha \n * 1 taza de quinoa cocida \n * 1 taza de brócoli al vapor \n * 1 cucharada de aceite de oliva" << endl;
        cout << "CENA \n * 200g de salmón al horno \n * 1 taza de batata asada \n * Ensalada mixta (espinacas, tomate, pepino) con jugo de limón" << endl;
        cout << "SNACKS \n * 1 manzana mediana \n * 1 puñado de almendras (20g) \n *Yogur griego sin azúcar (150g)" << endl;
    }
    else if(objetivo == "mantenimiento"){
        cout << "DESAYUNO \n * 2 rebanadas de pan integral con aguacate y 2 huevos escalfados \n * 1 plátano \n * 1 taza de café o té sin azúcar" << endl;
        cout << "ALMUERZO \n * 150g de pechuga de pavo \n * 1 taza de arroz integral \n * 1 taza de judías verdes \n * 1 cucharada de aceite de oliva" << endl;
        cout << "CENA \n * 200g de filete de ternera a la parrilla \n * 1 taza de puré de patatas \n * Ensalada mixta (lechuga, tomate, zanahoria) con aderezo ligero" << endl;
        cout << "SNACKS \n * 1 pera \n * 1 puñado de nueces (30g) \n * Batido de proteína con leche descremada" << endl;
    }
    else if (objetivo == "superavit"){
        cout << "DESAYUNO \n * 3 huevos revueltos con pimientos y cebolla \n * 2 rebanadas de pan integral con mantequilla de almendra \n * 1 taza de avena con frutas y miel \n * 1 taza de café o té sin azúcar" << endl;
        cout << "ALMUERZO \n * 200g de pechuga de pollo a la parrilla \n * 1 taza de arroz integral \n * 1 taza de brócoli al vapor \n * 1 cucharada de aceite de oliva" << endl;
        cout << "CENA \n * 250g de salmón al horno \n * 1 taza de quinoa \n * Ensalada mixta (espinacas, tomate, pepino, zanahoria) con aderezo ligero " << endl;
        cout << "SNACKS \n *1 manzana \n * 1 puñado de almendras (30g) \n *Yogur griego sin azúcar (200g) \n *1 batido de proteína con leche entera" << endl;
    }
}





int main(){

    string nombre, sexo, actividad_fisica, objetivo;
    int edad;
    double peso, altura;

    cout << "*****************************************************" << endl;
    cout << "CALCULADORA DE CALORIAS Y MACROS NUTRIENTES" << endl;
    cout << "*****************************************************" << endl;

    cout << "ingresa tu nombre: ";
    cin >> nombre;

    cout << "ingresa tu edad: ";
    cin >> edad;
    cin.ignore();

    cout << "ingrese su sexo (hombre/mujer): ";
    getline(cin, sexo);

    cout << "ingrese su peso (kg): ";
    cin >> peso;
    cin.ignore();

    cout << "ingrese su altura (cm): ";
    cin >> altura;
    cin.ignore();

    cout << "ingrese su nivel de actividad fisica (sedentario / ligeramente activo / muy activo): ";
    getline(cin, actividad_fisica);

    cout << "ingrese el objetivo que quiere alcanzar (deficit / mantenimiento / superavit): ";
    getline(cin, objetivo);

    double calorias = calcularCALORIAS(edad , sexo, peso, altura);
    double factor_actividad = calcularACTIVIDAD_FISICA(calorias, actividad_fisica, objetivo);
    double proteina = calcularProteina(calorias, objetivo);
    double carbohidrato = calcularCarbohidratos(calorias, objetivo);
    double grasa = calcularGrasas(calorias, objetivo);

    cout << "*****************************************************" << endl;
    cout << nombre << " estas son tus calorias y macronutrientes que tines que consumir para alcanzar tu objetivo";
    cout << "Calorias necesarias por dia para " << objetivo << ":" << factor_actividad << " kal" << endl;
    cout << "distribucion de macronutrientes:" << endl;
    cout << "proteina: " << proteina << " gramos por dia" << endl;
    cout << "carbohidrato: " << carbohidrato << " gramo por dia" << endl;
    cout << "grasa: " << grasa << " gramo por dia" << endl;

    cout << "*****************************************************" << endl;

    cout << "DIETA SEMANAL A SEGUIR  DE LUNES A DOMINGO" << endl;

    cout << DIETA_SEMANAL(objetivo);

    return 0;
}
