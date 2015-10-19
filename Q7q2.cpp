#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void isPalindrome(string palindrome){
  string prueba;
  while (x>0){
  char letter = palindrome [x-1];
      prueba = prueba + letter;
      cout << letter;
      x=x-1;}

  if (palindrome == prueba){
      cout << " es palindrome\n";
    }

  else {
      cout << " no es palindrome\n";
    }
}
  int main(){
      cout << "Escribe una palabra" << endl;
      string palindrome;
      cin >> palindrome;
      int x=palindrome.length();
      isPalindrome(palindrome, x);
    return 0;
    }
