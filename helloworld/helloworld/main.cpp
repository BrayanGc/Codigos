//
//  main.cpp
//  helloworld
//
//  Created by Brayan Gonzalez on 14/09/15.
//  Copyright (c) 2015 Brayan Gonzalez. All rights reserved.
//

#include <iostream>
using namespace std;

int main (){
    int x=0, y=0;
    cout << "introduce un numero\n";
    cin >> x;
    cout << "Introduce otro numero\n";
    cin >> y;
    
    cout << "La suma de los dos numeros es " << (x+y) << endl;
    return 0;
}