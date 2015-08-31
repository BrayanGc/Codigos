#include <iostream>
#include <ctime>
using namespace std;

int main () {

  int Xran, a, contador = 0;
  srand(time (0));
  Xran= rand () % 100+1;
  contador = contador + 1;

  cout << "Yo escogi un numero\n";
  cout << "Este numero esta entre el 1 y el 100\n";
  cout << "Escoge un numero\n";
  cin >> a;

  while ( a != Xran ){
    contador = contador + 1;
    if ( a > Xran){
      cout << "\n Tu numero es mayor al que escogi\n";
      cout << "Intento numero " << contador << "\n";
    }
    if ( a < Xran){
      cout << "\n Tu numero es menor al que escogi\n";
      cout << "Intento numero " << contador << "\n";
    }

    cout << "Escoge un nuevo numero\n";
    cin >> a;
  }
  if  ( a == Xran){
    cout << "GANASTE!!!!!\n" << endl;
    cout << "Tuviste " << contador << " intentos\n";
  }
  return 0;
}
