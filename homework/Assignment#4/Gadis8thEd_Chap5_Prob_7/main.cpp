/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 20, 2016, 11:15 AM
 * Purpose: Table of Salary Double starting at a penny
 */

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>


using namespace std;

/*
 * 
 */
const float pi=4*atan(1);
int main(int argc, char** argv) {
    //Problem to solve
    
    cout<<"Solution To Gaddis 8thEd Chap5 Prob 7"<<endl;
    cout<<"Display a Salary Table"<<endl;
   
   //declare variables
    unsigned int salary=1;              //salary starting at a penny
    float totPay=salary;                       // Total pay by summing the salary
    
   //Loop to generate salary table and total paid
    cout<<"  Day         $Salary         $Total"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
     cout<<setw(4)<<1<<setw(15)<<salary/100.0f<<setw(15)<<totPay/100<<endl;
    for(int day=2;day<=31;day++){
        //salary*=2
        salary<<=1;//bit shift right by 1 bit
        totPay+=salary;
        cout<<setw(4)<<day<<setw(15)<<salary/100.0f<<setw(15)<<totPay/100.0<<endl;
    }
     return 0;
}

