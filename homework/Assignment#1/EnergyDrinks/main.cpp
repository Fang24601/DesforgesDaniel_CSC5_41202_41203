/* 
  Author: Daniel Desforges
 
  Created on January 6, 2016, 9:35 AM
  Purpose: Energy Drink Survey
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here
int main() {
    // Declare and initialize variables
    unsigned short cstSurv= 16500;//customers surveyed
    unsigned char peDrink= 15;//people who drink 1 or more energy drinks
    unsigned char pcDrink= 58;//people who drink citrus flavored energy drinks
    unsigned short neDrnk, ncDrnk;
    //Input data
    
    //Calculate or map inputs to outputs
    neDrnk=cstSurv*peDrink/100;
    ncDrnk=neDrnk*pcDrink/100;
  
    //Output the result
      cout<<"Number of people Surveyed="<<cstSurv<<endl;
      cout<<"Percentage of Energy Drinkers="<<static_cast<int>(peDrink)<<"%"<<endl;
      cout<<"Percentage of Citrus Energy Drinkers="<<static_cast<int>(pcDrink)<<"%"<<endl;
      cout<<"Energy drinkers ="<<neDrnk<<endl;
      cout<<"Citrus energy drinkers ="<<ncDrnk<<endl;
    //Exit stage right
    return 0;
}

