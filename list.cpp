#include <iostream>
#include <math.h>
using namespace std;

int main (){
  float a, b, c, d, e, f, g, h, i, j;
  float z = (a+b+c+d+e+f+g+h+i+j);
  cout << "Introduce una lista de 10 numeros\n";
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;
  cin >> e;
  cin >> f;
  cin >> g;
  cin >> h;
  cin >> i;
  cin >> j;


cout << "Esta es la suma de los numeros " << z << endl;
cout << "Este es el promedio de los numeros " << (z/10) << endl;
cout << "La desviacion estandar es " << sqrt (((a-z)*(a-z)+(b-z)*(b-z)+(c-z)*(c-z)+(d-z)*(d-z)+(e-z)*(e-z)+(f-z)*(f-z)+(g-z)*(g-z)+(h-z)*(h-z)+(i-z)*(i-z)+(j-z)*(j-z)));
return 0;
}
