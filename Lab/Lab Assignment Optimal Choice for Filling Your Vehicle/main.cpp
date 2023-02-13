/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: blade
 *
 * Created on January 13, 2023, 5:16 PM
 */

#include <Iostream>
#include <Iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float stnOne, stnTwo,mpg,sizegt,fuelgr,ndFill,grGal,grGal1,grGal2,ndFill1,ndFill2,gas1,gas2,costOne,costTwo,tlCst1,tlCst2;
    cout<<"Please input your car's miles per gallon."<<endl;
    cin>>mpg; 
    cout<<"Followed by the size of your car's gas tank per gallon."<<endl;
    cin>>sizegt;
    cout<<"Finally, enter your car's fuel gauge reading."<<endl;
    cin>>fuelgr;
    grGal = sizegt*fuelgr; //The amount of gas in gallons from the gas reading
    ndFill = sizegt-grGal; //Size of the gas tank divided by the Size of gas multiplied by Fuel Gauge Reading
    cout<<endl;
    cout<<"The amount of fuel you'll need is "<<ndFill<<endl;
    
    cout << "What is the distance to Gas Station 1?"<<endl;
    cin >> stnOne;
    gas1 = stnOne/mpg;
    grGal1 = grGal-gas1;
    ndFill1 = sizegt-grGal1;
    cout<<"You'll have to use "<<gas1<<" leaving you with "<<grGal1<<" gallons left. This means you"
            " now need to fill "<<ndFill1<<" gallons in your tank."<<endl;
    cout<<"The gas at Gas Station 1 costs how much?"<<endl;
    cin>>costOne;
    tlCst1 = costOne*ndFill1; //Gas you need to fill tank multiplied by Cost per gallon equals total cost of gas
    cout<<"It'll cost $"<<setprecision(4)<<tlCst1<<" to fully fill up!"<<endl;
    
    cout << "What about the distance to Gas Station 2?"<<endl;
    cin >> stnTwo;
    gas2 = stnTwo/mpg;
    grGal2 = grGal-gas2;
    ndFill2 = sizegt-grGal2;
    cout<<"You'll have to use "<<gas2<<" leaving you with "<<grGal2<<" gallons left. This means you"
            " now need to fill "<<ndFill2<<" gallons in your tank."<<endl;
    cout<<"The gas at Gas Station 2 costs how much?"<<endl;
    cin>>costTwo;
    tlCst2 = costTwo*ndFill2; //Gas you need to fill tank multiplied by Cost per gallon equals total cost of gas
    cout<<"It'll cost $"<<setprecision(4)<<tlCst2<<" to fully fill up!"<<endl;
    
    cout<<"The total cost of gas at Gas Station 1 is $"<<tlCst1<<" , while "
            "the total cost of gas at Gas Station 2 is $"<<tlCst2<<endl;
    cout<<"You should go to Gas Station 2 because it is cheaper."<<endl;
    
    return 0;
}

