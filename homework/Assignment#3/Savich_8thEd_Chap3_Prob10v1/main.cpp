/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 19, 2016, 9:30 AM
 * Purpose Fib Crud problem
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
        //the problem to solve
        cout<<endl<<"Solution to Savitch 8thEd Chap3 Prob10"<<endl;
        cout<<endl<<"The Fibonacci Sequence"<<endl<<endl;
        //Declare variables
        unsigned int fi, fim1, fim2;//Designation in the sequence
        unsigned short nTerms; //Number of terms in the sequence
        unsigned short counter;// Current position in the sequence
        const char DREPRO=5;// days to reproduce
        float crdWt;// weight of crud
        unsigned int nDays;//# of days to growe crud
        // Initalize the sequence
        fim2=fim1=1;// Start the sequence
        counter=2;
        //Input # of terms
        cout<<"Input the initial weight of the crud in lbs"<<endl;
        cin>>crdWt;
        cout<<"How many days is it allowed to grow"<<endl;
        cin>>nDays;
        //Calculate the number of terms
        nTerms=(nDays/DREPRO)+1;
        
        //Output or calc the output required
        if(nTerms==1){
            cout<<"After"<<nDays<<" is "
                    <<fim2*crdWt<<" lbs"<<endl;
        }else if(nTerms==2){
            cout<<"After"<<nTerms<<"is " 
                    <<fim2*crdWt<<"lbs"<<endl;
        }else{
             do{
             fi= fim1+fim2;
             counter++;
             fim2=fim1;
             fim1=fi;       
            }while(nTerms<counter);
            cout<<"Term"<<nTerms<<"in the sequence= "
                    <<fi<<endl<<endl;
        }
        //the crud result is
        cout<<"After "<<nDays<<" day the crud weighs "<<fi*crdWt<<"(lbs)"<<endl;

    return 0;
}

