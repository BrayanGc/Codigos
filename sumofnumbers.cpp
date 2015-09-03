#include <iostream>
using namespace std;

int main (){

  int x, y, z = 0;
   cout << "Suma de los dos numeros entre dos numeros" << endl;
   cout << "Introduce el numero mas pequeño\n";
   cin >> x;
   cout << "Introduce el numero mas grande\n";
   cin >> y;

  while (x < y) {
    (z = z + x);
    (x = x+1 ); }
  cout << "Total= " << (z+x) << "\n";
  return 0;


}
