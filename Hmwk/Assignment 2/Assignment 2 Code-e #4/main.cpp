/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 16, 2023, 12:50 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float dgr,cent,cvrt;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Temperature Converter"<<endl;
    cout << "Input Degrees Fahrenheit"<<endl;
    cin >>dgr;
    cvrt = dgr-32;
    cent = 5.0/9.0*cvrt;
    cout <<showpoint<<setprecision(4)<<dgr<<" Degrees Fahrenheit = "<<cent<<" Degrees Centigrade";
    return 0;
}

