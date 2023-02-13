/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 17, 2023, 1:10 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int num,pnts;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Book Worm Points"<<endl;
    cout << "Input the number of books purchased this month."<<endl;
    cin >> num;
    if (num==0){
        pnts = 0;
        cout << "Books purchased ="<<fixed<<setw(3)<<num<<endl;
        cout << "Points earned   ="<<fixed<<setw(3)<<pnts;
    }
    if (num==1){
        pnts = 5;
        cout << "Books purchased ="<<fixed<<setw(3)<<num<<endl;
        cout << "Points earned   ="<<fixed<<setw(3)<<pnts;
    }
    if (num==2){
        pnts = 15;
        cout << "Books purchased ="<<fixed<<setw(3)<<num<<endl;
        cout << "Points earned   ="<<fixed<<setw(3)<<pnts;
    }
    if (num==3){
        pnts = 30;
        cout << "Books purchased ="<<fixed<<setw(3)<<num<<endl;
        cout << "Points earned   ="<<fixed<<setw(3)<<pnts;
    }
    if (num>=4){
        pnts = 60;
        cout << "Books purchased ="<<fixed<<setw(3)<<num<<endl;
        cout << "Points earned   ="<<fixed<<setw(3)<<pnts;
    }
    return 0;
}

