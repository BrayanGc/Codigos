#include <iostream>
using namespace std;

long fibonacci(long x){
  long y=0;
  long z=1;
  long t=0;
  while (x>1){
    t=y+z;
    y=z;
    z=t;
    x=x-1;}
    return t;
}

int main(){
long x;
cout << "Introduce el numero que deseas calcular \n";
cin >> x;
if (x==1){
  int w=1;
  cout << w;}

else {
cout << fibonacci(x) << endl;}

return 0;}
