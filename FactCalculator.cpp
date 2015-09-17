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
  cout << "¿Quieres calcular un nuevo numero?\n";
  cin >> resp;

  while (resp == 's'){

    if (resp == 's'){
    int x, factorial = 1;
    char resp;
     cout << "Calculo del numero factorial" << endl;
     cout << "Introduce el numero\n";
     cin >> x;

    for (int a = 1; a <= x; a++){
      factorial= factorial*a;

    }
    cout << "Total= " << factorial << "\n";
    cout << "¿Quieres calcular un nuevo numero?\n";
    cin >> resp;
  }
}
  if (resp == 'n'){
    cout << "Gracias" << endl;
  }
  return 0;

}
