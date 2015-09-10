#include <iostream>
using namespace std;

int main (){
  int x, factorial = 1;
  char resp;
   cout << "Calculo del numero factorial" << endl;
   cout << "Introduce el numero\n";
   cin >> x;

  for (int a = 1; a <= x; a++){
    factorial= factorial*a;

  }
  cout << "Total= " << factorial << "\n";
  cout << "¿Quieres calcular un nuevo numero?";
  cin >> resp;

  if (resp == 'si'){
    int x, factorial = 1;
    char resp;
     cout << "Calculo del numero factorial" << endl;
     cout << "Introduce el numero\n";
     cin >> x;

    for (int a = 1; a <= x; a++){
      factorial= factorial*a;

    }
    cout << "Total= " << factorial << "\n";
  }

  if (resp == 'no'){
    return 0;}

}
