/* 
  Author: Daniel Desforges
 
  Created on January 6, 2016, 9:35 AM
  Purpose: Energy Drink Survey
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here
int main (){
     // Declare and initialize variables
 int n_o_p, P_p_P, T_P;
 //Input data
 cout <<"Press return after entering a number."<<endl;
 cout<<"enter the number of pods"<<endl;
 cin>>n_o_p;
 cout<<"Enter the number of peas in a pod"<<endl;
 cin>>P_p_P;
 //Calculate or map inputs to outputs
 T_P= n_o_p+P_p_P;
    //Output the result
 cout<<"If you have"<<n_o_p<<"pea pods"<<endl<<"and"<<P_p_P<<"peas in each pod then"<<endl<<"you have"<<T_P<<"total peas in all the pods"<<endl;
 return 0;
 }
