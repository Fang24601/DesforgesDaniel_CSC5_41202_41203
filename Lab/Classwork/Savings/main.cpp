/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 21, 2016, 11:05 AM
 * Purpose: Date to Roman Numeral Conversion
 */

#include <iostream> // I/O
#include <iomanip> // formaat
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //variables
    cout<<"Fun look at savings and rule of 72"<<endl;
    cout<<endl<<"Savings"<<endl;
    //input data
    float balance=100.0f; 
    float intRate=.05f;//Initial balance, Interest rate/yr.
    float rule72; //Rule of 72 future = 2*present value
    rule72=.72f/intRate;
    //Output heading
    cout<<"The interest rate= "<<intRate*100<<"%"<<endl;
    cout<<"At this interest Principle should double every";
    cout<<rule72<<"years"<<endl;
    cout<<"Year  Year  Balance Interest"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    
    
    //calculate the Roman Numeral in 1000's, 100's, 10's, 1's
   
    for(int y=0, year=2016;y<=50;y++,year++){
        cout<<setw(4)<<y<<" "<<year<<setw(8)<<balance<<setw(9)<<balance*intRate<<endl;
        balance*=(1+intRate);
    }
    return 0;
}

