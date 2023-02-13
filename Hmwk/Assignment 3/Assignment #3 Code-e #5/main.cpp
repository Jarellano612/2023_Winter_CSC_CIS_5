/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 17, 2023, 2:19 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char pck;
    int hrs,newHrs;
    float cost,pckA=9.95,pckB=14.95,pckC=19.95;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout <<"ISP Bill"<<endl;
    cout <<"Input Package and Hours"<<endl;
    cin >>pck>>hrs;
    if(pck == 'A'){
        if(hrs>10){
            newHrs = hrs-10;
            cost = pckA+newHrs*2;
        }
        else{
            cost=pckA;
        }
        cout <<"Bill = $"<<fixed<<showpoint<<setprecision(2)<<setw(6)<<cost;
    }
    if(pck == 'B'){
        if(hrs>20){
            newHrs = hrs-20;
            cost = pckB+newHrs*1;
        }
        else{
            cost =pckB;
        }
        cout <<"Bill = $"<<fixed<<showpoint<<setprecision(2)<<setw(6)<<cost;
    }
    if(pck == 'C'){
        cost = pckC;
        cout <<"Bill = $"<<fixed<<showpoint<<setprecision(2)<<setw(6)<<cost;
    }
    return 0;
}

