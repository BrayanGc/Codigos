#include <iostream>
using namespace std;

int doublemymoney (int x){
  return 2*x;
}

int main (){
  int z;
  cout << "¿Cuanto dinero tengo?\n";
  cin >> z;
  cout << "Dinero total= " << doublemymoney (z) << endl;
  return 0;
}
