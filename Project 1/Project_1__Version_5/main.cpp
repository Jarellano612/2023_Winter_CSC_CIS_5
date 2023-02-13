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
    string agn;
    int num = 6,point;
    unsigned int diceOne = 0,diceTwo = 0,diceSum,dceSum2,dceOneP = 0,dceTwoP = 0;
    char pOptn;
    
    cout << "Welcome to the casino game Craps!"<<endl;
    do{ //Do-while to make user play 1 game and then give them the option to quit
    
    diceOne = rand() % num + 1;
    diceTwo = rand() % num + 1;
    diceSum = diceOne + diceTwo;
    
    cout << "Dice roll 1 is : "<<diceOne<<endl;
    cout << "Dice roll 2 is : "<<diceTwo<<endl;
    cout << "Dice roll Sum is : "<<diceSum<<endl;
    
        cout << "Do you want to pass line or don't pass line?"<<endl;
        cout << "Type Y for Pass line or N for Don't Pass Line"<<endl;
        cin>>pOptn;
        pOptn = toupper(pOptn); //Makes it so a lowercase answer is acceptable

            if(pOptn == 'Y'){ //To play Pass Line rules
                cout << "You have chosen to Pass Line"<<endl;
                cout << "You rolled a "<<diceSum<<endl;
                if(diceSum == 7 || diceSum == 11){
                    cout << "You doubled your money!"<<endl;
                }
                else if(diceSum == 2 || diceSum == 3 || diceSum == 12){
                    cout << "You lost..."<<endl;
                }
                else{
                    cout << "You got a point: "<<diceSum<<endl;
                    cout << "Try to roll "<<diceSum<< " again before a 7 to double your money!"<<endl;
                    point = 0;
                    while(point < 1){
                        dceOneP = rand() % num + 1;
                        dceTwoP = rand() % num + 1;
                        dceSum2 = dceOneP + dceTwoP;
                        if(dceSum2 == 7){
                            cout << "You rolled a "<<dceSum2<<endl;
                            cout << "You lost..."<<endl;
                            point++;
                        }
                        if(dceSum2 == diceSum){
                            cout << "You rolled a "<<dceSum2<<endl;
                            cout << "You doubled your money!"<<endl;
                            point++;
                        }
                    }
                }
            }
            else if(pOptn == 'N'){ //To play Don't Pass Line Rules
                cout << "You have chosen the Don't Pass Line option"<<endl;
                cout << "You rolled a "<<diceSum<<endl;
                if(diceSum == 7 || diceSum == 11){
                    cout << "You lost..."<<endl;
                }
                else if(diceSum == 2 || diceSum == 3 || diceSum == 12){
                    cout << "You won!"<<endl;
                }
                else{
                    cout << "You got a point: "<<diceSum<<endl;
                    cout << "Try to roll a 7 before rolling a "<<diceSum<< " again to double your money!"<<endl;
                    point = 0;
                    while(point < 1){
                        dceOneP = rand() % num + 1;
                        dceTwoP = rand() % num + 1;
                        dceSum2 = dceOneP + dceTwoP;
                        if(dceSum2 == diceSum){
                            cout << "You rolled a "<<dceSum2<<endl;
                            cout << "You lost..."<<endl;
                            point++;
                        }
                        if(dceSum2 == 7){
                            cout << "You rolled a "<<dceSum2<<endl;
                            cout << "You doubled your money!"<<endl;
                            point++;
                        }
                    }
                }
            }
            else {
                cout << "Not an option."<<endl;
            }
        cout << "Do you want to play again?"<<endl;
        cout << "Type 'yes' to play again, type 'no' to stop!"<<endl;
        cin>>agn;
    }while(agn == "yes"); //If they type yes it allows them to play again
    return 0;
}

