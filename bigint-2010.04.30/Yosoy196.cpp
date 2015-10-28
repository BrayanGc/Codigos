#include <iostream>
#include "BigIntegerLibrary.hh"
using namespace std;
int may;
int men;
int nat=0;
int non=0;
int ly=0;
BigInteger rev;
BigInteger num;

BigInteger reverse(BigInteger valid){
BigInteger invalid= 0;
while (valid != 0){
invalid= invalid*10 + valid % 10;
valid= valid/10;
}
return invalid;
}

void palindrome(BigInteger n, BigInteger r){
if(n == r){
nat = nat+1;
}
else {
int rep= 0;
BigInteger a= n;
while (a!=r && rep < 30){
a=a+r;
r= reverse(a);
rep= rep+1;
}
if (rep == 30){
cout << "Este es un numero Lynchrel: " << n << endl;
ly= ly+1;
}
else {
non=non+1;
}
}
}

int main (){
cout << "Vamos a buscar cuantos numeros Lynchrel hay." << endl;
cout << " Introduzca el límite inferior: ";
cin >> men;
cout << "Introduzca el límite superior: ";
cin >> may;
num = men;
while(num <= may){
rev= reverse(num);
palindrome(num, rev);
num = num + 1;
}

cout << "Los numeros estan entre: " << men << " y " << may << endl;
cout << " Cantidad de palindromos naturales :" << nat << endl;
cout << " Cantidad de numeros no Lycherel: " << non << endl;
cout << "Cantidad de numeros Lychrel: " << ly << endl;

return 0;
}
