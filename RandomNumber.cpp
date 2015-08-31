#include <iostream>
#include <ctime>
using namespace std;

int main () {

  int Xran, a;
  srand(time (0));
    Xran= rand () % 100+1;

cout << "I have chose a random number\n";
cout << "This number is between 1 to 100\n";
cout << "Chose a number\n";
cin >> a;

while ( a != Xran ){

if ( Xran <= 50){
  cout << "The number is less than 50\n";
}
if ( Xran >= 25){
  cout << "The number is more than 25\n"

}
if ( Xran >= 50 ){
  cout << "The number is more than 50\n";

  if ( Xran <= 25){
    cout << "The number is less than 25\n"

}
if (a != Xran){
  cout << "Its incorrect, Try again\n";
  cin >> a;
}
if  ( a == Xran){
cout << "You win\n";
}
}
}
