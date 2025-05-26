#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){

    int contar_palabra = 0;
    int longitud;
    string texto;

    cout <<"INGRESE UNA CADENA DE TEXTO" << endl;
    getline(cin , texto);

    longitud = texto.length();
    bool dentro_palabra = false; 

    for(int i = 0; i < longitud ; i++){
        if(texto[i] == ' ' || texto[i] == '\t' || texto[i] == '\n' || texto[i] == '\r'){
            dentro_palabra = false; 
        }
        else{
            if(!dentro_palabra){
                dentro_palabra = true;
                contar_palabra++;
            }
        }
 
    }

    cout << "EL NUMERO DE PALABRA QUE TIENE LA CADENA QUE INGRESASTE ES " << contar_palabra; 

    return 0; 
}
