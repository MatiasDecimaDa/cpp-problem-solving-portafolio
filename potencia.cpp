#include <iostream>
#include <math.h>
    using namespace std; 
int main(){

int numero[5];
int elevado[5];
int potencia;

    for(int i=0;i<5;i++){
        cout << "INGRESA UN NUMERO: " << endl;
        cin >> numero[i];
        if(numero[i] <= 0){
            cout << "INGRESA UN NUMERO MAYOR A 0 " << endl;
            break; 
          }
        }

        cout << "INGRESA LA POTENCIA A RESOLVER: " << endl;
        cin >> potencia;

    for(int i=0;i<5;i++){
        elevado[i] = pow(numero[i], potencia);
        cout << numero[i] << " ELEVADO A LA POTENCIA DE " << potencia << " = " << elevado[i] << "\n";
    }

    
return 0; 
}