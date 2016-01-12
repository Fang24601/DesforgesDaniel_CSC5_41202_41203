/* 
  Author: Daniel Desforges
 
  Created on January 5, 2016, 9:30 AM
  Purpose: Calculate Paycheck, Straight Time
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
    unsigned char hrsWrkd=40;
    float         payrate=1e1f;//PayRate in $'s/hour
  
    //Input data
    
    //Calculate or map inputs to outputs
    float         paychck=payrate*hrsWrkd;
    //Output the results
    cout<<"PayRate      = "<<payrate<<"$'s/hr"<<endl;
    cout<<"Hours Worked = "<< static_cast<int>(hrsWrkd)<<"hrs"<<endl;
    cout<<"Pay Check    =$"<<paychck <<"(hrs)"<<endl;
    //Exit stage right
    return 0;
}

