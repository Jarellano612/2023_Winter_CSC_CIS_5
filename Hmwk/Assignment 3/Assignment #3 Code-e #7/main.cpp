/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 17, 2023, 5:42 PM
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n1000s, n100s, n10s, n1s;
    unsigned short stnd;
    string rmNum = "";
    //Initialize or input i.e. set variable values
    cout<<"Arabic to Roman numeral conversion." << endl;
    cout<<"Input the integer to convert." << endl;
    cin >> stnd;
    n1000s = stnd / 1000;
    n100s  = (stnd - n1000s * 1000) / 100;
    n10s   = stnd % 100/ 10;
    n1s    = stnd % 10;
    
    switch(n1000s){
        case 3: rmNum += "M";
        case 2: rmNum += "M";
        case 1: rmNum += "M";
    }
    //convert the 100s
    switch(n100s){
        case 9: {
            rmNum += "C";
            rmNum += "M";
            break;
        }
        case 8: case 7: case 6: {
            rmNum += "D";
            for (int i = 0; i < n100s - 5; i++) rmNum += "C";
            break;
        }
        case 5: {
            rmNum += "D";
            break;
        }
        case 4: {
            rmNum += "C";
            rmNum += "D";
            break;
        }
        case 3: case 2: case 1: {
            for (int i = 0; i < n100s; i++) rmNum += "C";
            break;
        }

    }
    //convert the 10s
     switch(n10s){
        case 9: {
            rmNum += "X";
            rmNum += "C";
            break;
        }
        case 8: case 7: case 6: {
            rmNum += "L";
            for (int i = 0; i < n10s - 5; i++) rmNum += "X";
            break;
        }
        case 5: {
            rmNum += "L";
            break;
        }
        case 4: {
            rmNum += "X";
            rmNum += "L";
            break;
        }
        case 3: case 2: case 1: {
            for (int i = 0; i < n10s; i++) rmNum += "X";
            break;
        }
    }
    //convert the 1s
    switch(n1s){
        case 9: {
            rmNum += "I";
            rmNum += "X";
            break;
        }
        case 8: case 7: case 6: {
            rmNum += "V";
            for (int i = 0; i < n1s - 5; i++) rmNum += "I";
            break;
        }
        case 5: {
            rmNum += "V";
            break;
        }
        case 4: {
            rmNum += "I";
            rmNum += "V";
            break;
        }
        case 3: case 2: case 1: {
            for (int i = 0; i < n1s; i++) rmNum += "I";
            break;
        }
    }

    //Map inputs -> outputs
    stnd < 1000 || stnd > 3000
        ? cout << stnd << " is Out of Range!"
        : cout << stnd << " is equal to " << rmNum;
    return 0;
}

