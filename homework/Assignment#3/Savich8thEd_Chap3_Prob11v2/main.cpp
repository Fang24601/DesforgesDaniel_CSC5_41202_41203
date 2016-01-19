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
int main(int argc, char** argv) {
    //declare variables
    const unsigned char nTerms=13;
    float etox=1, x;
    
    cout<<"input x of e^x computtation"<<endl;
    cin>>x;
    //calculate e^x
    for(int n=1;n<=nTerms;n++){
        
        
    
    unsigned int  factN=1;
    
    for(int i=1;i<=n;i++){
        factN*=1;
    }
    cout<<n<<"!="<<factN<<endl;
    // calc e^x
    etox+=pow(x,n)/factN;
    }
    //ooutput
    cout<<"The exact value of e^"<<x<<"="<<exp(x)<<endl;
    cout<<"The approx value of e^"<<x<<"="<<etox<<endl;
    return 0;
}

