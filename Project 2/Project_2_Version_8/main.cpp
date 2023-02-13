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
using namespace std;

//Function Prototypes 
char craps(float&);
void balance(float, float = 0);
void winCnt(vector<char>&);
void cnvrt(vector<char>&, char);
void sort(char*,int);
void sort(vector<char>&);
void dcePrnt(int);
void menu(float&, vector<char>&, char []);
void wrning();

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
    char array[100];
    cout << "Welcome to the Casino!"<<endl;
    do{ //Do-while to make user play 1 game and then give them the option to quit
        cout << "Do you want to check how your balance, play Craps first, check your wins and losses, or exit the program?"<<endl;
        cout << "Type '1' to check your money."<<endl;
        cout << "Type '2' to play Craps for money."<<endl; 
        cout << "Type '3' to look at your wins and losses."<<endl;
        cout << "Type '4' to completely exit the game! Warning: Pressing this will"<<endl;
        cout << "end the code completely and all progress will be lost!"<<endl;
        //Calling Menu Function
        menu(money, winloss, array);
        cout <<endl;
        cout << "You currently have: $" <<fixed<<setprecision(2)<<money<< " total."<<endl;
        cout << "Do you want to continue?"<<endl; 
        cout << "Type 'yes' to continue, type 'no' to quit!"<<endl;
        stop = false;
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

//Functions
void menu(float& money, vector<char>& wl,char array[]){
    //Declared Variables for the function MENU
    char choice;
    char wlTemp;
    cin>>choice; //Input to choose between cases in Switch menu 
    switch(choice){ //Switch case menu to choose between playing Craps or checking money system balance
            case '1':{  //Case for checking money system balance      
                balance(money); //Calls balance function to check the balance system
            }
            break; //ends the switch case
            case '2':{ //2nd case to play Craps
                wlTemp = craps(money); //Calls craps function to play craps
                if(wlTemp != '0'){
                    wl.push_back(wlTemp); 
                }
            }
            break; //ends the switch case
            case '3':{ //3rd case to check your wins and losses
                winCnt(wl); //Calls the winCnt function to check the win/loss count
                sort(array,wl.size());
                sort(wl);
            }
            break;// ends the switch case
            case '4':{ //4th case to end the program
                wrning();// Calls wrning function
            }
            break;// ends the switch case
            default:{ //If a non valid option for Switch Case is chosen
                cout << "Invalid Input!"<<endl;
            }
        }
}

void balance(float money, float bills){
    //Declared Variables for the function BALANCE
    float tempMon,overB;
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
    //Declared Variables for the function CRAPS
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
            dcePrnt(diceOne);
            cout << "Dice roll 2 is : "<<diceTwo<<endl;
            dcePrnt(diceTwo);
            cout << "You rolled a sum of "<<diceSum<<endl;
            if(diceSum == 7 || diceSum == 11){ //Pass Line Rule set to win
                cout << "You doubled the money you bet!"<<endl;
                if(rand() % 20 == 0){ //Gives a 1 in 20 chance for IF statement to activate
                            money = money + pow(bet,2); //squares the bet input
                            cout << "Congratulations your bet was squared."<<money<<endl;
                        }
                money += bet; //Adds the money bet to the balance
                return 'W'; //returns a win to the win/loss counting function
            }
            else if(diceSum == 2 || diceSum == 3 || diceSum == 12){ //Pass Line Rule set to lose
                cout << "You lost..."<<endl;
                money -= bet; //Subtracts the money bet from the balance
                return 'L'; //returns a loss to the win/loss counting function
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
                        dcePrnt(dceOneP);
                        cout << "Dice roll 2 is : "<<dceTwoP<<endl;
                        dcePrnt(dceTwoP);
                        cout << "You rolled a sum of "<<dceSum2<<endl;
                        cout << "You lost..."<<endl;
                        money -= bet; //Subtracts the money bet from the balance
                        point++; //Stops the while loop because a condition was met
                        return 'L';
                    }
                    if(dceSum2 == diceSum){ //Pass Line Rule set for point win
                        cout << "Dice roll 1 is : "<<dceOneP<<endl;
                        dcePrnt(dceOneP);
                        cout << "Dice roll 2 is : "<<dceTwoP<<endl;
                        dcePrnt(dceTwoP);
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
            dcePrnt(diceOne);
            cout << "Dice roll 2 is : "<<diceTwo<<endl;
            dcePrnt(diceTwo);
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
                        dcePrnt(dceOneP);
                        cout << "Dice roll 2 is : "<<dceTwoP<<endl;
                        dcePrnt(dceTwoP);
                        cout << "You rolled a sum of "<<dceSum2<<endl;
                        cout << "You lost..."<<endl;
                        money -= bet; //Subtracts the money bet from the balance
                        point++; //Stops the while loop because a condition was met
                        return 'L';
                    }
                    if(dceSum2 == 7){
                        cout << "Dice roll 1 is : "<<dceOneP<<endl;
                        dcePrnt(dceOneP);
                        cout << "Dice roll 2 is : "<<dceTwoP<<endl;
                        dcePrnt(dceTwoP);
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
    //Declared Variables for the function WINCNT
    cout<< "Your win loss ratio: "<<endl;
    int win = 0;
    int loss = 0;
    int size = wl.size();
    int tempVec;
    int k = 0;
    for (int j = 0; j < size - 1; j++){
        int wlSel = wl.at(j);
        tempVec = j;
        for(k = j + 1; k < size; k++){
            if(wlSel > wl.at(k)){
                wlSel = wl.at(k);
                tempVec = k;
            }
        }
    }
    int i = 0;
    while(i < size){
        if(wl.at(i) == 'W'){
            win++; //keeps track of the amount of wins being returned from Craps
        }
        else{
            loss++; //keeps track of the amount of losses being returned from Craps
        }
        cout<<wl.at(i)<<" "; 
        i++;  //keeps track of the amount of games played 
    }
    cout<<endl;
    cout << "Wins: "<<win<<endl;
    cout << "Loss: "<<loss<<endl;
}
void cnvrt(vector<char>& vec, char array[]){
    //Declared Variables for the function CNVRT
    int i = 0;
    int size = vec.size();
    while(i < size){
        array[i] = vec.at(i);
        i++;  
    }
    sort(array,size);
}
void sort(char array[],int size){
    //Declared Variables for the function SORT w/ arrays
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
void sort(vector<char>& vec){
    //Declared Variables for the function SORT w/ vectors
    char tmpVec;
    int size = vec.size();
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - 1; j++){
            if((vec.at(j),vec.at(j + 1)) > 0){
                tmpVec = vec.at(j);
                vec.at(j) = vec.at(j + 1);
                vec.at(j + 1) = tmpVec;
            }
        }
    }
}
//Function which outputs the dice when dice is rolled during Craps
void dcePrnt(int dice){
    if(dice == 6){
        cout << "===================="<<endl;
        cout << "|                  |"<<endl;
        cout << "|     •       •    |"<<endl;
        cout << "|     •       •     |"<<endl;
        cout << "|     •       •    |"<<endl;
        cout << "|                  |"<<endl;
        cout << "===================="<<endl;
    }
    else if(dice == 5){
        cout << "===================="<<endl;
        cout << "|                  |"<<endl;
        cout << "|     •       •    |"<<endl;
        cout << "|         •        |"<<endl;
        cout << "|     •       •    |"<<endl;
        cout << "|                  |"<<endl;
        cout << "===================="<<endl;
    }
    else if(dice == 4){
        cout << "===================="<<endl;
        cout << "|                  |"<<endl;
        cout << "|     •       •    |"<<endl;
        cout << "|                  |"<<endl;
        cout << "|     •       •    |"<<endl;
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
        cout << "|             •    |"<<endl;
        cout << "|                  |"<<endl;
        cout << "|     •            |"<<endl;
        cout << "|                  |"<<endl;
        cout << "===================="<<endl;
    }
    else{
        cout << "===================="<<endl;
        cout << "|                   |"<<endl;
        cout << "|                   |"<<endl;
        cout << "|         •         |"<<endl;
        cout << "|                   |"<<endl;
        cout << "|                   |"<<endl;
        cout << "===================="<<endl;
    }
}
//Function which shuts off program completely
void wrning(){
    cout << "You have been warned."<<endl;
    cout << "Exiting code!"<<endl;
    exit(4);
}