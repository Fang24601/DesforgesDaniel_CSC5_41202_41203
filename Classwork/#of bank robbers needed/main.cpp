/* 
  Author: Daniel Desforges
 
  Created on January 6, 2016, 11:39 AM
  Purpose: How many does it take
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants
const char wtBill=1;// weight in grams
const float cnvLbs= 1/453.5f;// conversion from grams to lbs

//Function Prototypes

//Execution Begins here
int main() {
    // Declare and initialize variables
  
    unsigned int amtStl;   // amount to steal
    unsigned short denom;    // bill denomination
    unsigned char wtPers=80; // weight person can carry in lbs
    unsigned char nPerps;    // number of perpetrators
    
    //Input data
    cout<<"how much are you stealing?"<<endl;
    cin>>amtStl;
    cout<<"What is the bill denomination?"<<endl;
    cin>>denom;
    
    //Calculate or map inputs to outputs
    nPerps=cnvLbs*amtStl*wtBill/denom/wtPers+1;
    
    //Output the result
    cout<<"Amount desired=$"<<amtStl<<endl;
    cout<<"denomination= $"<<denom<<endl;
    cout<<"Number of individuals required= "<<static_cast<int>(nPerps)<<endl; 
    
    //Exit stage right
    return 0;
}

