#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
string Read;
string Banana = "banana";
char Myfile[50];
int n = 0;
int m = 0;
int x = 0;
cout << "Escribe el documento";
cin >> Myfile;

ifstream read_file (Myfile);
if (read_file.is_open()){
while (getline(read_file , Read)){
n = 0;
while (n < Read.length()) {
char letra = Read[n];
if ( letra == 'B' || letra== 'b'){
m = n + 1;
char letra = Read[m];
if (letra == 'A' || letra== 'a'){
m++;
char letra = Read[m];
if (letra == 'N' || letra== 'n'){
m++;
char letra = Read[m];
if (letra == 'A' || letra== 'a'){
m++;
char letra = Read[m];
if (letra == 'N' || letra== 'n'){
m++;
char letra = Read[m];
if (letra == 'A' || letra== 'a') {
x++;
} } } } } }
n = n + 1;
} }
read_file.close();
}
else{
cout << "no se encuentra ese archivo" << endl;
}
cout << "encontre " << x << " bananas" << endl;
return 0;
}
