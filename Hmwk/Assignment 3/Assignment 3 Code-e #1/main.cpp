/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 17, 2023, 1:06 PM
 */

#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string frst,scnd,thrd;
    cout << "Sorting Names"<<endl;
    cout << "Input 3 names"<<endl;
    cin>>frst>>scnd>>thrd;
    if (frst < scnd && scnd < thrd){
        cout <<frst<<endl<<scnd<<endl<<thrd;
    }
    if (frst < thrd && thrd < scnd){
        cout <<frst<<endl<<thrd<<endl<<scnd;
    }
    if (scnd < frst && frst < thrd){
        cout <<scnd<<endl<<frst<<endl<<thrd;
    }
    if (scnd < thrd && thrd < frst){
        cout <<scnd<<endl<<thrd<<endl<<frst;
    }
    if (thrd < frst && frst < scnd){
        cout <<thrd<<endl<<frst<<endl<<scnd;
    }
    if (thrd < scnd && scnd < frst){
        cout <<thrd<<endl<<scnd<<endl<<frst;
    }
    return 0;
}

