#include <iostream>
using namespace std;
int main(){

    int vector1[5];
    int vector2[8];
    int mayor1 = vector1[0];
    int mayor2 = vector2[0];

    for (int i = 0 ; i < 5; i++){
        cout << "ingrese un numero" << endl;
        cin >> vector1[i];
        if(vector1[i] > mayor1){
            mayor1 = vector1[i];
        }
    }

    cout << "INGRESE LOS VALORES PARA EL SEGUNDO VECTOR" << endl;

    for(int i = 0; i < 8 ; i++){
        cout << "ingrese un numero" << endl;
        cin >> vector2[i];
        if(vector2[i] > mayor2){
            mayor2 = vector2[i];
        }
    }


    cout << "EL NUMERO MAYOR INGRESADO AL VECTOR 1 ES: " << mayor1 << endl;
    cout << "EL NUMERO MAYOR INGRESADO AL VECTOR 2 ES: " << mayor2 << endl;

    return 0;
}