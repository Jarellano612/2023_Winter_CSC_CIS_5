/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 13, 2023, 5:06 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float milBdgt,fedBdgt,mlPrcnt;
    milBdgt=7.77e11f;    //Military Budget = 777 Billion   
    fedBdgt=6.272e12f;    //Federal Budget  = 6.272 Trillion
    
    mlPrcnt = milBdgt/fedBdgt *100;
    cout<<mlPrcnt;
    
    return 0;
}

