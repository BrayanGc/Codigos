#include <iostream>
using namespace std;

float convert_mileage (float x){
float z;
z = (1/(x * 1.60945 * 0.264172))*100;
return z;
}

int main(){
float x;
cout<< "Introduce la cantidad en mpg"<<endl;
cin>>x;
cout<< "De mpg a L/100km es:"<<endl;
cout<<convert_mileage(x)<<endl;
return 0;
}
