/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on February 4, 2023, 1:45 PM
 */

#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
#include <ctime>
#include <iostream>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    srand(time(0)); //random number generated every time code is called
    
    int num = 6;
    int diceOne = 0;
    int diceTwo = 0;
    int diceSum;
    
    cout << "Welcome to the casino game Craps!"<<endl;
    
    diceOne = rand() % num + 1;
    diceTwo = rand() % num + 1;
    diceSum = diceOne + diceTwo;
    
    cout << "Dice roll 1 is : "<<diceOne<<endl;
    cout << "Dice roll 2 is : "<<diceTwo<<endl;
    cout << "Dice roll Sum is : "<<diceSum<<endl;

    return 0;
}

