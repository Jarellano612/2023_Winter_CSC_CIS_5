/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 16, 2023, 4:41 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
int value;
    int posSum,negSum;
    
    //Initialize Variables
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    posSum=negSum=0;
    
    //Map/Process the Inputs -> Outputs
    cin>>value;
    posSum+=value>0?value:0;
    negSum+=value<0?value:0;
    cin>>value;
    posSum+=value>0?value:0;
    negSum+=value<0?value:0;
    cin>>value;
    posSum+=value>0?value:0;
    negSum+=value<0?value:0;
    cin>>value;
    posSum+=value>0?value:0;
    negSum+=value<0?value:0;
    cin>>value;
    posSum+=value>0?value:0;
    negSum+=value<0?value:0;
    cin>>value;
    posSum+=value>0?value:0;
    negSum+=value<0?value:0;
    cin>>value;
    posSum+=value>0?value:0;
    negSum+=value<0?value:0;
    cin>>value;
    posSum+=value>0?value:0;
    negSum+=value<0?value:0;
    cin>>value;
    posSum+=value>0?value:0;
    negSum+=value<0?value:0;
    cin>>value;
    posSum+=value>0?value:0;
    negSum+=value<0?value:0;
    
    //Display Inputs/Outputs
    cout<<"Negative sum ="<<setw(4)<<negSum<<endl;
    cout<<"Positive sum ="<<setw(4)<<posSum<<endl;
    cout<<"Total sum    ="<<setw(4)<<posSum+negSum;
    return 0;
}

