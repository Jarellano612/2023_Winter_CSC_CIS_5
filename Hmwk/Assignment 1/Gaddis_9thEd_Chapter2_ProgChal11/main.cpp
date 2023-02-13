/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 13, 2023, 8:25 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float tank,highwy,town,dstnceT,dstnceH;
    tank = 20;
    highwy = 28.9;
    town = 23.5;
    dstnceT = town*tank;
    dstnceH = highwy*tank;
    
    cout<<"Your car has "<<tank<<" gallons. It can go "<<highwy<<" miles per gallon on the highway and "<<town<<" miles per gallon in town."<<endl;
    cout<<"This means while in town you can travel "<<dstnceT<<" miles, while on the highway you can travel "<<dstnceH<<" miles.";
    return 0;
}

