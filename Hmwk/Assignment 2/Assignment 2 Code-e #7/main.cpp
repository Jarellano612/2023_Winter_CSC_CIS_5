/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 16, 2023, 3:31 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    const float CNVLBSG=45359.2/100;
    //Declare Variables
    float weight,mosM,mosD,mosCoke,cnCoke,pplD,gpplD,amtSC;
    int total;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout <<"Program to calculate the limit of Soda Pop Consumption." <<endl;
    cout <<"Input the desired dieters weight in lbs."<<endl;
    cin >>weight;
    mosM =35;
    mosD =5;
    mosCoke =350;
    cnCoke =0.001f;
    pplD =mosD/mosM*weight;
    gpplD =pplD*CNVLBSG;
    amtSC =mosCoke*cnCoke;
    total =gpplD/amtSC;
    
    cout <<"The maximum number of soda pop cans" <<endl;
    cout <<"which can be consumed is " <<total<<" cans";
    return 0;
}

