/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 28, 2023, 11:33 PM
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

//Function prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
string engNum(int);
int term(int);
int main(int argc, char** argv) {
    //Set a Random number seed here.
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            default:   def(inN);
	}
    }while(inN<7);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1(){
    //Declare all Variables Here
    unsigned short x;
    char shape;       //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    
    //Draw the shape
   
    //cross shape
    if(shape == 'x' && x%2 == 0){
        int cnt = 1;
        for (int i = x; i >= 1; i--){           //Cross Slash for even numbers
            for (int j = 1; j <= x; j++){
                if(i==j){
                cout<<j;
                }
                else if(cnt==j){
                    cout<<j;
                }
                else{
                cout<<" ";
                }
            } 
            cout<<endl;
            cnt++;
        } 
    }
    
    if(shape == 'x' && x%2 == 1){
        int cnt = x;
        for (int i = 1; i <= x; i++){        //Cross Slash for odd numbers
            for (int j = x; j >= 1; j--){
                if(i==j){
                cout<<j;
                }
                else if(cnt==j){
                    cout<<j;
                }
                else{
                cout<<" ";
                }
            } 
            cout<<endl;
            cnt--;
        }
    }
    
    //forward slash
    if(shape == 'f' && x%2 == 0){
        for (int i = x; i >= 1; i--){        //Forwardslash for even numbers
            for (int j = 1; j <= x; j++){
                if(i==j){
                cout<<j;
                }
                else{
                cout<<" ";
                }
            } 
            cout<<endl;
        }
    }
    
    if(shape == 'f' && x%2 == 1){
        for (int i = 1; i <= x; i++){        //Forwardslash for odd numbers
            for (int j = x; j >= 1; j--){
                if(i==j){
                cout<<j;
                }
                else{
                cout<<" ";
                }
            } 
            cout<<endl;
        }
    }
    
    //backslash
    if(shape == 'b' && x%2 == 0){
        for (int i = 1; i <= x; i++){      //Backslash for even numbers
            for (int j = 1; j <= x; j++){
                if(i==j){
                cout<<j;
                }
                else{
                cout<<" ";
                }
            }
            cout<<endl;
        } 
    }
    if(shape == 'b' && x%2 == 1){
        for (int i = x; i >= 1; i--){      //Backslash for odd numbers
            for (int j = x; j >= 1; j--){
                if(i==j){
                cout<<j;
                }
                else{
                cout<<" ";
                }
            }
            cout<<endl;
        } 
    }
    //Exit
}


void problem2(){
    //Declare all Variables Here
    string num;
    int crtNum;
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>num;
    
    //Histogram Here
    for(int i = num.length() - 1; i >= 0; i--){
        cout<<num[i]<<" ";
        if(isdigit(num[i])){
            crtNum = num[i] -48;
            for(int j = 0; j < crtNum; j++){
                cout<<"*";
            }
        }
        else{
            cout<<"?";
        }
        cout<<endl;
    }
    
    //Exit
}

void problem3(){
    //Declare all Variables Here
    //unsigned short number;
    int n1000s,n100s,n10s,n1s,number;
    string fnl = "";
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    cout<<engNum(number)<<"and no/100's Dollars"<<endl;
  
}


void problem4(){
    //Declare all Variables Here
    char package,lowPck;
    unsigned short hours,newHrsA,newHrsB,addHrsA,addHrsB;
    float ttlCstA,ttlCstB,ttlCstC,costA =16.99,costB =26.99,costC =36.99,lowest,pckA,pckB;
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    //Basic Charges
    
    
    
        if(hours <= 10){
            ttlCstA = costA;
        }
        else if(hours <= 20){
            addHrsA = hours-10;
            pckA = addHrsA*.95;
            ttlCstA = costA + pckA;
        }
        else{
            addHrsA = 10;
            pckA = addHrsA*.95;
            newHrsA = hours-20;
            ttlCstA = costA + pckA + (newHrsA*.85);
        }
 
        if(hours <= 20){
            ttlCstB = costB;
        }
        else if(hours <= 30){
            addHrsB = hours-20;
            pckB = addHrsB*.74;
            ttlCstB = costB + pckB;
        }
        else{
            addHrsB = 10;
            pckB = addHrsB*.74;
            newHrsB = hours-30;
            ttlCstB = costB + pckB + (newHrsB*.64);
        }

        ttlCstC = costC;
    
    if(ttlCstA < ttlCstB && ttlCstA < ttlCstC){
        lowest = ttlCstA;
        lowPck = 'A';
    }
    if(ttlCstB < ttlCstA && ttlCstB < ttlCstC){
        lowest = ttlCstB;
        lowPck = 'B';
    }
    if(ttlCstC < ttlCstB && ttlCstC < ttlCstA){
        lowest = ttlCstC;
        lowPck = 'C';
    }
    
    //Output the cheapest package and the savings
    package = toupper(package);
    if(package == 'a' || package == 'A'){
        cout<<"$"<<ttlCstA<<" "<<lowPck<<" $"<<fixed<<setprecision(2)<<ttlCstA-lowest<<endl;
    }
    if(package == 'b' || package == 'B'){
        cout<<"$"<<ttlCstB<<" "<<lowPck<<" $"<<fixed<<setprecision(2)<<ttlCstB-lowest<<endl;
    }
    if(package == 'c' || package == 'C'){
        cout<<"$"<<ttlCstC<<" "<<lowPck<<" $"<<fixed<<setprecision(2)<<ttlCstC-lowest<<endl;
    }
    
        
    //Exit
}

