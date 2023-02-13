/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 22, 2023, 5:26 PM
 */

#include <iostream>  //Input Output Library
#include <cstdlib>   //Random number functions
#include <ctime>     //Time to set Random number seed
#include <cstring>   //String Object
#include <iomanip>   //Format Library
using namespace std;
float lpg = 0.264179;
/*
 * 
 */
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    char chose;
    
    //Initialize Variables
    cout<<"This program presents a menu of options from Code-e Assignment 4"<<endl;
    cout<<"0 To run Problem Gaddis_9thEd_Chap5_Prob1_Sum"<<endl;
    cout<<"1 To run Problem Gaddis_9thEd_Chap5_Prob7_PayInPennies"<<endl;
    cout<<"2 To run Problem Gaddis_9thEd_Chap5_Prob13_MinMax"<<endl;
    cout<<"3 To run Problem Gaddis_9thEd_Chap5_Prob22_Rectangle"<<endl;
    cout<<"4 To run Problem Gaddis_9thEd_Chap5_Prob23_Pattern"<<endl;
    cout<<"5 To run Problem Savitch_9thEd_Chap4_Prob1_MPG"<<endl;
    cout<<"6 To run Problem Savitch_9Ed_Chap4_Prob2_FuelEff"<<endl;
    cout<<"7 To run Problem Savitch_9Ed_Chap4_Prob4_Inflation"<<endl;
    cout<<"8 To run Problem Savitch_9Ed_Chap4_Prob5_EstCost"<<endl;
    cout<<"9 To run Problem Savitch_9Ed_Chap4_Prob9_2or3Max"<<endl;
    cin>>chose;
    
    switch(chose){
        case '0':{
            //Declare Variables
            int num,sum;
            //Initialize or input i.e. set variable values

            //Map inputs -> outputs
            cin>>num;
            //Display the outputs
            sum = 0;
            for (int x = 0; x<=num; x++)
            sum += x;
            cout << "Sum = "<<sum;
            break;
        }
        case '1':{
            int pay,day,sal;
            //Initialize or input i.e. set variable values
            cin>>day;
            sal = 1;
            pay = 0;

            //Map inputs -> outputs
            for (int i = 0; i < day; i++){
                pay = pay + sal;
                sal = sal*2;
            }
            //Display the outputs
            if (day < 1){
                cout << "Pick higher than 1.";
            }
            else {
            cout<<"Pay ="<<setw(2)<<"$"<<showpoint<<fixed<<setprecision(2)<<pay*.01;
            }
            break;
        }
        case '2':{
                //Set random number seed
                int input,num,num2;
            //Initialize or input i.e. set variable values

            //Map inputs -> outputs
            cin>>input;
            num = input;
            num2 = input;
            while(input != -99){
                if(input < num){
                    num = input;
                }
                if(input > num2){
                    num2 = input;
                }
                cin>>input;
            }
            //Display the outputs
            cout << "Smallest number in the series is "<<num<<endl;
            cout << "Largest  number in the series is "<<num2;
            break;
        }
        case '3':{
            int row;
            char sym;
            //Initialize or input i.e. set variable values

            //Map inputs -> outputs
            cin>>row;
            if((row <= 15) && (row > -1)){
                cin>>sym;
                for (int i = 0; i < row; i++){
                    for (int j = 0; j < row; j++){
                        cout<<sym;
                    }
                    if((i +1) < row){
                        cout<<endl;
                    }

                }
            }
            break;
        }    
        case '4':{
            int input;
            //Initialize or input i.e. set variable values

            //Map inputs -> outputs
            cin>>input;
            //Display the outputs
            for(int i = 1; i <= input; i++){
                for(int j = 0; j < i; j++){
                    cout<<"+";
                }
                cout<<endl<<endl;
            } 
            for(int i = input; i > 0; i--){
                for(int j = 0; j < i; j++){
                    cout<<"+";
                }
                if(i  != 1){
                cout<<endl<<endl;
                }
            }
            break;
        }
        case '5':{
            float liters,miles,mpg,fuel;
            char again;
            //Initialize or input i.e. set variable values

            //Map inputs -> outputs
            while (again != 'n'){

                //Display the outputs
                cout << "Enter number of liters of gasoline:"<<endl<<endl;
                cin>>liters;
                fuel = lpg*liters; //global variable times liters given to find gallons
                cout << "Enter number of miles traveled:"<<endl<<endl;
                cin>>miles;
                mpg = miles/fuel;
                cout << "miles per gallon:"<<endl<<fixed<<setprecision(2)<<mpg<<endl;
                cout << "Again:" <<endl;
                cin>>again; //loops back the while statement depending on the answer
                if(again != 'n'){ 
                    cout<<endl;
                }
            }
            break;
        }    
        case '6':{
            float liters,miles,mpg,fuel,liters2,miles2,mpg2,fuel2;
            char again;
            //Initialize or input i.e. set variable values

            //Map inputs -> outputs
            while (again != 'n'){

                //Display the outputs
                cout << "Car 1"<<endl;
                cout << "Enter number of liters of gasoline:"<<endl; 
                cin>>liters;
                fuel = lpg*liters; //Global variable times liters to get the amount of gallons
                cout << "Enter number of miles traveled:"<<endl;
                cin>>miles;
                mpg = miles/fuel;
                cout << "miles per gallon: "<<fixed<<setprecision(2)<<mpg<<endl<<endl;
                cout << "Car 2"<<endl;
                cout << "Enter number of liters of gasoline:"<<endl;
                cin>>liters2;
                fuel2 = lpg*liters2; //Global variable times the second liters to get the second amount of gallons
                cout << "Enter number of miles traveled:"<<endl;
                cin>>miles2;
                mpg2 = miles2/fuel2;
                cout << "miles per gallon: "<<fixed<<setprecision(2)<<mpg2<<endl<<endl;
                if(mpg > mpg2){ //If else statement to find which car is more fuel efficient
                    cout << "Car 1 is more fuel efficient"<<endl<<endl;
                }
                else{
                    cout << "Car 2 is more fuel efficient"<<endl<<endl;
                }
                cout << "Again:" <<endl;
                cin>>again; //loops back the while statement depending on the answer
                if(again != 'n'){ 
                    cout<<endl;
                }
            }
            break;
        }    
        case '7':{
            float cPrice,oPrice,infl;
            char again;
            //Initialize or input i.e. set variable values

            //Map inputs -> outputs

            //Display the outputs
            while(again != 'n'){
            cout << "Enter current price:"<<endl;
            cin>>cPrice;
            cout << "Enter year-ago price:"<<endl;
            cin>>oPrice;
            infl = (cPrice-oPrice)/oPrice*100;
            cout << "Inflation rate: "<<fixed<<setprecision(2)<<infl<<"%"<<endl<<endl;
            //Exit stage right or left!
            cout << "Again:" <<endl;
                cin>>again; //loops back the while statement depending on the answer
                if(again != 'n'){
                    cout<<endl;
                }
            }
             break;
        }     
        case '8':{
            float cPrice,oPrice,infl,n1Price,n2Price;
            char again;
            //Initialize or input i.e. set variable values

            //Map inputs -> outputs

            //Display the outputs
            while(again != 'n'){
            cout << "Enter current price:"<<endl;
            cin>>cPrice;
            cout << "Enter year-ago price:"<<endl;
            cin>>oPrice;
            infl = (cPrice-oPrice)/oPrice*100;
            cout << "Inflation rate: "<<fixed<<setprecision(2)<<infl<<"%"<<endl<<endl;
            n1Price = (infl*.01)*cPrice+cPrice;
            n2Price = (infl*.01)*n1Price+n1Price;
            cout << "Price in one year: $"<<n1Price<<endl;
            cout << "Price in two year: $"<<n2Price<<endl<<endl;
            cout << "Again:" <<endl;
                cin>>again;
                if(again != 'n'){
                    cout<<endl;
                }
            }
            break;
        }    
        case '9':{ 
            float one,two,three,large,larger;
            //Initialize or input i.e. set variable values

            //Map inputs -> outputs

            //Display the outputs
            cout << "Enter first number:"<<endl<<endl;
            cin>>one;
            cout << "Enter Second number:"<<endl<<endl;
            cin>>two;
            cout << "Enter third number:"<<endl<<endl;
            cin>>three;
            if(one > two){ //If elseif and else statements to find which of the numbers are larger between 2 or 3 parameters
                large = one;
            }
            else{
                large = two;
            }
            if(one > two && one > three){
                larger = one;
            }
            else if(two > one && two > three){
                larger = two;
            }
            else{
                larger = three;
            }
            cout << "Largest number from two parameter function:"<<endl<<large<<endl<<endl;
            cout << "Largest number from three parameter function:"<<endl<<larger<<endl;
            break;
        }    
    }
        
    return 0;
}

