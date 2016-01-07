/* 
  File:   main.cpp
  Author: Daniel Desforges
 
  Created on January 7, 2016, 10:48 AM
  Purpose: How far does it drop
 */

//System Libraries
#include <iostream>//input output library
#include<cstdlib>// random function location
#include<cmath>// Math functions
#include<ctime>// Time to set the random seed
#include<iomanip>// format library
#include <fstream>// Reading to a file

using namespace std;

//User Libraries

//Global Constants
const float GRAVITY=31.172; //Sea LEvel EArth Acceleration Constant ion ft/sec^2
//Function Prototypes

//Execution Begins here
int main() {
    srand(static_cast<unsigned int>(time(0)));
    
    // Declare and initialize variables'
    ofstream out;// declare file stream obj called out
    float drpTime, distance; // Time in seconds, Distance in Feet
    
    //Input the time with rand number and opening a file
    drpTime=rand()%11+10;//[10, 20]secs
    const int SIZE =21;
    char fileNam[SIZE]="DropDistance.dat";
    out.open(fileNam);
    //Calculate distance droped
    distance=0.5f*GRAVITY*drpTime*drpTime;
    
    
    //Output the results
    cout<<"Drop Time = "<<drpTime<<"(sec)"<<endl;
   //Output to file
    out<<fixed<<setprecision(3)<<showpoint;// format set to 3 decimals
    out<<"free Fall Distance= "<<distance<<"(ft)"<<endl;
    //Exit stage right
    return 0;
}

