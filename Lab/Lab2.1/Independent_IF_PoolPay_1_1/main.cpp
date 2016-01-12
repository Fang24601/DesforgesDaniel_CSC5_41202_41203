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
    //Declare and initialize variables
    unsigned int hrswkd;
    //Input data
    cout<<"Enter the hours worked by Breakers:"<<endl;
    cin>>hrswkd;
 
    switch (hrswkd)
    //Calculate or map inputs to outputs
        {case 1: 
        case 2:
        case 3:
        case 4:
        case 5:
            cout<<"Cost of Breakers: $4000"<<endl;
            break;
        case 6:
            cout<<"Cost of Breakers: $4800"<<endl;
            break;
        case 7:
            cout<<"Cost of Breakers: $5600"<<endl;
            break;
        case 8:
            cout<<"Cost of Breakers: $6400"<<endl;
            break;
        case 9:
            cout<<"Cost of Breakers: $7200"<<endl;
            break;
        case 10:
            cout<<"Cost of Breakers: $8000"<<endl;
            break;
        case 11:
            cout<<"Cost of Breakers: $8800"<<endl;
            break;
        case 12:
            cout<<"Cost of Breakers: $9600"<<endl;
            break;
        case 13:
            cout<<"Cost of Breakers: $10400"<<endl;
            break;
        case 14:
            cout<<"Cost of Breakers: $11200"<<endl;
            break;
        case 15:
            cout<<"Cost of Breakers: $12000"<<endl;
            break;
        case 16:
            cout<<"Cost of Breakers: $12800"<<endl;
            break;
        case 17:
            cout<<"Cost of Breakers: $13600"<<endl;
            break;
        case 18:
            cout<<"Cost of Breakers: $14400"<<endl;
            break;
        case 19:
            cout<<"Cost of Breakers: $15200"<<endl;
            break;
        case 20:
            cout<<"Cost of Breakers: $16000"<<endl;
            break;
        }
    //Output the results
 
 
    //Exit stage right
    return 0;
}        
 

