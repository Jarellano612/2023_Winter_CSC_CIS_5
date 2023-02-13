/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 16, 2023, 1:00 PM
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float one,rOne,rTwo,rThr,dgr;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Calculate trig functions"<<endl;
    cout << "Input the angle in degrees."<<endl;
    cin >> one;
    dgr = M_PI/180 *one;
    rOne = sin(dgr);
    rTwo = cos(dgr);
    rThr = tan(dgr);
    cout <<"sin("<<one<<") = "<<showpoint<<setprecision(4)<<rOne<<noshowpoint<<endl;
    cout <<"cos("<<one<<") = "<<showpoint<<setprecision(4)<<rTwo<<noshowpoint<<endl;
    cout <<"tan("<<one<<") = "<<showpoint<<setprecision(4)<<fixed<<rThr;
    return 0;
}

