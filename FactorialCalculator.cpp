#include <iostream>
using namespace std;

int main (){
  int x, y, z = 0;
   cout << "Multiplicacion de los dos numeros entre dos numeros" << endl;
   cout << "Introduce el primer numero\n";
   cin >> x;
   cout << "Introduce el segundo numero\n";
   cin >> y;

  while (x <= y-1) {
    (z = x);
    (x = (x+1)*z); }
  cout << "Total= " << (z*x) << "\n";
  return 0;

}
