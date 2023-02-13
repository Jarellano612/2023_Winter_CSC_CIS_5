/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 17, 2023, 1:56 PM
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string name1,name2,name3;
    int oneTme,twoTme,thrTme;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Race Ranking Program"<<endl;
    cout << "Input 3 Runners"<<endl;
    cout << "Their names, then their times"<<endl;
    cin >> name1>>oneTme>>name2>>twoTme>>name3>>thrTme;
    if (oneTme < twoTme && twoTme < thrTme){
        cout <<name1<<"\t"<<fixed<<setw(3)<<oneTme<<endl;
        cout <<name2<<"\t"<<fixed<<setw(3)<<twoTme<<endl;
        cout <<name3<<"\t"<<fixed<<setw(3)<<thrTme;
    }
    if (oneTme < thrTme && thrTme < twoTme){
        cout <<name1<<"\t"<<fixed<<setw(3)<<oneTme<<endl;
        cout <<name3<<"\t"<<fixed<<setw(3)<<thrTme<<endl;
        cout <<name2<<"\t"<<fixed<<setw(3)<<twoTme;
    }
    if (twoTme < oneTme && oneTme < thrTme){
        cout <<name2<<"\t"<<fixed<<setw(3)<<twoTme<<endl;
        cout <<name1<<"\t"<<fixed<<setw(3)<<oneTme<<endl;
        cout <<name3<<"\t"<<fixed<<setw(3)<<thrTme;
    }
    if (twoTme < thrTme && thrTme < oneTme){
        cout <<name2<<"\t"<<fixed<<setw(3)<<twoTme<<endl;
        cout <<name3<<"\t"<<fixed<<setw(3)<<thrTme<<endl;
        cout <<name1<<"\t"<<fixed<<setw(3)<<oneTme;
    }
    if (thrTme < oneTme && oneTme < twoTme){
        cout <<name3<<"\t"<<fixed<<setw(3)<<thrTme<<endl;
        cout <<name1<<"\t"<<fixed<<setw(3)<<oneTme<<endl;
        cout <<name2<<"\t"<<fixed<<setw(3)<<twoTme;
    }
    if (thrTme < twoTme && twoTme < oneTme){
        cout <<name3<<"\t"<<fixed<<setw(3)<<thrTme<<endl;
        cout <<name2<<"\t"<<fixed<<setw(3)<<twoTme<<endl;
        cout <<name1<<"\t"<<fixed<<setw(3)<<oneTme;
    }
    return 0;
}

