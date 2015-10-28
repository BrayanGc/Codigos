#include <iostream>
using namespace std;

int main (){
   int x;
   string resultado;
   cout << "Introduce 1 o 2\n";
   cin >> x;

   switch (x) {
     case 1:
     resultado = "Haz ganado";
     break;

     case 2:
     resultado = "Haz perdido";
     break;
   }

cout << resultado << endl;

   return 0;
 }
