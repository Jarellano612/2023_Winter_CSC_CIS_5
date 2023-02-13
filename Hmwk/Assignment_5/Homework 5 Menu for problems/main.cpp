/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 12th, 2023, 9:55 AM
 * Purpose:  Menu Template without Loops
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
void minmax(int,int,int,int&,int&);//Function to find the min and max
int fctrl(int);//Function to write for this problem
bool isPrime(int);//Determine if the input number is prime.
int collatz(int);//3n+1 sequence
int collatz(int);//3n+1 sequence
string merdiem(char);
void tMath(int&,int&,int);
void intMath(int&,char&);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    char chose;
    
    //Initialize Variables
    cout<<"This program presents a menu of options"<<endl;
    cout<<"0 To run Problem MinMax"<<endl;
    cout<<"1 To run Problem Factorial"<<endl;
    cout<<"2 To run Problem isPrime"<<endl;
    cout<<"3 To run Problem Collatz Sequence"<<endl;
    cout<<"4 To run Problem Collatz Sequence with Output of Sequence"<<endl;
    cout<<"5 To run Problem Savitch 10th Ed Chap 5 Problem 2/3 Time Clock"<<endl;
    cin>>chose;
    
    //Map/Process the Inputs -> Outputs
    switch(chose){
        case '0':{
        //Declare Variables
        int numOne,numTwo,numThr,max,min;
        //Initialize Variables

        //Process/Map inputs to outputs

        //Output data
        cout << "Input 3 numbers" << endl;
        cin>>numOne>>numTwo>>numThr;
        minmax(numOne, numTwo, numThr, min, max);
        cout << "Min = " << min << endl;
        cout << "Max = " << max;
        break;
        }
        case '1':{
        //Declare Variables
        int num;
        //Initialize Variables

        //Process/Map inputs to outputs

        //Output data
        cout << "This program calculates the factorial using a function prototype found in the template for this problem."<<endl;
        cout << "Input the number for the function."<<endl;
        cin>>num;
        cout <<num << "! = " << fctrl(num);
        
        break;
        }
        case '2':{
        //Declare Variables
        int num;
        //Initialize Variables

        //Process/Map inputs to outputs

        //Output data
        cout << "Input a number to test if Prime."<<endl;
        cin>>num;
        if(isPrime(num) == true){
            cout << num << " is prime.";
        }
        if(isPrime(num) == false){
            cout << num << " is not prime.";
        }
        break;
        }
        case '3':{
        //Declare Variables
        int n;

        //Initialize Variables
        cout<<"Collatz Conjecture Test"<<endl;
        cout<<"Input a sequence start"<<endl;
        cin>>n;

        //Process/Map inputs to outputs
        cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
                collatz(n)<<" steps";
        break;
        }
        case '4':{
        //Declare Variables
        int n,ns;

        //Initialize Variables
        cout<<"Collatz Conjecture Test"<<endl;
        cout<<"Input a sequence start"<<endl;
        cin>>n;

        //Process/Map inputs to outputs
        cout<<n;
        ns=collatz(n);

        //Output data
        cout<<endl<<"Sequence start of "<<n<<" cycles to 1 in "<<
                ns<<" steps";
        break;
        }
        case '5':{
       //Declare Variables
       int hour,min,wait,crnt,newHR,newMin,waitPD;
       char AMPM,again;
       //Initialize or input i.e. set variable values

       //Map inputs -> outputs

       //Display the outputs
       do{  
           cout << "Enter hour:"<<endl<<endl;
           cin>>hour;
           cout << "Enter minutes:"<<endl<<endl;
           cin>>min;
           cout << "Enter A for AM, P for PM:"<<endl<<endl;
           cin>>AMPM;
           cout << "Enter waiting time:"<<endl<<endl;
           cin>>wait;
           intMath(hour,AMPM);
           cout << "Current time = ";
           if(hour < 10){
               cout<<"0";
           }
           cout<<hour<<":";
           if(min < 10){
               cout<<"0";
           }
           cout<<min<<" ";
           cout<<merdiem(AMPM)<<endl;
           tMath(hour,min,wait);
           intMath(hour,AMPM);
           cout << "Time after waiting period = ";
           if(hour < 10){
               cout<<"0";
           }
           cout<<hour<<":";
           if(min < 10){
               cout<<"0";
           }
           cout<<min<<" ";
           cout<<merdiem(AMPM)<<endl<<endl;
           cout <<"Again:"<<endl;
           cin>>again;
           again = tolower(again);
           if(again == 'y'){
               cout<<endl;
           }
       }while(again == 'y');   

        break;
        }
    }
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

void minmax(int numOne, int numTwo, int numThr, int& min, int& max){
        if(numOne < numTwo && numOne < numThr){
            min = numOne;
        }
        else if(numTwo < numOne && numTwo < numThr){
            min = numTwo;
        }
        else{
            min = numThr;
        }
        if(numOne > numTwo && numOne > numThr){
            max = numOne;
        }
        else if(numTwo > numOne && numTwo > numThr){
            max = numTwo;
        }
        else{
            max = numThr;
        }
}

int fctrl(int n){
    if(n <= 1)return 1;
    return fctrl(n-1)*n;
}

bool isPrime(int n){
    int i;
        for(int i = 2; i < n/2; i++){
            if(n%i == 0)return false;
        }
        return true;
}

int collatz(int n){
    int cntr = 1;    
        while(n != 1){
            if(n%2 == 0){ 
                n = n/2; 
                cntr++;
            }
            else{
                n = (3*n) +1;
                cntr++;
            }
        }
        return cntr;
}

int collatz(int n){
    int cntr = 1;    
        while(n != 1){
            if(n%2 == 0){ 
                n = n/2; 
                cout << ", "<< n;
                cntr++;
            }
            else{
                n = (3*n) +1;
                cntr++;
                cout << ", "<< n;
            }
        }
        return cntr;
} 

string merdiem(char AMPM){
    string PMAM;   
        AMPM = toupper(AMPM);
        if(AMPM == 'A'){
            PMAM = "AM";
        }
        else{
            PMAM = "PM";
        }
    return PMAM;
}

void tMath(int& hour,int& min,int wait){
    min = min + wait;
    while(min >= 60){
        hour++;
        min = min - 60;
    }
}

void intMath(int& hour,char& AMPM){
    while(hour > 12){
        hour -= 12;
        if(AMPM == 'A'){
            AMPM = 'P';
        }
        else{
            AMPM = 'A';
        }
    }
}
