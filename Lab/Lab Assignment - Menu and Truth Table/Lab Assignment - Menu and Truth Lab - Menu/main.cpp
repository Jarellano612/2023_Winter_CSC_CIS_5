/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 22, 2023, 1:30 PM
 */

#include <iostream>  //Input Output Library
#include <cstdlib>   //Random number functions
#include <ctime>     //Time to set Random number seed
#include <cstring>   //String Object
#include <iomanip>   //Format Library

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char chose;
    
    //Initialize Variables
    cout<<"This program presents a menu of Assignment 3 Code-e Problems"<<endl;
    cout<<"0 To run Problem Gaddis_9thEd_Chap4_Prob8_SortNames"<<endl;
    cout<<"1 To run Problem Gaddis_9thEd_Chap4_Prob11_Books"<<endl;
    cout<<"2 To run Problem Gaddis_9thEd_Chap4_Prob12_BankCharges"<<endl;
    cout<<"3 To run Problem Gaddis_9thEd_Chap4_Prob14_Race"<<endl;
    cout<<"4 To run Problem Gaddis_9thEd_Chap4_Prob23_ISP"<<endl;
    cout<<"5 To run Problem Savitch_9thEd_Chap3_PracProb1_RockPaperScissors"<<endl;
    cout<<"6 To run Problem Savitch_9thEd_Chap3_Prob3_Roman_Conversion"<<endl;
    cout<<"7 To run Problem Savitch_9thEd_Chap3_PracProb4_CompatibleSigns"<<endl;
    cin>>chose;
    
    //Map/Process the Inputs -> Outputs
    switch(chose){
        case '0':{
            //Declare Variables
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
            break;
        }
        case '1':{
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
            break;
        }
        case '2':{
            float bal, chekFee,mthFee,feeTtl,newBal,lwBal;
            int chek;
            //Initialize or input i.e. set variable values

            //Map inputs -> outputs
            cout << "Monthly Bank Fees"<<endl;
            cout << "Input Current Bank Balance and Number of Checks"<<endl;
            cin >> bal>>chek;
            mthFee = 10;
            if (bal <400){
                lwBal = 15;
            }
            else{
                lwBal =0;
            }
            if (chek<20){
                chekFee = .10*chek;
            }
            if (chek>=20 && chek <= 39){
                chekFee = .08*chek;
            }
            if (chek>=40 && chek <= 59){
                chekFee = .06*chek;
            }
            if (chek >=60){
                chekFee = .04*chek;
            }
            feeTtl = chekFee+lwBal+mthFee;
            newBal = bal-feeTtl;
            cout << "Balance     $"<<fixed<<setw(9)<<setprecision(2)<<showpoint<<bal<<endl;
            cout << "Check Fee   $"<<fixed<<setw(9)<<setprecision(2)<<showpoint<<chekFee<<endl;
            cout << "Monthly Fee $"<<fixed<<setw(9)<<setprecision(2)<<showpoint<<mthFee<<endl;
            cout << "Low Balance $"<<fixed<<setw(9)<<setprecision(2)<<showpoint<<lwBal<<endl;
            cout << "New Balance $"<<fixed<<setw(9)<<setprecision(2)<<showpoint<<newBal;
            break;
        }
        case '3':{ 
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
            break;
        }
        case '4':{
            char pck;
            int hrs,newHrs;
            float cost,pckA=9.95,pckB=14.95,pckC=19.95;
            //Initialize or input i.e. set variable values

            //Map inputs -> outputs
            cout <<"ISP Bill"<<endl;
            cout <<"Input Package and Hours"<<endl;
            cin >>pck>>hrs;
            if(pck == 'A'){
                if(hrs>10){
                    newHrs = hrs-10;
                    cost = pckA+newHrs*2;
                }
            else{
                cost=pckA;
                }
                cout <<"Bill = $"<<fixed<<showpoint<<setprecision(2)<<setw(6)<<cost;
            }
            if(pck == 'B'){
                if(hrs>20){
                    newHrs = hrs-20;
                    cost = pckB+newHrs*1;
                }
            else{
                cost =pckB;
            }
            cout <<"Bill = $"<<fixed<<showpoint<<setprecision(2)<<setw(6)<<cost;
            }
            if(pck == 'C'){
                cost = pckC;
                cout <<"Bill = $"<<fixed<<showpoint<<setprecision(2)<<setw(6)<<cost;
            }
            break;
        }
        case '5':{
            char play1,play2;
            //Initialize or input i.e. set variable values

            //Map inputs -> outputs
            cout << "Rock Paper Scissors Game"<<endl;
            cout << "Input Player 1 and Player 2 Choices"<<endl;
            cin >>play1>>play2;
            play1 = toupper(play1);
            play2 = toupper(play2);
            //Display the outputs
            if(play1 == 'R' && play2 == 'P' || play1 == 'P' && play2 == 'R'){
                cout <<"Paper covers rock.";
            }
            if(play1 == 'R' && play2 == 'S' || play1 == 'S' && play2 == 'R'){
                cout <<"Rock breaks scissors.";
            }
            if(play1 == 'S' && play2 == 'P' || play1 == 'P' && play2 == 'S'){
                cout <<"Scissors cuts paper.";
            }
            break;
        }
        case '6':{
            int n1000s, n100s, n10s, n1s;
            unsigned short stnd;
            string rmNum = "";
            //Initialize or input i.e. set variable values
            cout<<"Arabic to Roman numeral conversion." << endl;
            cout<<"Input the integer to convert." << endl;
            cin >> stnd;
            n1000s = stnd / 1000;
            n100s  = (stnd - n1000s * 1000) / 100;
            n10s   = stnd % 100/ 10;
            n1s    = stnd % 10;

            switch(n1000s){
                case 3: rmNum += "M";
                case 2: rmNum += "M";
                case 1: rmNum += "M";
            }
            //convert the 100s
            switch(n100s){
                case 9: {
                    rmNum += "C";
                    rmNum += "M";
                    break;
                }
                case 8: case 7: case 6: {
                    rmNum += "D";
                    for (int i = 0; i < n100s - 5; i++) rmNum += "C";
                    break;
                }
                case 5: {
                    rmNum += "D";
                    break;
                }
                case 4: {
                    rmNum += "C";
                    rmNum += "D";
                    break;
                }
                case 3: case 2: case 1: {
                    for (int i = 0; i < n100s; i++) rmNum += "C";
                    break;
                }

            }
            //convert the 10s
             switch(n10s){
                case 9: {
                    rmNum += "X";
                    rmNum += "C";
                    break;
                }
                case 8: case 7: case 6: {
                    rmNum += "L";
                    for (int i = 0; i < n10s - 5; i++) rmNum += "X";
                    break;
                }
                case 5: {
                    rmNum += "L";
                    break;
                }
                case 4: {
                    rmNum += "X";
                    rmNum += "L";
                    break;
                }
                case 3: case 2: case 1: {
                    for (int i = 0; i < n10s; i++) rmNum += "X";
                    break;
                }
            }
            //convert the 1s
            switch(n1s){
                case 9: {
                    rmNum += "I";
                    rmNum += "X";
                    break;
                }
                case 8: case 7: case 6: {
                    rmNum += "V";
                    for (int i = 0; i < n1s - 5; i++) rmNum += "I";
                    break;
                }
                case 5: {
                    rmNum += "V";
                    break;
                }
                case 4: {
                    rmNum += "I";
                    rmNum += "V";
                    break;
                }
                case 3: case 2: case 1: {
                    for (int i = 0; i < n1s; i++) rmNum += "I";
                    break;
                }
            }

            //Map inputs -> outputs
            stnd < 1000 || stnd > 3000
                ? cout << stnd << " is Out of Range!"
                : cout << stnd << " is equal to " << rmNum;
            break;
        }
        case '7':{ 
            string sign1,sign2;
            //Display the outputs
            cout << "Horoscope Program which examines compatible signs."<<endl;
            cout << "Input 2 signs."<<endl;
            cin>>sign1;
            cin>>sign2;
            if((sign1 == "Taurus" || sign1 == "Virgo" || sign1 == "Capricorn" ) && ( sign2 == "Taurus" || sign2 == "Virgo" || sign2 == "Capricorn")){
                cout <<sign1<< " and "<<sign2<< " are compatible Earth signs.";
            }


            else if((sign1 == "Aries" || sign1 == "Leo" || sign1 == "Sagittarius") && (sign2 == "Aries" || sign2 == "Leo" || sign2 == "Sagittarius")){
                cout <<sign1<< " and "<<sign2<< " are compatible Fire signs.";
            }


            else if((sign1 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius" && sign2 == "Gemini" || sign2 == "Libra" || sign2 == "Aquarius")){
                cout <<sign1<< " and "<<sign2<< " are compatible Air signs.";
            }

            else if((sign1 == "Cancer" || sign1 == "Scorpio" || sign1 == "Pisces") && (sign2 == "Cancer" || sign2 == "Scorpio" || sign2 == "Pisces")){
                cout <<sign1<< " and "<<sign2<< " are compatible Water signs.";
            }
            else {
                cout <<sign1<< " and "<<sign2<< " are not compatible signs.";
            }

            break;
        }
    }
    return 0;
}

