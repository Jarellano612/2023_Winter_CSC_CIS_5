/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 16, 2023, 1:47 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int hrs,pay;
    float grsPay;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "This program calculates the gross paycheck."<<endl;
    cout << "Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin >>pay;
    cin >>hrs;
    if (hrs>40)
    grsPay = ((hrs-40)*pay*2)+40*pay;
    else grsPay = pay*hrs;
    cout << "Paycheck = $"<<fixed<<setprecision(2)<<setw(7)<<grsPay;
    return 0;
}

