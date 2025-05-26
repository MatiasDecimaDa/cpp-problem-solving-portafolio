#include <iostream>
    using namespace std;
int main(){

    int num1, num2;
    cout<<"ingresa el primer numero :";
    cin>>num1;
    cout<<"ingresa el segundo numero :";
    cin>>num2;


        while(num1 != num2){
            if(num1>num2){
            num1 = num1 - num2;
        }
        else{
            num2 = num2 - num1;
            }
        }

    int mcd = num1;

    cout<<"EL MCD ES : "<< num1;

    return 0;
}
