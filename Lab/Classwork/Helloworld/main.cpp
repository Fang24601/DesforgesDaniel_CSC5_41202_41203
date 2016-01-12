/* 
  File:   main.cpp
  Author: Daniel Desforges
 
  Created on January 4, 2016, 10:18 AM
  Purpose: Check out IDE
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
    // Declare and initialize variables
    int pay, payRate=10, hrsWkt;
    //Input data
    
    //Calculate or map inputs to outputs
    cout<<"Input hours worked";
    cin<<hrsWkt;
    cout<<(hrsWkt<=40? pay=hrsWkt*payRate:pay= hrsWkt(payRate*1.5)-hrsWkt *.5)<<endl;
    cout<<"This is the pay"<< pay;
  
    //Output the results
    
    //Exit stage right
    return 0;
}

