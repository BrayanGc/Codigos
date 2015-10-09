#include <iostream>
#include <math.h>
using namespace std;

long superpower (long a, long b){
return pow(a,b);
}

int main (){
long a, b;
cout << "Introduce un numero (base)\n";
cin >>a;
cout << "Introduce otro numero (potencia)\n";
cin >> b;
cout << "Tu resultado es = " << superpower (a,b) << endl;

return 0;

}
