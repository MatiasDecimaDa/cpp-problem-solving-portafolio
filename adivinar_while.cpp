#include <iostream>
using namespace std;
int main(){

    int numero= 0;

    cout << "ADIVINA EL NUMERO" << endl;

    while(numero != 5){
        cout << "ADIVINA EL NUMERO EN UNA ESCALA DEL 1 AL 10" << endl;
        cin >> numero;

        if (numero > 10){
            cout << "INGRESA UN NUMERO EN LA ESCALA DEL 1 AL 10: ";
        }
    }
    cout << "FELICIDADES";


    return 0;
}
