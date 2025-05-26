#include <iostream>
#include <math.h>
    using namespace std;
int main(){

double a,b,c;

cout<<"ingrese el valor de a \n";
cin>>a;
cout<<"ingrese el valor de b \n";
cin>>b;
cout<<"ingrese el valor de c \n";
cin>>c;

    double discriminante = pow(b , 2) - (4 * a * c);

    if(discriminante > 0){
        double positivo= (- b - sqrt(discriminante)) / (2 * a);
        double negativo= (-b + sqrt(discriminante)) / (2 * a);

        cout<<"soluciones \n";
        cout<<"x1="<<positivo<<endl;
        cout<<"x2="<<negativo<<endl;
    }
    else if (discriminante==0){
        double raiz_unica = -b / (2*a);
        cout<<"la solucion unica es \n";
        cout<<raiz_unica;
    }
    else{
        cout<<"no tiene solucion real";
    }


    return 0;

}
