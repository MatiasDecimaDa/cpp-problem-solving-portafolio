#include <iostream>
#include <string>
#include <algorithm>

    using namespace std;
int main(){

    string frase; 

    cout << "INGRESE LA FRASE" << endl; 
    getline(cin, frase);

    string frase_invertida = frase;

    reverse(frase_invertida.begin(), frase_invertida.end());

    cout << "LA FRASE INVERTIDA INGRESA ES" << endl;
    cout << frase_invertida;


    return 0;
}