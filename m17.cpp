#include <iostream>
using namespace std;

int main(){
  int x;
  string resultado;
  cout << "Introduce el numero 1 o 2\n";
  cin >> x;

  switch (x) {
    case 1:
    resultado= "Haz ganado\n";
    break;

    case 2:
    resultado = "Haz perdido\n";
    break;
  }

  cout << resultado << endl;
  return 0;
}
