/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 16, 2023, 3:57 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
     float prev,retro,newS,newMS;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Input previous annual salary."<<endl;
    cin >>prev;
    newS = prev*.076+prev;
    retro = (newS-prev)/2;
    newMS = newS/12;
    cout<< "Retroactive pay    = $"<<setw(7)<<fixed<<setprecision(2)<<retro<<endl;
    cout<< "New annual salary  = $"<<setw(7)<<fixed<<setprecision(2)<<newS<<endl;
    cout<< "New monthly salary = $"<<setw(7)<<fixed<<setprecision(2)<<newMS;
    
    return 0;
}

