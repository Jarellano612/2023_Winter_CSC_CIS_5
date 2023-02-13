/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 13, 2023, 7:54 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float rising,fifthR,seventhR,tenthR;
    rising = 1.5;
    fifthR = 1.5+5*1.5;
    seventhR = fifthR+2*1.5;
    tenthR = seventhR+3*1.5;
    cout<<"In 10 years, the ocean floor would have risen "<<tenthR<< " millimeters.";
    return 0;
}

