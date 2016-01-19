/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 19, 2016, 10:38 AM
 * Purpose: factorial
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //variables
    unsigned int n, factN=1;
    //input data
    cout<<"enter the number you would like to compute the factorialn!"<<endl;
    cout<<"the limit of this calculation is <=13"<<endl;
    cin>>n;
    //calculate the factorial
    for(int i=1;i<=n;i++){
        factN*=1;
    }
    //output the results
    cout<<n<<"!="<<factN<<endl;
    return 0;
}

