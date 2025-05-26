#include <iostream>
#include <string>
#include <math.h>
    using namespace std;
int main(){

    int opcion,monto,total;
    int billetera = 1000;
    string respuesta;

    cout<<"BIENVENIDO AL CAJERO AUTOMATICO";
    cout<<endl;
    do{
    cout<<"INGRESA QUE FUNCION DESEA\n";
    cout<<"1) DEPOSITOS\n";
    cout<<"2) RETIROS\n";
    cout<<"3) CONSULTA\n";
    cout<<"4) SALIR\n";

    cin>>opcion;

        switch(opcion){
        case 1:
            cout<<"INGRESE EL MONTO QUE QUISIERA DEPOSITAR\n";
            cin>>monto;
            total=billetera + monto;
            cout<<"SE A DEPOSITADO: "<<monto<<endl;
            cout<<" A SU CUENTA, AHORA TIENE UN TOTAL DE: "<<total<<endl;
            break;
        case 2:
            cout<<"INGRESA EL MONTO QUE QUIERE RETIRAR: ";
            cin>>monto;
               total=(billetera - monto);
            cout<<"SE A RETIRADO: "<<monto<<endl;
            cout<<"TE QUEDA: "<<total<<" EN TU CUENTA"<<endl;
            break;
        case 3:
            cout<<"TU SALDO EN LA CUENTA ES DE" << billetera << endl;
            break;
        case 4:
            return 1;
            break;

        default:
            break;
        }


         cout<< "DESEA HACER OTRO MOVIMIENTO? (SI/NO): ";
         cin>>respuesta;
    }while(respuesta== "SI");


}
