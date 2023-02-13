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
    int num = 6,frsEnd;
    unsigned int diceOne = 0,diceTwo = 0,diceSum;
    char pOptn;
    diceOne = rand() % num + 1;
    diceTwo = rand() % num + 1;
    diceSum = diceOne + diceTwo;
    
    cout << "Dice roll 1 is : "<<diceOne<<endl;
    cout << "Dice roll 2 is : "<<diceTwo<<endl;
    cout << "Dice roll Sum is : "<<diceSum<<endl;
    
    cout << "Welcome to the casino game Craps!"<<endl;
    do{
        frsEnd == 1;
        cout << "Do you want to pass line or don't pass line?"<<endl;
        cout << "Type Y for Pass line or N for Don't Pass Line"<<endl;
        cin>>pOptn;
        pOptn = toupper(pOptn);

            if(pOptn == 'Y'){
                cout << "You have chosen to Pass Line"<<endl;
                cout << "You rolled a "<<diceSum<<endl;
                if(diceSum == 7 || diceSum == 11){
                    cout << "You doubled your money!"<<endl;
                }
                else if(diceSum == 2 || diceSum == 3 || diceSum == 12){
                    cout << "You lost..."<<endl;
                }
                else{
                    diceOne = rand() % num + 1;
                    diceTwo = rand() % num + 1;
                    diceSum = diceOne + diceTwo;
                    if(diceSum == 7){
                        cout << "You rolled a "<<diceSum<<endl;
                        cout << "You lost..."<<endl;
                    }
                    else{
                        cout << "You rolled a "<<diceSum<<endl;
                        cout << "You doubled your money!"<<endl;
                    }
                }
            }
            else if(pOptn == 'N'){
                cout << "You have chosen the Don't Pass Line option"<<endl;
                cout << "You rolled a "<<diceSum<<endl;
                if(diceSum == 7 || diceSum == 11){
                    cout << "You lost..."<<endl;
                }
                else if(diceSum == 2 || diceSum == 3 || diceSum == 12){
                    cout << "You won!"<<endl;
                }
                else{

                }
            }
            else {
                cout << "Not an option."<<endl;
                frsEnd == 0;
            }
        cout << "Do you want to play again?"<<endl;
        cout << "Type 'yes' to play again, type 'no' to stop!"<<endl;
        cin>>agn;
    }while(agn == "yes");
    return 0;
}

