/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 20, 2016, 8:55 AM
 * Purpose: Rock Paper Scissors
 */

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>


using namespace std;

/*
 * 
 */
const float pi=4*atan(1);
int main(int argc, char** argv) {
    //Problem to solve
    
    cout<<"Rock Paper scissors"<<endl;
    srand(static_cast<unsigned int>(time(0)));
    char qwstion;
     do{
    //declare variables
    float apxPi=1;
    unsigned int nTerms;
    char computr; // the computers play
    char player; // player 
    bool result;
    
    
    //Input 
   
    do{
        cout<<"Whats your move?(P,R,S) "<<endl;
        cin>>player;
        player= toupper(player);
    }while(!player=='P'|| !player=='R'||!player=='S');
    //comp generated play
    do{
        computr=rand()%4+80;
    }while(computr=='Q');
    //output the moves by the comp and player
    cout<<"The computer played  "<<computr<<endl;
    cout<<"The players move"<<player<<endl;
    //determine result
    if(computr==player){
            cout<<"The result is a tie"<<endl;
    }else if(player =='R'&&computr=='S'){
            cout<<"The Player wins!"<<endl;
    }else if(player=='S'&&computr=='P'){
            cout<<"The Player wins!"<<endl;
    }else if(player=='P'&&computr=='Ry'){
            cout<<"The Player wins!"<<endl;
    }else{
            cout<<"the player loses"<<endl;
            }  
    cout<<"Do you want to continue playing(Y or N? "<<endl;
    cin>>qwstion;
}while(toupper(qwstion)=='Y');
    return 0;
}

