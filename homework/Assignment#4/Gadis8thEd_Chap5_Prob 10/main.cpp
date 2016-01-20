/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 20, 2016, 10:35 AM
 * Purpose: Table of temperatures
 */

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>


using namespace std;

//Global Constants

const float pi=4*atan(1);
int main(int argc, char** argv) {
    //Problem to solve
    
    cout<<"Solution To Gaddis 8thEd Chap5 Prob 12"<<endl;
    cout<<"Display a Table of Temperatures"<<endl;
   
   //declare variables
    float slope = 5.0f/9;              //slope of line for temp conv
    char intrcpt=-32;                 //Scalled by 9/5 degree c
    char c1=0, c2=100, f1=32, f2=212;//data pts for freezing and boiling
   //Loop to generate degree celsius
    cout<<"Fahrenheit   Celsius  Celsius"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    for(char f=f1;f<=f2;f++){
        float ceq= slope*(f-intrcpt);
        float cintrp=c1+static_cast<float>((f-f1))/(f2-f1)*(c2-c1);
        cout<<setw(10)<<f<<setw(10)<<ceq<<setw(10)<<cintrp<<endl;
    }
    return 0;
}

