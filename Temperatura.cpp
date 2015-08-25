#include <iostream>
using namespace std;


int main () {

  int a= 0, b= 5 * (a - 32) / 9;
  cout << "Introduce temperatura en Farenheit\n";
  cin >> a;
  cout << "Tu resultado es: " << 5 * (a - 32) / 9 << " grados celcius,";

  if (a > 213) {
    cout << " Por lo tanto el agua si hierve a esta temperatura.\n";
  }

  else if (a = 213, 212) {
    cout << " Por lo tanto el agua si hierve a esta temperatura.\n";
  }

  else if (a < 212) {
    cout << " Por lo tanto el agua no hierve a esta temperatura.\n" << endl;
  }
  return 0;

}
