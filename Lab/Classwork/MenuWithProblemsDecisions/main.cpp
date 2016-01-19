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
        cout<<"Assignment 3 problem set"<<endl;
        cout<<"Type 1 to display problem Savitch 8thEd Chap3 Prob10"<<endl;
        cout<<"Type 2 to display problem 2"<<endl;
        cout<<"Type 3 to display problem 3"<<endl;
        cout<<"Type anything else to exit"<<endl<<endl;
        cin>>nSol;
        //Solutions
        switch(nSol){
            case 1:{
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
 
                break;
            }
            case 2:{
                //declare variables
                const unsigned char nTerms=13;
                float etox=1, x;

                cout<<"input x of e^x computtation"<<endl;
                cin>>x;
                //calculate e^x
                for(int n=1;n<=nTerms;n++){



                unsigned int  factN=1;

                for(int i=1;i<=n;i++){
                    factN*=1;
                }
                cout<<n<<"!="<<factN<<endl;
                // calc e^x
                etox+=pow(x,n)/factN;
                }
                //ooutput
                cout<<"The exact value of e^"<<x<<"="<<exp(x)<<endl;
                cout<<"The approx value of e^"<<x<<"="<<etox<<endl;
                return 0;
            
                break;
            }
            case 3:{
                cout<<endl<<"Solution to problem 3"<<endl<<endl;
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