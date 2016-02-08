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
        cout<<"Type 1 to display problem 1"<<endl;
        cout<<"Type 2 to display problem 2"<<endl;
        cout<<"Type 3 to display problem 3"<<endl;
        cout<<"Type 4 to display problem 4"<<endl;
        cout<<"Type 5 to display problem 5"<<endl;
        cout<<"Type 6 to display problem 6"<<endl;
        cout<<"Type 7 to display problem 7"<<endl;
        cout<<"Type anything else to exit"<<endl<<endl;
        cin>>nSol;
        //Solutions
        switch(nSol){
            case 1:{
                //the problem to solve
                cout<<"Problem 1: Savich 9thEd chap 7 prob 1"<<endl;
                string firstLast2(string First[], string Last[]){
                    First[i]
                    return First;
                }
                break;
            }
            case 2:{
                cout<<"Problem 2"<<endl;
            
                break;
            }
            case 3:{
                cout<<endl<<"Solution to problem 3"<<endl<<endl;
                
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