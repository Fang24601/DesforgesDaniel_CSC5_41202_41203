/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 19, 2016, 9:23 AM
 */

#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
//Execution Begins here
int main(int argc, char** argv) {
    // Declare and initialize variables
    unsigned short nSol; //Problem solution to display
    bool reDspl=true;
 
    
    //Solution to all problems
    do{
           //Input problem to display
        cout<<"Assignment 4 problem set"<<endl;
        cout<<"Type 1 to display problem 1: Gadis8thEd_Chap5_Prob7"<<endl;
        cout<<"Type 2 to display problem 2: Gadis8thEd_Chap5_Prob12"<<endl;
        cout<<"Type 3 to display problem 3: "<<endl;
        cout<<"Type 4 to display problem 4: "<<endl;
        cout<<"Type 5 to display problem 5: "<<endl;
        cout<<"Type 6 to display problem 6: "<<endl;
        cout<<"Type 7 to display problem 7: "<<endl;
        cout<<"Type 8 to display problem 8: "<<endl;
        cout<<"Type 9 to display problem 9: "<<endl;
        cout<<"Type 10 to display problem 10: "<<endl;
        cout<<"Type anything else to exit"<<endl<<endl;
        cin>>nSol;
        //Solutions
        switch(nSol){
            case 1:{
                //the problem to solve
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
                
                break;
            }
            case 2:{
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
                break;
            }
            case 3:{
                cout<<endl<<"Solution to Savich9thEd_Chap4_"<<endl<<endl;
                
                break;
            }
            case 4:{
                cout<<"Problem 4"<<endl;
                
                break;
            }
            case 5:{
                cout<<"Problem 5"<<endl;
                
                break;
            }
            case 6:{
                cout<<"Problem 6"<<endl;
                
                break;
            }
            case 7:{
                cout<<"Problem 7"<<endl;
                
                break;
            }
            default:{
                cout<<"Exiting program"<<endl;
                reDspl= false; 
            }
        }
    }while(reDspl);

    //Output the results
    
    //Exit stage right
    return 0;
}