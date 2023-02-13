/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on February 11, 2023, 3:55 PM
 */

#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
#include <ctime>
#include <iostream>

//Function Prototypes 
char craps();
int money();
int winCnt();
int dcePrnt();

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
    do{ //Do-while to make user play 1 game and then give them the option to quit
        diceOne = rand() % num + 1; //First Dice roll randomly between 1-6
        diceTwo = rand() % num + 1; //Second Dice roll randomly between 1-6
        diceSum = diceOne + diceTwo; //Sum of both dice
        cout << "How much do you want to bet?"<<endl;
        cin>>bet; //Bet amount input by user
            while(bet < 1 || bet > money){ //Loops to make sure they can legally bet
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
        cin>>choice; //Input to choose between cases in Switch menu        
        switch(choice){ //Switch case menu to choose between playing Craps or checking money system balance
            case '1':{  //Case for checking money system balance      
            
            }
            break; //ends the switch case
            case '2':{ //2nd case to play Craps
                
            }
            break; //ends the switch case
            default:{ //If a non valid option for Switch Case is chosen
                cout << "Invalid Input!"<<endl;
            }
        }
        cout <<endl;
        cout << "You currently have: $" <<fixed<<setprecision(2)<<money<< " total."<<endl;
        cout << "Do you want to continue?"<<endl;
        cout << "Type 'yes' to continue, type 'no' to quit!"<<endl;
        while(!stop){ //While loop to make sure Valid Input is chosen for continuing or stopping program
            cin>>agn; //Input to no longer continue program
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
    }while(agn == "yes"); //If they type yes it allows them to play again
    return 0;
}

int money(){
    for(tempMon = money; tempMon > 9; tempMon-=10){ //For loop to count amount of 10 dollar bills
        bills++;
        }
        cout << "Your balance in amount of $10 bills is: "<<bills<<endl;
        overB = (tempMon > 0) ? tempMon : 0; //Ternary operator to find leftover non-ten dollar bills
        if(overB > 0){
            cout << "You have "<<overB<< " in one dollar bills."<<endl;
        }
        else{
            cout << "You have no one dollar bills."<<endl;
        }
        cout << "Because you choose to view your balance, you're bet money was returned."<<endl;
}

char craps(){
    cout << "You bet this much: $"<<fixed<<setprecision(2)<<bet<<endl<<endl;
    cout << "Do you want to pass line or don't pass line?"<<endl;
    cout << "Type Y for Pass line or N for Don't Pass Line."<<endl;
    cin>>pOptn; //Input to determine Craps Rule set
    pOptn = toupper(pOptn); //Makes it so a lowercase answer is acceptable
        if(pOptn == 'Y'){ //To play Pass Line rules
            cout << "You have chosen to Pass Line"<<endl;
            cout << "Dice roll 1 is : "<<diceOne<<endl;
            cout << "Dice roll 2 is : "<<diceTwo<<endl;
            cout << "You rolled a sum of "<<diceSum<<endl;
            if(diceSum == 7 || diceSum == 11){ //Pass Line Rule set to win
                cout << "You doubled the money you bet!"<<endl;
                if(rand() % 20 == 0){ //Gives a 1 in 20 chance for IF statement to activate
                            money = money + pow(bet,2); //squares the bet input
                            cout << "Congratulations your bet was squared."<<money<<endl;
                        }
                money += bet; //Adds the money bet to the balance
            }
            else if(diceSum == 2 || diceSum == 3 || diceSum == 12){ //Pass Line Rule set to lose
                cout << "You lost..."<<endl;
                money -= bet; //Subtracts the money bet from the balance
            }
            else{ //Pass Line Rule set for numbers not included in automatic win/loss
                cout << "You got a point: "<<diceSum<<endl;
                cout << "Try to roll "<<diceSum<< " again before a 7 to double the money you bet!"<<endl;
                point = 0;
                while(point < 1){ //While loop to guarantee 7 or same roll because of the rule set
                    dceOneP = rand() % num + 1; //2nd "first" dice roll
                    dceTwoP = rand() % num + 1; //2nd "second" dice roll
                    dceSum2 = dceOneP + dceTwoP; //2nd "sum" of dice rolls
                    if(dceSum2 == 7){ //Pass Line Rule set for point loss
                        cout << "Dice roll 1 is : "<<dceOneP<<endl;
                        cout << "Dice roll 2 is : "<<dceTwoP<<endl;
                        cout << "You rolled a sum of "<<dceSum2<<endl;
                        cout << "You lost..."<<endl;
                        money -= bet; //Subtracts the money bet from the balance
                        point++; //Stops the while loop because a condition was met
                    }
                    if(dceSum2 == diceSum){ //Pass Line Rule set for point win
                        cout << "Dice roll 1 is : "<<dceOneP<<endl;
                        cout << "Dice roll 2 is : "<<dceTwoP<<endl;
                        cout << "You rolled a sum of "<<dceSum2<<endl;
                        cout << "You doubled the money you bet!"<<endl;
                        if(rand() % 20 == 0){ //Gives a 1 in 20 chance for IF statement to activate
                            money = money + pow(bet,2); //squares the bet input
                            cout << "Congratulations your bet was squared."<<money<<endl;
                        }
                        money += bet; //Adds the money bet to the balance
                        point++; //Stops the while loop because a condition was met
                    }
                }
            }
        }
        else if(pOptn == 'N'){ //To play Don't Pass Line Rules
            cout << "You have chosen the Don't Pass Line option"<<endl;
            cout << "Dice roll 1 is : "<<diceOne<<endl;
            cout << "Dice roll 2 is : "<<diceTwo<<endl;
            cout << "You rolled a sum of "<<diceSum<<endl;
            if(diceSum == 7 || diceSum == 11){
                cout << "You lost..."<<endl;
                money -= bet; //Subtracts the money bet from the balance
            }
            else if(diceSum == 2 || diceSum == 3 || diceSum == 12){
                cout << "You doubled the money you bet!"<<endl;
                if(rand() % 20 == 0){ //Gives a 1 in 20 chance for IF statement to activate
                            money = money + pow(bet,2); //squares the bet input
                            cout << "Congratulations your bet was squared."<<money<<endl;
                        }
                money += bet; //Adds the money bet to the balance
            }
            else{
                cout << "You got a point: "<<diceSum<<endl;
                cout << "Try to roll a 7 before rolling a "<<diceSum<< " again to double the money you bet!"<<endl;
                point = 0;
                while(point < 1){
                    dceOneP = rand() % num + 1; //2nd "first" dice roll
                    dceTwoP = rand() % num + 1; //2nd "second" dice roll
                    dceSum2 = dceOneP + dceTwoP; //2nd "sum" of dice rolls
                    if(dceSum2 == diceSum){
                        cout << "Dice roll 1 is : "<<dceOneP<<endl;
                        cout << "Dice roll 2 is : "<<dceTwoP<<endl;
                        cout << "You rolled a sum of "<<dceSum2<<endl;
                        cout << "You lost..."<<endl;
                        money -= bet; //Subtracts the money bet from the balance
                        point++; //Stops the while loop because a condition was met
                    }
                    if(dceSum2 == 7){
                        cout << "Dice roll 1 is : "<<dceOneP<<endl;
                        cout << "Dice roll 2 is : "<<dceTwoP<<endl;
                        cout << "You rolled a sum of "<<dceSum2<<endl;
                        cout << "You doubled the money you bet!"<<endl;
                        if(rand() % 20 == 0){ //Gives a 1 in 20 chance for IF statement to activate
                            money = money + pow(bet,2); //squares the bet input
                            cout << "Congratulations your bet was squared."<<money<<endl;
                        }
                        money += bet; //Adds the money bet to the balance
                        point++; //Stops the while loop because a condition was met
                    }
                }
            }
        }
        else { //If a non valid option for Pass line/Don't Pass line is chosen
            cout << "Not an option."<<endl;
        }
}