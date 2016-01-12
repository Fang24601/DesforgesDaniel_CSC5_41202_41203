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
   int score;
    //Input data
   cout << "Whats the score?" <<endl;
    cin >> score;
    //Calculate or map inputs to outputs
     cout << (score >= 90? "A":
            (score >= 80? "B":
            (score >= 70? "C":
            (score >= 60? "D":"F")))) <<endl;
 
    //Output the results
    
    //Exit stage right
    return 0;
}

