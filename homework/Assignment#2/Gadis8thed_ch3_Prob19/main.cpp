/* 
  Author: Daniel Desforges
 
  Created on January 13, 2016, 9:20 AM
  Purpose: car payment
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
  
    unsigned int Paymnt,  n, loan;
    float r;
    int  cnvaPay;
    //Input data
    cout<<"Interest Rate? "<<endl;
    cin>>r; 
     cout<<"Number of Payments "<<endl;
    cin>>n;
     cout<<"Loan amount? "<<endl;
    cin>>loan;
            
    //Calculate or map inputs to outputs
    n = n/12;
    Paymnt = ((r* static_cast<float>pow(1+r, n))/static_cast<float>(pow(1+r, n)-1))*loan;
    cnvaPay= Paymnt/12;
    //Output the result
    cout<<"This is how much each payment is "<<cnvaPay<<endl;
    
    //Exit stage right
    return 0;
}

