/* 
  File:   main.cpp
  Author: Daniel Desforges
 
  Created on January 26, 2016, 8:45 AM
  Purpose: Variation on a savings theme
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
const char PERCENT=100;//convert to decimal to percentage
//Fucnction Prototypes
float save1(float, float,int);//power
float save2(float, float, int);//exp and logat, i
float save5(float,float,int);//recursion
//Execution Begins here
int main(int argc, char** argv) {
    //set rand # seed
    srand(static_cast<unsigned int>(time(0)));
    // Declare and initialize variables
    float pv=rand()%9001+1000;//[1000,10000]$'s
    float intRate=rand()%11+5;//[5,15]%
    char nComp=rand()%16;//[0,15] years
  
    //Output the input
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"the Present Value  = $"<<pv<<endl;
    cout<<"The interest rate  =  "<<intRate<<"%"<<endl;
    cout<<"The number of year = "<<static_cast<int>(nComp)<<endl;
          //output the results
    cout<<"The savings using the power function       = $"<<save1(pv,intRate/PERCENT,nComp)<<endl;
     cout<<"The savings using the exp and log function = $"<<save2(pv,intRate/PERCENT,nComp)<<endl;
      cout<<"The savings using the recursion = $"<<save5(pv,intRate/PERCENT,nComp)<<endl;
    //Calculate or map inputs to outputs
    
  
    //Output the results
    
    //Exit stage right
    return 0;
}
/**************************save1**********************/
//inputs
//p->Present Value $'s
//i->Interest rate%
//n->Number of compounding periods
//output
//fv->future value$'s
float save1(float p, float i, int n){
    return p*pow((1+i),n);
}
/**************************save2**********************/
//inputs
//p->Present Value $'s
//i->Interest rate%
//n->Number of compounding periods
//output
//fv->future value$'s
float save2(float p, float i, int n){
    return p*exp((n*log(1+i)));

}
/**************************save2**********************/
//inputs
//p->Present Value $'s
//i->Interest rate%
//n->Number of compounding periods
//output
//fv->future value$'s
float save5(float p, float i, int n){
    if(n==0)return p;
    
    return save5(p,i,n-1)*(1+i);
}

