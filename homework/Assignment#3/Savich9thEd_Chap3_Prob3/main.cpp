/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 21, 2016, 8:24 AM
 * Purpose: Date to Roman Numeral Conversion
 */

#include <iostream>// I/O
#include <cstdlib>// Rand Function
#include <ctime>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //variables
    cout<<"Solution to Savich 9thEd Chap 3 Prob3"<<endl;
    cout<<endl<<"The Roman Numeral Conversion Program"<<endl;
    //input data
    unsigned short number=rand()%2001+1000;//[1000,3000]
    unsigned char n1000s,n100s,n10s,n1s;//Number of 10^x's
    cout<<"Number to convert= "<<number<<endl;
    
    //calculate the Roman Numeral in 1000's, 100's, 10's, 1's
    n1000s=(number-number%1000)/1000; //Number of 1000's
    number=(number-n1000s*1000);       //Subtract off 1000's
    n100s=(number-number%100)/100; //Number of 100's
    number=(number-n100s*100);       //Subtract off 100's
    n10s=(number-number%10)/10; //Number of 10's
    number=(number-n1000s*10);       //Subtract off 10's
    n1s=(number-number%1)/1; //Number of 1's
    number=(number-n1s*1);       //Subtract off 1's
    //output the stripped off digits
   
    cout<<"Number of thousands= "<<static_cast<int>(n1000s)<<endl;
    cout<<"Number of hundreds= "<<static_cast<int>(n100s)<<endl;
    cout<<"Number of ten's= "<<static_cast<int>(n10s)<<endl;
    cout<<"Number of one's= "<<static_cast<int>(n1s)<<endl;
    //out put the roman numeral equivalent
cout<<"the Roman Numeral eqivalent= ";
 //output 1000s
switch(n1000s){
    case 3:cout<<'M';
    case 2:cout<<'M';
    case 1:cout<<'M';
}
//output 100s
switch(n100s){
    case 9:cout<<"CM";break;
    case 8:cout<<"DCCC";break;
    case 7:cout<<"DCC";break;
    case 6:cout<<"DC";break;
    case 5:cout<<"D";break;
    case 4:cout<<"CD";break;
    case 3:cout<<'C';
    case 2:cout<<'C';
    case 1:cout<<'C';
}
//output 10s
switch(n10s){
    case 9:cout<<"XC";break;
    case 8:cout<<"LXXX";break;
    case 7:cout<<"LXX";break;
    case 6:cout<<"LX";break;
    case 5:cout<<"L";break;
    case 4:cout<<"XL";break;
    case 3:cout<<'X';
    case 2:cout<<'X';
    case 1:cout<<'X';
}
//output 1s
switch(n1s){
    case 9:cout<<"IX";break;
    case 8:cout<<"VIII";break;
    case 7:cout<<"VII";break;
    case 6:cout<<"VI";break;
    case 5:cout<<"V";break;
    case 4:cout<<"IV";break;
    case 3:cout<<'I';
    case 2:cout<<'I';
    case 1:cout<<'I';
}
   
    return 0;
}

