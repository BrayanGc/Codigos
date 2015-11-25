#include <iostream>
using namespace std;

float raiz (float a){
  float x = a / 2;
  for (int i=0; i <20; i++){
    x = .5*(x+(a/x));
  }
  return x;
}

int main (){
  float a, r;
  cout << "Dame el numero el que quieras sacarle su raiz cuadrada\n";
  cin >> a;
  float s = raiz (a);
  cout << "la raiz cuadrada de  " << a << " = "<< s << endl;
  return 0;
}
