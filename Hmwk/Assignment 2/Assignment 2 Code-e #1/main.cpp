/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 16, 2023, 12:35 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float one,two,thr,fur,fve,sum,ttl;
    one = 1;
    two = 2;
    thr = 3;
    fur = 4;
    fve = 5;
  
    cout << "Input 5 numbers to average." <<endl;
    cin >> one>>two>>thr>>fur>>fve;
    sum = one+two+thr+fur+fve;
    ttl = sum/5;
    cout << "The average = "<<showpoint<<setprecision(2)<<ttl;
    return 0;
}

