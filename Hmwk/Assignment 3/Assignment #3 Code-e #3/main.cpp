/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 17, 2023, 1:20 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float bal, chekFee,mthFee,feeTtl,newBal,lwBal;
    int chek;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Monthly Bank Fees"<<endl;
    cout << "Input Current Bank Balance and Number of Checks"<<endl;
    cin >> bal>>chek;
    mthFee = 10;
    if (bal <400){
        lwBal = 15;
    }
    else{
        lwBal =0;
    }
    if (chek<20){
        chekFee = .10*chek;
    }
    if (chek>=20 && chek <= 39){
        chekFee = .08*chek;
    }
    if (chek>=40 && chek <= 59){
        chekFee = .06*chek;
    }
    if (chek >=60){
        chekFee = .04*chek;
    }
    feeTtl = chekFee+lwBal+mthFee;
    newBal = bal-feeTtl;
    cout << "Balance     $"<<fixed<<setw(9)<<setprecision(2)<<showpoint<<bal<<endl;
    cout << "Check Fee   $"<<fixed<<setw(9)<<setprecision(2)<<showpoint<<chekFee<<endl;
    cout << "Monthly Fee $"<<fixed<<setw(9)<<setprecision(2)<<showpoint<<mthFee<<endl;
    cout << "Low Balance $"<<fixed<<setw(9)<<setprecision(2)<<showpoint<<lwBal<<endl;
    cout << "New Balance $"<<fixed<<setw(9)<<setprecision(2)<<showpoint<<newBal;
    return 0;
}

