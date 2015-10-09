#include <iostream>
using namespace std;

int main (){
  int x;
  cout << "¿A que temperatura esta el dia de hoy?";
  cin >> x;

  if (x >= 20)
    cout << "Puedes ir a la playa, correr o disfrutar del calor.\n";

  else {
    cout << "Puedes ver peliculas en tu casa." << endl;

  }
  return 0;
}
