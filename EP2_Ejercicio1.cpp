#include <iostream>
using namespace std;

void returnT (int size){
  for(int i=0; i <= size; i++){
    for(int j=0; j<i; j++){
    cout << "T";
    }
    cout << endl;
  }

for(int i=0; i<= size; i++){
  for(int j= size; j>= i; j--){
  cout << "T";
  }
  cout << endl;
}
}

int main(){
int x;
cout << "Introduce el numero del tamaño que quieras la piramide\n";
cin >> x;
returnT(x);
}
