/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 13, 2023, 8:08 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int travel,gallons,refuel;
    gallons = 15;
    travel = 375;
    refuel = travel/gallons;
    cout<<"Your car which can go "<<travel<<" miles and hold "<<gallons<<" gallons can go "<<refuel<<" miles per every gallon.";
    return 0;
}

