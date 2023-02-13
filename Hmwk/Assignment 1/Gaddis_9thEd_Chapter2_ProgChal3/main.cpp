/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 13, 2023, 7:22 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float cost,ttlTx,stateTx,cntryTx,ttlCost,ttlStTx,ttlCnTx;
    cost = 95;
    stateTx = .04;
    cntryTx = .02;
    ttlStTx = stateTx*cost;
    ttlCnTx = cntryTx*cost;
    ttlCost = cost+ttlCnTx+ttlStTx;
    cout<<"The cost comes to $"<<cost<<" ,the state tax is $"<<ttlStTx<<" ,while the country tax is $"<<ttlCnTx<<" ."
            " Your total comes to around $"<<ttlCost;
            
    return 0;
}

