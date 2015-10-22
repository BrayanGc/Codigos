#include <iostream>
#include <vector>
using namespace std;

int sumsquare_list(vector <int> cuad){
  int sum;
  cout << "Introduce los valores para sumar sus cuadrados\n";
  cout << "Cuando termines de introducir valores presiona 0\n";
  cin >> sum;

  while (sum != 0){
  cuad.push_back(sum);
  cin >> sum;}

  for (int i=0; i<cuad.size(); i++){
  sum = sum + (cuad[i]*cuad[i]); }

  return sum;
}

int main (){
  vector <int> cuad(1);
  cout << sumsquare_list(cuad) << endl;
  return 0;

}
