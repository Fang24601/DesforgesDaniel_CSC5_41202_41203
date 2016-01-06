/* 
  Author: Daniel Desforges
 
  Created on January 6, 2016, 10:44 AM
  Purpose: Quarters, Nickels, Dimes
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants
const char cenQrt=25;// cents p quarter 
const char cenDime=10;// cents p dime
const char cenNikl=5;// cents per nickel
const char cnvPnDl=100;//Conversion from pennies to dollars
//Function Prototypes

//Execution Begins here
int main() {
    // Declare and initialize variables
  
    unsigned char nQrts, nNikls,nDimes;
    unsigned short total;
    //Input data
    cout<<"How many quarters do you have 0-9"<<endl;
    cin>>nQrts; 
     cout<<"How many dimes do you have 0-9"<<endl;
    cin>>nDimes;
     cout<<"How many nickels do you have 0-9"<<endl;
    cin>>nNikls;
            
    //Calculate or map inputs to outputs
    total= (nQrts-48)*cenQrt+(nDimes-48)*cenDime+(nNikls-48)*cenNikl;
  
    //Output the result
    cout<<"Number of quarters input= "<<(nQrts)<<endl;
    cout<<"Number of dimes input= "<<(nDimes)<<endl;
    cout<<"Number of nickels input= "<<(nNikls)<<endl;
    cout<<"Total amount in dollars = $"<<1.0f*total/cnvPnDl<<endl;
    //Exit stage right
    return 0;
}

