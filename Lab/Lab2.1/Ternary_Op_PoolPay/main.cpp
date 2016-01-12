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
   int hour;
    //Input data
   cout << "How many hours do you have?" <<endl;
    cin >> hour;
    //Calculate or map inputs to outputs
     cout<<"This is how much you will pay $"<<(hour<5?hour=5*800:hour*800)<<endl;
    //Output the results
    
    //Exit stage right
    return 0;
}

