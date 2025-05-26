#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string frase;
  vector<int> vocales(5);

  cout << "Ingrese una frase: ";
  getline(cin, frase);

  for (char c : frase) {
    switch (tolower(c)) {
      case 'a':
        vocales[0]++;
        break;
      case 'e':
        vocales[1]++;
        break;
      case 'i':
        vocales[2]++;
        break;
      case 'o':
        vocales[3]++;
        break;
      case 'u':
        vocales[4]++;
        break;
    }
  }

  cout << "Cantidad de cada vocal en la frase:" << endl;
  for (int i = 0; i < vocales.size(); i++) {
    cout << vocales[i] << " ";
  }

  return 0;
}
