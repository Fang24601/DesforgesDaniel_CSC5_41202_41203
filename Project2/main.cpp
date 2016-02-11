/* 
 * File:   main.cpp
 * Author: Daniel Desforges
 *
 * Created on February 10, 9:20 AM
 * Purpose: Project 2 (similar to Oregon Trail)
 */

#include <iostream>
#include <cmath>
#include <cstdlib>


using namespace std;
//User Libraries

//Functional Prototypes

//Execution Begins here
int main() {
  
    // Declare and initialize variables
    bool cont;//Exits code when continue = false and advances story when continue = true
    char x,y,z,w,r,t,m,n,l,o; // choices for player
    int FshCaut(int kk[]);
    string madM1= 'Jeff', madM2=madM1;
    
    do{
      
    //Player decides to either take the adventure or not
    cout<<"Your about to embark on an adventure as boyscout."
            <<" Type A to continue and B to go be a couch potato"<<endl;
    cin>>x;
    //welcoming to game choice to play or exit program
    if(cont==true&&x='A'){
        cout<<"Welcome to the Grand Canyon River Rapid Adventure"<<endl;
    }else if(x=='B'){
        cout<<"Go enjoy being a Couch potato"<<endl;
        cont==false;
    }
    //choice of one item to bring on journey and if statements with consequece for choice
    cout<<"You have begun your hike to the rapids."
            <<"\n You can only bring one extra item because "
            <<"your pack is overloaded as it is:"
            <<"\n Type A for knife, B for a lighter, or C for food"<<endl;
    cin>>y;
    if(cont==true&&y='A'){
        cout<<"The knife will come in handy I'm sure of it"<<endl;
    }else if(y=='B'){
        cout<<"You have failed as a boy scout because you have not"
                <<" earned your Firemen safteychip and accidently "
                <<"burned down the forest on the way to the rapids"<<endl
        cout<<"You better luck next time scout remember saftey first"<<endl;
        cont=false;
    }else{
        cout<<"You were Attacked BY A WILD BEAR!! "
                <<"He said you tasted no different from the jerky you ate"<<endl;
    cout<<"Remember to beware of wildlife Try again later scouter."<<endl;
    count=false;
    }
    //lost in the woods episode
    cout<<"You've taken a wrong turn somewhere: "
            <<"Type A to retrace your steps or B to press on towards the sound of water"
       cin>>z;
    if(z=='A'){
        cout<< "A boyscout leaves no trace "
                <<"and thus you have been lost to the wild never to be seen again"<<endl;
        cout<<"Wheres your sense of adventure? Try again"<<endl;
        cont==false;
    }else if(z=='B'){
        cout<<"The sound of water is getting closer great job"   
    }
    //random encounter episode. (double entendre intended)
    cout<<"You have enountered"<<int BCount= rand()%998+2<<"bees"<<endl;
    cout<<"QUICKLY! TYPE A TO FIGHT WITH YOUR KNIFE OR B TO RUN"<<endl;
    cin>>w;
    if(w=='A'){
        if(BCount<500 ){
            cout<<"You have triumphed over the accursed bees "
                    <<"and victoriously march toward the sound of water"<<endl;
        }else if(BCount>=500){
        cout<<"The bees have taken your soul to their queen... you have been eaten"<<endl;
        cout<<"One must know his limitations. Try Again scout"<<endl;
        cont==false;
        }
    }else if(w=='B'){
      cout<<"You run from the bees. "
              <<"You feel ashamed at your lack of strength "
              <<"but hey at least your alive"<<endl;
    }
    //sitting and waiting for the other scouts. Keeping log of the days and displaying it or not
    cout<<"You have arrived at the boats "
            <<"and are waiting for the other scouts to arrive"<<endl;
    cout<"Do you want to keep a log of how many days youve waited?(Y/N)"<<endl;
    cin>>r;
    if(r=='Y'){
        for(int scouts= rand()%6+1, int i; i<scouts; i++)
            cout<<"There are"<<scouts<<"scouts coming and only one comes a day it seems"<<endl;
        cout<<"Today is the"<<i<<"day"<<endl;
    }else if(r=='N'){
        cout<<"You wait many days and eventually you'll be on the water"<<endl;
    }
    //Fishing episode
    cout<<"Would you like to go fishing with the other boys?(Y/N)"<<endl;
    cin>>m;
    if(m=='Y'){
        cout<<"Great you roll the dice and get"
                <<fishX=rand()%5+1
                <<"This should help your odds";
        cout<<"Its been a long day of fishing and youve caught"
                <<FshCaut(kk[fishX])
                <<"fish. NICE JOB!"<<endl;
    }else if(m=='N'){
        cout<<"Real shame I hear the fish are roaring up stream like Alaskan Salmon"<<endl<<endl;
    }
    //riddle dream episode
    cout<<"You've fallen into slumber "
            <<"and have been confronted by madmen asking you to make a choice"<<endl;
    cout<<"One mad man says if you believe both are names are Jeff "
            <<"I will Grant you wings to soar upon"<<endl;
    cout<<"The other mad mans says if you belive that only my name is Jeff "
            <<"I will gift you the power of sharks"<<endl;
    cout<<"Whom do you Belive(type O for first or T for second)"<<endl;
    cin>>n;
    if(n=='O'&&madM1==madM2){
        cout<<"You have been granted wing like an eagle. "
                <<"Your dreams of aspiring to become an eagle scout take flight!"<<endl;
    }else if(n=='T'&&madM1!=madM2){
        cout<<"Both mad men chase your forever and you never leave the dream world again"<<endl;
        cont==false;
    }
    //hunting episode
    cout<<"You supplies are running low care to hunt for them?(Y/N)"<<endl;
    cin>>o;
    if(o=='Y'){
        cout<<"The hunt is on"<<endl;
        cout<<Hunt;
    }else if(o=='N'){
        cout<<"Have fun starving"<<endl;
        cont==false
    }
    //sprint race episode
    cout<<"Another scout has challeneged you to a foot race"<<endl;
    cin>>l;
    if(l=='Y'){
        cout<<"You have begun the race"<<endl;
        cout<<Race;
    }else if(l=='N'){
        cout<<"He goes on to challenge the other boys and they have lots of fun"<<endl
    }
    //final choice then game over
    cout<<"Finally everyone has arrived and your on the water"<<endl<<endl;
    cout<<"The river forks but there seems to be no difference in the paths: "
            <<"Type A to go right, B to go left"<<endl;
    cin>>t;
    if(t=='A'){
        cout<<"You head down the river for several miles and fall asleep on the water"<<endl;
        cout<<"You dream of campfires "
                <<"and smores until your woken by the rush of water as "
                <<"you plummet to your death over a water fall"<<endl;
        cont==false;
    }else if(t=='B'){
        cout<<"Slowly drifting you intersect the mouth of a cave"<<endl;
        cout<<"With your endless sense of adventure you press on "
                <<"not realizing you have entered the cave of wonders"<<endl;
        cout<<"You end your adventure with fame "
                <<"and fortune by living the true scout way. Congratulation"<<endl;
        cont==false;
    }
    while(cont==true);
    cout<<"Would you like to try again?(Y/N)"<<endl;
    if(retry=='Y'){
        cont==true;
    }
    else
        cout<<"See ya next time"<<endl;
    return 0;
}
//*******function utilizing arrays and pointers to declare the amount of fish the scout catches***********
    const int SIZE=5;
    int FshCaut(int k[]){
        k[]={10,20,30,40,50,60};
        while(int i<=SIZE){
            return k[i];
        }
    }