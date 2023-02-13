/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 13, 2023, 5:00 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    float a,b,c,d;
    //Initialize or input data here
    cin>>a>>b>>c>>d;
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    
    cout<<noshowpoint<<setw(9)<<a<<setw(10)<<showpoint<<fixed<<setprecision(1)<<a<<setw(10)<<fixed<<setprecision(2)<<a<<endl;
    cout<<noshowpoint<<setprecision(0)<<fixed<<setw(9)<<b<<setw(10)<<showpoint<<fixed<<setprecision(1)<<b<<setw(10)<<fixed<<setprecision(2)<<b<<endl;
    cout<<noshowpoint<<setprecision(0)<<fixed<<setw(9)<<c<<setw(10)<<showpoint<<fixed<<setprecision(1)<<c<<setw(10)<<fixed<<setprecision(2)<<c<<endl;
    cout<<noshowpoint<<setprecision(0)<<fixed<<setw(9)<<d<<setw(10)<<showpoint<<fixed<<setprecision(1)<<d<<setw(10)<<fixed<<setprecision(2)<<d;
    //Format and display outputs here
    
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}

