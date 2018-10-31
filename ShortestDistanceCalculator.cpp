// Abdelrahman Obyat
#include <iostream>
#include <cmath>       /* in order to use sqt */
using namespace std;


int main() 
{
                    /* ------ Declarations----*/

  const int ftpermile = 5280; //conversion from feet to miles
  float totaldistancetraveled6=0.000000; // 6 significant figures in output
  float miles=0.0; //for the conversion from feet to miles
  float homepercentage=0.00;//Picked 2 significant figures which is sufficent 
  float nickpercentage=0.00;
  float lostpercentage=0.00;
  int x;      //current coordinate of x       
  int y;     //current coordinate of y
//Started at 19 because inital decision of 
//first walk is 20 then gets incremented each walk 
  int initaldecision=19;       
  int distance;    
  int turn;       //Variable to make next turn         
  int turnstaken; //Keeping track of current turn in case next one is LEFT turn 
  int decisionpoint;
  int totaldistancetraveled=0;//initalized to zero in order to cumulate distance
  //This boolean is to force the while loop to start and termiante it as needed
  bool T; 
  int nickcount=0;  //keeping count of number of times made it to Nick's
  int homecount=0; //Keeping count of number of times made it home
  int lostcount=0;//Keeping count of number of times got lost on the way
  //These two are floats because the distance calculated will be decimial
  float distancefromhome=0.0;
  float distancefromnick=0.0;                      


                    /*------Calculations------*/
//Making 250 walks 
  for(int i=0; i<=250; i++)
  {
    //Forcing the while loop to start for each 250 walk to find a termination
    T = true;
    //incremented because first decision of first walk
   //starts at 20 then first decision of second walk starts at 21.. etc.
    initaldecision++;
    //current coordinate of x set to inital decision 
   //because thats the direction of first decision                
    x = initaldecision;
    //Already made some distance so add that the recursive formula to start it   
    distance = x; 
    //Resetting y to zero since only x is increased per inital decision of walk          
    y = 0;                   
    //Keep track of this distance of inital decision as well as other distances
    totaldistancetraveled = x;
             
    //Resetting turns and decision points to 1 for the next walk
    turn = 1;  
    decisionpoint = 1;         
                                                
//while loop for each decision until one of the three conditions occurs
//Setting it to True so it executes one or more times
while(T)
    {
        //iterative formula for computing distance
        distance = (((((distance)*124985+1367892)%1654872235)%300)+21);
//Making 6 Right turns and 1 Left turn repeatedly

        //if its 1 through 6/7th decisionpoint he will keep turning RIGHT    
        if(decisionpoint%7!=0)
        {
            //Direction of turning 1 Right turn = negative y
            if(turn%4==1)
                {
                    y -= distance;
                    turnstaken=1;
                }//turn%4=1

            //2 Right turns = negative x
            else if(turn%4==2)
                {
                    x -= distance;
                    turnstaken=2;
                }//turn%4=2

            //3 Right turns = positive y
            else if(turn%4==3)
                {
                    y += distance;
                    turnstaken=3;
                }//turn%4=3
            //4 Right turns = positinve x
            else if(turn%4==0)
                {
                    x += distance;
                    turnstaken=4;
                }//turn%4=2
        }//if!=0 
   //if its the 7th decision point it means hes going to turn LEFT
       else if(decisionpoint%7==0)
           {
            //Direction of turning 1 Left turn = positive x
            if(turnstaken==1) x += distance;
 
             //2 Left turns = negative y
            else if(turnstaken==2) y -= distance;

            //3 Left truns = negative x
            else if(turnstaken==3) x -= distance;
               
            //4 Left turns = positive y  
            else if(turnstaken==4) y += distance;
                    turn=turn+2; //increment turn by two after left from +x
                
            }//elseif==0


            /* calculate all the  new information taken */ 

    totaldistancetraveled += distance;//cumulate the overall distance
    //Distance formula of two points starts at origin so zero is omitted
    //distance formula: sqrt(x^2+y^2)
    distancefromhome = sqrt((x*x) + (y*y));
    //Distance formulat of two points: sqrt((x2-x1)^2 + ((y2-y1)^2)
    //taken at current (x,y) and (1000,1000)
    distancefromnick = sqrt(((x-1000)*(x-1000)) + ((y-1000)*(y-1000)));
    //setting the 6 digit significant figure total distance 
    //to the integer total distance. This promotes it to float to set it    
    totaldistancetraveled6 = totaldistancetraveled;
    //Dividing total distance traveled by 5280 to convert it
    //converstion of 1 Mile = 5280 feet
    miles = ((totaldistancetraveled6/ftpermile));

      //Used this to make sure I was getting two correct outputs
      //Note there are many outputs that I did not get
      //but was told output may be different
      //if(totaldistancetraveled == 2161){cout<<"*************FOUND FIRST\n";}
      //if(totaldistancetraveled == 2742){cout<<"*************FOUND SECOND\n";}

//If he is within 50 feet of home AND there are 5+ decisions before this point
//Stop the while loop for this walk since it terminated with a correct decision
//Count the number of times he made it home per walk; display home and distance
//If the total distance to reach this point is greater than a mile
//show the distance in feet and miles
    if((distancefromhome<51)&&(decisionpoint>5))
    {           
        T=false;
        cout<<"\nhome\t"<<totaldistancetraveled;
        homecount++;
            if(totaldistancetraveled>ftpermile)
            {
             cout<<"  (~"<<miles<<" miles)";            
            }
              
    }
//If he is within 500 feet of Dr. Nick's office
//Stop the while loop for this walk since it terminated with a correct decision
//Count the number of times he made it to Nick's per walk
//And display "Nick's" and the distance
//If the total distance to reach this point is greater than a mile
//show the distance in feet and miles
    else if(distancefromnick<501)
    {
        T=false;
        cout<<"\nNick's\t"<<totaldistancetraveled;
        nickcount++;
            if(totaldistancetraveled>ftpermile)
            {
             cout<<"  (~"<<miles<<" miles)";            
            }
    }
//If he has gone to the 400th decisionpoint then just give up
//Stop the while loop for this walk since it terminated with 400 decisions
//Count the number of times he was lost per walk
//Do not not display on screen he is lost since it would outnumber other outputs
    else if(decisionpoint>399)
    {
        T=false;
        //only counting number of times he was lost. Not showing lost in output
        lostcount++;
        //no need to conver it to miles since it won't show in output
    }

//Done with this Decisionpoint, now for the next one until 250 walks complete
      turn++;//next turn
      decisionpoint++;//next decisionpoint
//Used this to see how many decision were made for example
//should be 400 decision for each 250 walks unless it ends with termination
//cout<<"\n\n\ndecisionpoint is:"<<decisionpoint<<"\t"; 
  } 
 }

//After finishing 250 walks show percentage of times per termination  
cout<<"\n\n";
homepercentage = (100*(((float)homecount)/250));
nickpercentage = (100*(((float)nickcount)/250));
lostpercentage = (100*(((float)lostcount)/250));
cout<<"\nPercentage of times made it to Nick's:\t"<<nickpercentage<<"%";
cout<<"\nPercentage of times went back home:\t"<<homepercentage<<"%";
cout<<"\nPercentage of times got lost:\t"<<lostpercentage<<"%"
<<endl;

  return 0;
}//main
