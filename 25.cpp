#include <iostream>
#include <string>
using namespace std;

int main(){
  string s1 = "Brayan";
  string s2;

  s2= s1;
  s2.assign(s1);
  cout << "El string es " << s2 << endl;
}
