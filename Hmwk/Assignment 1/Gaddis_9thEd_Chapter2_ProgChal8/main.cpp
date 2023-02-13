/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 13, 2023, 7:59 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float prceOne,prceTwo,prceThr,prceFor,prceFve,sbTtl,salTx,total;
    prceOne = 15.95;
    prceTwo = 24.95;
    prceThr = 6.95;
    prceFor = 12.95;
    prceFve = 3.95;
    sbTtl = prceOne+prceTwo+prceThr+prceFor+prceFve;
    salTx = sbTtl*.07;
    total = salTx+sbTtl;
    
    cout<<"The price of item one is $"<<prceOne<<endl;
    cout<<"The price of item two is $"<<prceTwo<<endl;
    cout<<"The price of item three is $"<<prceThr<<endl;
    cout<<"The price of item four is $"<<prceFor<<endl;
    cout<<"The price of item five is $"<<prceFve<<endl;
    cout<<"The subtotal of these five items are $"<<sbTtl<<endl;
    cout<<"The tax comes to $"<<setprecision(2)<<salTx<<endl;
    cout<<"Which means you owe a total of $"<<setprecision(4)<<total<<endl;

           
    return 0;
}

