#include <iostream>
using namespace std;

int main() {
    int terminos, num1 = 0, num2 = 1, siguiente;

    cout << "Ingresa el número de términos de la serie de Fibonacci: ";
    cin >> terminos;

    cout << "Serie de Fibonacci con " << terminos << " términos:" << endl;

    cout << num1 << " " << num2 << " ";

    for (int i = 2; i < terminos; i++) {
        siguiente = num1 + num2;
        cout << siguiente << " ";
        num1 = num2;
        num2 = siguiente;
    }

    return 0;
}
