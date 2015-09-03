#include <iostream>
using namespace std;

int division (int x, int y){
  return x / y;

}

int main (){
  int x, y;

  cout << "Introduce numero x, y\n";
  cin >> x;
  cin >> y;
  cout << division (x, y)<< "\n";
  cout << "Tu residuo es: " << ( x%y) << endl;
}
