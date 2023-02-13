/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 16, 2023, 12:46 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float mny,cost;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Insurance Calculator"<<endl;
    cout << "How much is your house worth?"<<endl;
    cin >>cost;
    mny = cost*0.8;
    cout << "You need $"<<mny<<" of insurance.";
    return 0;
}

