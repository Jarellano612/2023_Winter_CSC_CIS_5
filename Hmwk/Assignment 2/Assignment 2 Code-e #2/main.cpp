/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 16, 2023, 12:40 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float ckies,cal;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Calorie Counter" <<endl;
    cout << "How many cookies did you eat?"<<endl;
    cin >>ckies;
    cal = ckies*75;
    cout << "You consumed "<<cal<<" calories.";
    return 0;
}

