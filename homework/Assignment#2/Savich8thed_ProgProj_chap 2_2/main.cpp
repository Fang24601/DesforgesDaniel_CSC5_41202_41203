/* 
  Author: Daniel Desforges
 
  Created on January 13, 2016, 10:50 AM
  Purpose: calc square root
 */

//System Libraries
#include <iostream>
#include <cmath>

using namespace std;

//User Libraries
//Function Prototypes
//Global constants

//Execution Begins here
int main() {
    // Declare and initialize variables
  
    float n, guess, r;
   
    //Input data
    cout<<"What number would you like to square root\n";
    cin>>n;
    
            
    //Calculate or map inputs to outputs
    /*if(n/2!=sqrt(n)){
        r=n/guess;
        guess=(guess+r)/2;
        return n;
    }else{
        cout<<"that is the square root";
    }*/
    guess=n/2;
    r= n/guess;
    guess =(guess+r)/2;
     cout<<guess;
    
         
    //output
    cout<<guess;
    //Exit stage right
    return 0;
}

