#include <iostream>
using namespace std;

int main (){
  int x;
  cout << "Introduce un numero\n";
  cin >> x;

if (x>=3){
cout << "Esta incorrecto\n";
}

  while (x <= 2) {
    cout << "Perdiste, le atinaste al numero.\n" << endl;
    return 0;
}

return 0;
}
