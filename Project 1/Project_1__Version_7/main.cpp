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
    //Declared Variables
    string agn;
    int num = 6,point;
    unsigned int diceOne = 0,diceTwo = 0,diceSum,dceSum2,dceOneP = 0,dceTwoP = 0;
    char pOptn,choice;
    float money = 100,bet,tempMon,bills,overB;
    bool stop;
    cout << "Welcome to the casino game Craps!"<<endl;
    do{ 
        diceOne = rand() % num + 1; 
        diceTwo = rand() % num + 1; 
        diceSum = diceOne + diceTwo; 
        cout << "How much do you want to bet?"<<endl;
        cin>>bet; 
            while(bet < 1 || bet > money){ 
                if(bet < 1){
                    cout << "You have to bet more money to play!"<<endl;
                    cout << "Reenter the amount of money you want to bet!"<<endl;
                }
                else{
                    cout << "You can't bet more money than you have."<<endl;
                    cout << "Reenter the amount of money you want to bet!"<<endl;
                }
                cin>>bet;
                }
        cout << "Do you want to check how many bills you have or play Craps first?"<<endl;
        cout << "Type '1' to check your money."<<endl;
        cout << "Type '2' to play Craps for money."<<endl;
        cin>>choice;       
        switch(choice){ 
            case '1':{       
                for(tempMon = money; tempMon > 9; tempMon-=10){ 
                    bills++;
                }
                cout << "Your balance in amount of $10 bills is: "<<bills<<endl;
                overB = (tempMon > 0) ? tempMon : 0; 
                if(overB > 0){
                    cout << "You have "<<overB<< " in one dollar bills."<<endl;
                }
                else{
                    cout << "You have no one dollar bills."<<endl;
                }
                cout << "Because you choose to view your balance, you're bet money was returned."<<endl;
            }
            break; 
            case '2':{ 
                cout << "You bet this much: $"<<fixed<<setprecision(2)<<bet<<endl<<endl;
                cout << "Do you want to pass line or don't pass line?"<<endl;
                cout << "Type Y for Pass line or N for Don't Pass Line."<<endl;
                cin>>pOptn;
                pOptn = toupper(pOptn); 
                    if(pOptn == 'Y'){ 
                        cout << "You have chosen to Pass Line"<<endl;
                        cout << "Dice roll 1 is : "<<diceOne<<endl;
                        cout << "Dice roll 2 is : "<<diceTwo<<endl;
                        cout << "You rolled a sum of "<<diceSum<<endl;
                        if(diceSum == 7 || diceSum == 11){ 
                            cout << "You doubled the money you bet!"<<endl;
                            if(rand() % 20 == 0){ 
                                        money = money + pow(bet,2);
                                        cout << "Congratulations your bet was squared."<<money<<endl;
                                    }
                            money += bet; 
                        }
                        else if(diceSum == 2 || diceSum == 3 || diceSum == 12){ 
                            cout << "You lost..."<<endl;
                            money -= bet; 
                        }
                        else{ 
                            cout << "You got a point: "<<diceSum<<endl;
                            cout << "Try to roll "<<diceSum<< " again before a 7 to double the money you bet!"<<endl;
                            point = 0;
                            while(point < 1){ 
                                dceOneP = rand() % num + 1; 
                                dceTwoP = rand() % num + 1; 
                                dceSum2 = dceOneP + dceTwoP; 
                                if(dceSum2 == 7){ 
                                    cout << "Dice roll 1 is : "<<dceOneP<<endl;
                                    cout << "Dice roll 2 is : "<<dceTwoP<<endl;
                                    cout << "You rolled a sum of "<<dceSum2<<endl;
                                    cout << "You lost..."<<endl;
                                    money -= bet; 
                                    point++; 
                                }
                                if(dceSum2 == diceSum){ 
                                    cout << "Dice roll 1 is : "<<dceOneP<<endl;
                                    cout << "Dice roll 2 is : "<<dceTwoP<<endl;
                                    cout << "You rolled a sum of "<<dceSum2<<endl;
                                    cout << "You doubled the money you bet!"<<endl;
                                    if(rand() % 20 == 0){ 
                                        money = money + pow(bet,2);
                                        cout << "Congratulations your bet was squared."<<money<<endl;
                                    }
                                    money += bet;
                                    point++; 
                                }
                            }
                        }
                    }
                    else if(pOptn == 'N'){
                        cout << "You have chosen the Don't Pass Line option"<<endl;
                        cout << "Dice roll 1 is : "<<diceOne<<endl;
                        cout << "Dice roll 2 is : "<<diceTwo<<endl;
                        cout << "You rolled a sum of "<<diceSum<<endl;
                        if(diceSum == 7 || diceSum == 11){
                            cout << "You lost..."<<endl;
                            money -= bet; 
                        }
                        else if(diceSum == 2 || diceSum == 3 || diceSum == 12){
                            cout << "You doubled the money you bet!"<<endl;
                            if(rand() % 20 == 0){
                                        money = money + pow(bet,2); 
                                        cout << "Congratulations your bet was squared."<<money<<endl;
                                    }
                            money += bet;
                        }
                        else{
                            cout << "You got a point: "<<diceSum<<endl;
                            cout << "Try to roll a 7 before rolling a "<<diceSum<< " again to double the money you bet!"<<endl;
                            point = 0;
                            while(point < 1){
                                dceOneP = rand() % num + 1; 
                                dceTwoP = rand() % num + 1; 
                                dceSum2 = dceOneP + dceTwoP;
                                if(dceSum2 == diceSum){
                                    cout << "Dice roll 1 is : "<<dceOneP<<endl;
                                    cout << "Dice roll 2 is : "<<dceTwoP<<endl;
                                    cout << "You rolled a sum of "<<dceSum2<<endl;
                                    cout << "You lost..."<<endl;
                                    money -= bet; 
                                    point++; 
                                }
                                if(dceSum2 == 7){
                                    cout << "Dice roll 1 is : "<<dceOneP<<endl;
                                    cout << "Dice roll 2 is : "<<dceTwoP<<endl;
                                    cout << "You rolled a sum of "<<dceSum2<<endl;
                                    cout << "You doubled the money you bet!"<<endl;
                                    if(rand() % 20 == 0){ 
                                        money = money + pow(bet,2);
                                        cout << "Congratulations your bet was squared."<<money<<endl;
                                    }
                                    money += bet; 
                                    point++;
                                }
                            }
                        }
                    }
                    else { 
                        cout << "Not an option."<<endl;
                    }
            }
            break;
            default:{
                cout << "Invalid Input!"<<endl;
            }
        }
        cout <<endl;
        cout << "You currently have: $" <<fixed<<setprecision(2)<<money<< " total."<<endl;
        cout << "Do you want to continue?"<<endl;
        cout << "Type 'yes' to continue, type 'no' to quit!"<<endl;
        while(!stop){
            cin>>agn;
            if(agn == "yes"){ 
                stop = true;
            }
            else if(agn == "no"){
                stop = true;
            }
            else{
                cout << "Invalid Input!"<<endl;
                cout << "Type in either 'yes' to continue or 'no' to stop"<<endl;
            }
        }
        cout<<endl;
    }while(agn == "yes");
    return 0;
}

