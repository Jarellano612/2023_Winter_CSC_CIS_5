/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 13, 2023, 7:03 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cout<<"The East Coast sales division of a company generates 58 percent of total sales."<<endl;
    cout<<"The East Coast generated $8.6 million this year."<<endl;
    
    float sales,percent,ttl;
    sales = 8.6;
    percent = .58;
    ttl = sales*percent;
    
    cout<<"$"<<fixed<<setprecision(2)<<ttl<<" million will be generated from this year.";
    return 0;
}

