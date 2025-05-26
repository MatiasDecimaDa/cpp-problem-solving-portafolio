#include <iostream>
    using namespace std;
int main(){

    int numero[5];
    int multiplicacion[5];

    for(int i = 0; i < 5; i++){
        cout<<"INGRESE UN NUMERO ENTERO" << endl;
        cin >> numero[i];
    }
    for(int i = 0; i < 5; i++){
        multiplicacion[i] = numero[i] * 3;
    }
    for(int i= 0; i < 5; i++){
        cout << numero[i] << " * 3=" << multiplicacion[i] << "\n";
    }

    return 0;
}