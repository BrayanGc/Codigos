#include <iostream>
using namespace std;

int resta (int x, int y){
  return x - y;

}

int main (){
  int x, y;

  cout << "Introduce numero x, y\n";
  cin >> x;
  cin >> y;
  cout << resta (x, y) << endl;
}
