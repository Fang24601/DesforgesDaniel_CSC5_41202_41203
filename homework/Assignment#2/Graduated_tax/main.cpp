/* 
  Author: Daniel Desforges
 
  Created on January 13, 2016, 9:20 AM
  Purpose: Tax Bracket
 */

//System Libraries
#include <iostream>
#include <math.h>

using namespace std;

//User Libraries
//Function Prototypes
//Global constants

//Execution Begins here
int main() {
    // Declare and initialize variables
  
    int tax, grsInc,depend;
    
    //Input data
    cout<<"What is your gross Income? "<<endl;
    cin>>grsInc; 
    cout<<"How many dependants do you have?"<<endl;
    cin>>depend;
    
    depend*=750;
            
    //Calculate or map inputs to outputs
    if(grsInc<=5000){
        cout<<"This is your Net income "<<(grsInc)<<endl;
    }else if(grsInc<=10000)
        cout<<"this is your Net Income "<<(grsInc-(grsInc*.1))+depend<<endl;
    else if(grsInc<=15000)
        cout<<"this is your Net Income "<<(grsInc-(grsInc*.15))+depend<<endl;
    else if(grsInc<=20000)
        cout<<"this is your Net Income "<<(grsInc-(grsInc*.2))+depend<<endl;
    else if(grsInc<=25000)
        cout<<"this is your Net Income "<<(grsInc-(grsInc*.25))+depend<<endl;
    else if(grsInc<=30000)
        cout<<"this is your Net Income "<<(grsInc-(grsInc*.3))+depend<<endl;
    else if(grsInc<=35000)
        cout<<"this is your Net Income "<<(grsInc-(grsInc*.35))+depend<<endl;
    else
        cout<<"this is your Net Income "<<(grsInc-(grsInc*.4))+depend<<endl;
    
    
  
    //Exit stage right
    return 0;
}

