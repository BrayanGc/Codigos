#include <iostream>
using namespace std;
int max(int x, int y){
int r=1;
while (r!=0){
  r=x%y;
  x=y;
  y=r;
}
return x;
}
int main(){
  int x;
  int y;
  int r=1;
  cout << "Escribe el primer numero\n";
  cin >> x;
  cout <<  "Escribe el sugundo numero\n";
  cin >> y;
  cout << "El resultado es= " << max(x, y)<< "\n";
  return 0;
}
