

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 13, 2023, 4:52 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declare a Variable, i.e. an integer
    int number;
    //Display various output results in Code-E
    //8 Spaces with a new line
    cout<<"        "<<endl;
    //8 Spaces with a new line
    cout<<"        \n";
    //A Tab with 8 Spaces and a new line
    cout<<"\t     \n";
    //Read the value of a number as input and output twice separated by 6 spaces
    cin>>number;
    cout<<number<<"      "<<number<<endl;
    //Read another number as input then  output twice separated by 6 spaces
    cin>>number;
    cout<<number<<setw(7)<<number<<endl;
    //Exit stage right or left!
    return 0;
}

