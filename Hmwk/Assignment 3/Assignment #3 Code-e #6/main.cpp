/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 17, 2023, 5:30 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char play1,play2;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Rock Paper Scissors Game"<<endl;
    cout << "Input Player 1 and Player 2 Choices"<<endl;
    cin >>play1>>play2;
    play1 = toupper(play1);
    play2 = toupper(play2);
    //Display the outputs
    if(play1 == 'R' && play2 == 'P' || play1 == 'P' && play2 == 'R'){
        cout <<"Paper covers rock.";
    }
    if(play1 == 'R' && play2 == 'S' || play1 == 'S' && play2 == 'R'){
        cout <<"Rock breaks scissors.";
    }
    if(play1 == 'S' && play2 == 'P' || play1 == 'P' && play2 == 'S'){
        cout <<"Scissors cuts paper.";
    }
    return 0;
}

