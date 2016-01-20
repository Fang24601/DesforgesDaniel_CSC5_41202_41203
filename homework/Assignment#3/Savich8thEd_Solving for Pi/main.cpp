/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 19, 2016, 10:38 AM
 * Purpose: Calculate e to the x
 */

#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
const float pi=4*atan(1);
int main(int argc, char** argv) {
    //Problem to solve
    
    cout<<"Solving for pi"<<endl;
    cout<<"The Finite sum for pi"<<endl;
    //declare variables
    float apxPi=1;
    unsigned int nTerms;
    char sign= -1;
  
    //Input terms
    cout<<"Input terms to approximate pi"<<endl;
    cin>>nTerms;
    //Approx Pi
    for(int i=2, j=3; i<=nTerms; i++, j+=2){
        apxPi+=1/j*sign;
        
      
    }
    //output
    cout<<"The exact value of PI= "<<pi<<endl;
    cout<<"The approx value of PI ="<< apxPi<<endl;
    return 0;
}

