#include <iostream>
using namespace std;

int suma (int x, int y){
  return x + y;

}

int main (){
  int x, y;

  cout << "Introduce numero x, y\n";
  cin >> x;
  cin >> y;
  cout << suma (x, y) << endl;
}
