#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){

    string texto1;
    string texto2;
    string texto_completo;

    int caracteres = 0;
    int longitud1;
    int longitud2;
    int total = 0;

    cout << "INGRESA LA PRIMERA CADENA DE TEXTO" << endl;
    getline(cin, texto1);
    cout << "INGRESA LA SEGUNDA CADENA DE TEXTO" << endl;
    getline(cin, texto2);

    longitud1 = texto1.length();
    longitud2 = texto2.length();

    total = longitud1 + longitud2;

    cout << texto1 << " " << texto2 << endl;
    cout << "EL TOTAL DE CARACTERES DE LA CADENA ES: " << total << endl;


    return 0;
}