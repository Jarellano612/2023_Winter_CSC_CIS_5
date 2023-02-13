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
#include <vector>

//Function Prototypes 
char craps(float&);
void balance(float);
void winCnt(vector<char>&);
char cnvrt(vector<char>&);
void bblSort(char&,int);
void dcePrnt();
void menu(float&);
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    srand(time(0)); //random number generated every time code is called
    //Declared Variables
    string agn;
    bool stop;
    float money = 100;
    vector<char> winloss;
    cout << "Welcome to the Casino!"<<endl;
    do{ //Do-while to make user play 1 game and then give them the option to quit
        cout << "Do you want to check how many bills you have or play Craps first?"<<endl;
        cout << "Type '1' to check your money."<<endl;
        cout << "Type '2' to play Craps for money."<<endl; 
        menu(money);
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

void menu(float& money){
    char choice;
    cin>>choice; //Input to choose between cases in Switch menu 
    switch(choice){ //Switch case menu to choose between playing Craps or checking money system balance
            case '1':{  //Case for checking money system balance      
                balance(money);
            }
            break; //ends the switch case
            case '2':{ //2nd case to play Craps
                craps(money);
            }
            break; //ends the switch case
            case '3':{
                wnCnt(wl);
            }
            break;
            default:{ //If a non valid option for Switch Case is chosen
                cout << "Invalid Input!"<<endl;
            }
        }
}

void balance(float money){
    float tempMon,bills = 0,overB;
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

char craps(float& money){
    char pOptn;
    float bet;
    int num = 6,point;
    unsigned int diceOne = 0,diceTwo = 0,diceSum,dceSum2,dceOneP = 0,dceTwoP = 0;
    cout << "Welcome to the Craps game of the Casino!"<<endl;
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
    diceOne = rand() % num + 1; //First Dice roll randomly between 1-6
    diceTwo = rand() % num + 1; //Second Dice roll randomly between 1-6
    diceSum = diceOne + diceTwo; //Sum of both dice
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
                return 'W';
            }
            else if(diceSum == 2 || diceSum == 3 || diceSum == 12){ //Pass Line Rule set to lose
                cout << "You lost..."<<endl;
                money -= bet; //Subtracts the money bet from the balance
                return 'L';
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
                        return 'L';
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
                        return 'W';
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
                return 'L';
            }
            else if(diceSum == 2 || diceSum == 3 || diceSum == 12){
                cout << "You doubled the money you bet!"<<endl;
                if(rand() % 20 == 0){ //Gives a 1 in 20 chance for IF statement to activate
                            money = money + pow(bet,2); //squares the bet input
                            cout << "Congratulations your bet was squared."<<money<<endl;
                        }
                money += bet; //Adds the money bet to the balance
                return 'W'; 
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
                        return 'L';
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
                        return 'W';
                    }
                }
            }
        }
        else { //If a non valid option for Pass line/Don't Pass line is chosen
            cout << "Not an option."<<endl;
            return '0';
        }
    return '0';
}

void winCnt(vector<char>& wl){
    int win = 0;
    int loss = 0;
    int i = 0;
    int size = wl.size();
    int tempVec;
    for (int j = 0; j < size - 1; j++){
        int wlSel = vec.at(j);
        tempVec = j;
        for(int k = k + 1; j < size; k++){
            if(wlSel > vec.at(k)){
                wlSel = vec.at(k);
                tempVec = k;
            }
        }
    }
    while(i < size){
        if(wl.at(i) == 'W'){
            win++;
        }
        else{
            loss++;
        }
        cout<<wl.at(i); 
        i++;  
    }
    
}

char cnvrt(vector<char>& vec){
    int i = 0;
    int size = vec.size();
    char array[size];
    while(i < size){
        array[i] = vec.at(i);
        i++;  
    }
    bblSort(array,size);
    return array;
}

void bblSort(char& array[],int size){
    char tmpArr;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - 1; j++){
            if((array[j],array[j + 1]) > 0){
                tmpArr = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmpArr;
            }
        }
    }
}

void dcePrnt(){
    if(dice == 6){
        cout << "===================="<<endl;
        cout << "|                  |"<<endl;
        cout << "|     •       •     |"<<endl;
        cout << "|     •       •     |"<<endl;
        cout << "|     •       •     |"<<endl;
        cout << "|                  |"<<endl;
        cout << "===================="<<endl;
    }
    else if(dice == 5){
        cout << "===================="<<endl;
        cout << "|                  |"<<endl;
        cout << "|     •       •     |"<<endl;
        cout << "|         •         |"<<endl;
        cout << "|     •       •     |"<<endl;
        cout << "|                  |"<<endl;
        cout << "===================="<<endl;
    }
    else if(dice == 4){
        cout << "===================="<<endl;
        cout << "|                  |"<<endl;
        cout << "|     •       •     |"<<endl;
        cout << "|                  |"<<endl;
        cout << "|     •       •     |"<<endl;
        cout << "|                  |"<<endl;
        cout << "===================="<<endl;
    }
    else if(dice == 3){
        cout << "===================="<<endl;
        cout << "|                  |"<<endl;
        cout << "|            •     |"<<endl;
        cout << "|        •         |"<<endl;
        cout << "|     •            |"<<endl;
        cout << "|                  |"<<endl;
        cout << "===================="<<endl;
    }
    else if(dice == 2){
        cout << "===================="<<endl;
        cout << "|                  |"<<endl;
        cout << "|             •     |"<<endl;
        cout << "|                  |"<<endl;
        cout << "|     •             |"<<endl;
        cout << "|                  |"<<endl;
        cout << "===================="<<endl;
    }
    else (dice == 1){
        cout << "===================="<<endl;
        cout << "|                   |"<<endl;
        cout << "|                   |"<<endl;
        cout << "|         •         |"<<endl;
        cout << "|                   |"<<endl;
        cout << "|                   |"<<endl;
        cout << "===================="<<endl;
    }
}