#include <iostream>
#include <cstdio>
using namespace std;
unsigned long long factorial (int x){
  unsigned long long z=1;
  while (x>=1){
    (z=z*x);
    (x=x-1);
  }
  return z;
}

int main (){
  int x;
  char resp;
  cout << "Numero factorial" << endl;
  cout << "Introduce un numero\n";
  cin >> x;
  cout << "El factorial de los numeros es = ";
  cout << factorial (x) << endl;
  cout << "¿Quieres seguir calculando? (S/N)\n";
  cin >> resp;
while (resp=='S'){
  if (resp=='S'){
    cout << "Introduce otro numero\n";
    cin >> x;
    cout << "El factorial de los numeros es = ";
    cout << factorial (x) << endl;
    cout << "¿Quieres seguir calculando? (S/N)\n";
    cin >> resp;
    }
    else if (resp== 'N'){
      cout << "Gracias, hasta luego\n";
    } else {
    cout << "Respuesta no valida\n";
    }}
    if (resp== 'N'){
      cout << "Gracias, hasta luego\n";
    } else {
    cout << "Respuesta no valida\n";
    }
return 0;
}
