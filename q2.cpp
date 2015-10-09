#include <iostream>
using namespace std;

void stars (int x){
for (int i=0; i<x; i++){
cout << "*";
}
}

int main (){
int x;
cout << "Introduce el numero de estrellas que quieres ver\n";
cin >> x;
stars (x);

cout << endl;
return 0;
}
