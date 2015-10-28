#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void promedio(vector <int> prom){
  int x;
  double y=0;
  cout <<"Escribe los valores que deseas calcular" << endl;
  cout <<"Escribe -1 cuando no desees seguir calculando" << endl;
  cin >> x;
  while (x != -1){
    prom.push_back(x);
    cin >> x;}
    double suma;
    for (int i = 0; i<prom.size(); i++){
      suma = suma+prom[i];
    }
    cout << "La suma total es " << suma << endl;
    int z=prom.size();
    y= (suma)/(z-1);
    cout << "El promedio es " << y << endl;
    double b;
    z=prom.size()-1;
    int i=0;
    while (i<z){
      b= b+(prom[z]-y)*(prom[z]-y);
      i=i+1;
      z=z-1;
    }
    b=b*2;
    int g= prom.size()-1;
    cout << "La desviacion estandar es ";
    double d;
    d = sqrt(b/g);
    cout << d << endl;}

int main(){
  vector <int> prom(1);
  promedio(prom);
  return 0;
}
