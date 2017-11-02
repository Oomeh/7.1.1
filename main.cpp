/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: bvance
 *
 * Created on October 31, 2017, 12:37 PM
 */

#include <iostream>
using namespace std;
int main(void) {
int a = 8, b = 0, c = 0; 
cin >> b;
try {
    if(b == 0)
    {
        throw 0;
    }
    c = a / b;
}
catch(int e)
{
    cout<< "Your input is not valid, you can't divide by zero."<< endl;
}
cout << c << endl;
return 0; 
}