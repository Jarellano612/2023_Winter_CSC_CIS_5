/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 16, 2023, 4:27 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
int num,max,legal;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout <<"Input the maximum room capacity and the number of people"<<endl;
    cin>>max;
    cin>>num;
    if(num>max){
        legal=num-max;
        cout <<"Meeting cannot be held."<<endl;
        cout <<"Reduce number of people by "<<legal<<" to avoid fire violation.";
    }
        else{
            legal=max-num;
            cout <<"Meeting can be held."<<endl;
            cout <<"Increase number of people by "<<legal<<" will be allowed without violation.";
        }
    return 0;
}

