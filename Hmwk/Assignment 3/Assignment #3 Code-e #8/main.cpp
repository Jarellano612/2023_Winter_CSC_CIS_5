/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 17, 2023, 7:14 PM
 */

#include <iostream>
#include <string>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string sign1,sign2;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
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
    return 0;
}

