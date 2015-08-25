#include <iostream>
using namespace std;


int main () {

  int a= 0, b= 5 * (a - 32) / 9;
  cout << "Introduce temperatura en Farenheit ";
  cin >> a;
  cout << "Tu resultado es: " << 5 * (a - 32) / 9 << " grados celcius.";
  if (b < 100)
  cout << " Por lo tanto el agua no hierve a esta temperatura." << endl;

  return 0;

}