void problem5(){
    //Declare all Variables Here
    float payRate,grsPay,payA,payB;
    unsigned short hrsWrkd,wrkTH,wrkDbl;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
    if(hrsWrkd <= 20){
        grsPay = payRate*hrsWrkd;
    }
    else if(hrsWrkd <= 40){
        wrkTH = hrsWrkd-20;
        payA = wrkTH * 1.5;
        grsPay = payRate * (payA + 20);
    }
    else{
        wrkTH = 20;
        payA = wrkTH * 1.5;
        wrkDbl = hrsWrkd-40;
        payB = wrkDbl*2;
        grsPay = payRate * (payA + payB + 20);
    }
    cout<<"$"<<fixed<<setprecision(2)<<grsPay<<endl;
    //Output the check
    
    
    //Exit
}

void problem6(){
    //Declare all Variables Here
    float x,sum;
    float nterms,num;
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    
    //Calculate Sequence sum here
    num = 1.0;
    sum = 0.0;
    for(int i = 1; i <= nterms; i++){
        if(i%2 == 0){
            sum -= pow(x,num)/term(num);
        }
        else{
            sum += pow(x,num)/term(num);
        }
        num += 2.0;
    }
    //Output the result here
    cout<<fixed<<setprecision(6)<<setw(8)<<sum<<endl;
    
    //Exit
}
string engNum(int number){
    //Declare all Variables Here
    int n1000s,n100s,n10s,n1s;
    string fnl;//Roman Number
    
    //Input or initialize values Here
    fnl=""; 
    //Calculate the 1000's, 100's, 10's and 1's
    n1000s=number/1000;  //Determine # 1000'S
    number-=n1000s*1000; //Subtract from the Original Arabic
    n100s=number/100;    //Repeat process for all digits
    number-=n100s*100;
    n10s=number/10;    //Repeat process for all digits
    number-=n10s*10;
    n1s=number;
    
    //Output the check value
    if(n1000s==3)fnl+="Three thousand ";
    if(n1000s==2)fnl+="Two Thousand ";
    if(n1000s==1)fnl+="One Thousand "; 
    
    //Output the #100's in Roman Numerals
    if(n100s==9)fnl+="Nine Hundred ";
    if(n100s==8)fnl+="Eight Hundred ";
    if(n100s==7)fnl+="Seven Hundred ";
    if(n100s==6)fnl+="Six Hundred ";
    if(n100s==5)fnl+="Five Hundred ";
    if(n100s==4)fnl+="Four Hundred ";
    if(n100s==3)fnl+="Three Hundred ";
    if(n100s==2)fnl+="Two Hundred ";
    if(n100s==1)fnl+="One Hundred ";
    
    //Output the #10's in Roman Numerals
    if(n10s==9)fnl+="Ninety ";
    if(n10s==8)fnl+="Eighty ";
    if(n10s==7)fnl+="Seventy ";
    if(n10s==6)fnl+="Sixty ";
    if(n10s==5)fnl+="Fifty ";
    if(n10s==4)fnl+="Forty ";
    if(n10s==3)fnl+="Thirty ";
    if(n10s==2)fnl+="Twenty ";
    if(n10s==1){
        if(n1s==9)fnl+="Nineteen ";
        if(n1s==8)fnl+="Eighteen ";
        if(n1s==7)fnl+="Seventeen ";
        if(n1s==6)fnl+="Sixteen ";
        if(n1s==5)fnl+="Fifteen ";
        if(n1s==4)fnl+="Fourteen ";
        if(n1s==3)fnl+="Thirteen ";
        if(n1s==2)fnl+="Twelve ";
        if(n1s==1)fnl+="Eleven ";
        if(n1s==0)fnl+="Ten ";
    }
    else{
    //Output the #10's in Roman Numerals
    if(n1s==9)fnl+="Nine ";
    if(n1s==8)fnl+="Eight ";
    if(n1s==7)fnl+="Seven ";
    if(n1s==6)fnl+="Six ";
    if(n1s==5)fnl+="Five ";
    if(n1s==4)fnl+="Four ";
    if(n1s==3)fnl+="Three ";
    if(n1s==2)fnl+="Two ";
    if(n1s==1)fnl+="One ";
    }
    
    //Exit
    return fnl;
}
int term(int n){
    float fctl = 1.0;
    for(int i = 1; i <= n; i++){
        fctl*=i;
    }
    return fctl;
}
