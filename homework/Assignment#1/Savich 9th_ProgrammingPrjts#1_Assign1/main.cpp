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
int main() {
    // Declare and initialize variables
    int x, y;
    int product, sum;
    //Input data
    cout<<"Enter a number"<<endl;
    cin>>x;
    cout<<"Enter another number"<<endl;
    cin>>y;
    //Calculate or map inputs to outputs
    sum = x+y;
    product= x*y;
    //Output the result
    cout<<"The sum of the numbers ="<<sum<<endl;
    cout<<"The product of the numbers="<<product<<endl;
    //Exit stage right
    return 0;
}

