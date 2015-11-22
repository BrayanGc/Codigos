#include <iostream>
#include <vector>
using namespace std;

long find_threes (vector <int> tree){
long len;
len = tree.size();
long sum = 0;
for (int i = 0; i<len ; i++)
if ((tree[i]%3) == 0){
sum = sum + tree[i];}
return sum;}

int main(){
vector<int>tree;
long c;
cout<<"Introduce los numeros que quieras en el vector, para parar introdice -1"<<endl;
cin>>c;
while (c!= -1){
tree.push_back(c);
cin>>c;
}
cout<<"La suma de todos los numeros que son divisibles entre 3 es=  "<<endl;
cout<<find_threes(tree)<<endl;

return 0;
}
