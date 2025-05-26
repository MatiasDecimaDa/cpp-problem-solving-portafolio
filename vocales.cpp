#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main(){

    char texto[100];
    int contador_vocales = 0;
    int longitud;


    cout << "INGRESA UNA FRASE" << endl; // CREACION DE FRASE 
    cin.getline(texto,100); // TECLADO PARA INGRESAR FRASE 
    
    longitud = strlen(texto);   // LONGITUD DEL TEXTO      


        for(int i = 0; i < longitud; i++){      //  INICIO DEL FOR PARA ELIMINAR ESPACIO Y SUMAR LAS VOCALES  
            char c = tolower(texto[i]);                                 
            if(c== 'a' || c== 'e' || c== 'i'  || c== 'o' || c== 'u'){
                contador_vocales++;
            }
        }  

    cout << "LA LONGITUD DE LA CADENA ES: " << longitud << endl;
    cout << "EL NUMERO DE VOCALES DE LA CADENA DE TEXTO ES: " << contador_vocales << endl;      // PRINT DEL PROGRAMA


    return 0; 
}