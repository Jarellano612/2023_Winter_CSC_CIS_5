/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 13, 2023, 7:32 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float a,b,c,d,e,f;
    a=88.67;
    b=.0675*a;
    e=b+a;
    c=0.2*e;
    d=e+c;
          
    cout <<"The cost of your meal comes to $88.67"<<setprecision(2)<<endl<<"The tax amount is: $"<<b<<setprecision(3)<<endl<<""
            "The tip you gave was: $"<<c<<setprecision(4)<<endl<<"So you're total bill has become $"<<d;
    
    return 0;
}

