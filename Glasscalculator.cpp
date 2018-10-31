// Abdelrahman Obyat

#include <iostream>
#include <math.h>       /* in order to use floor */
using namespace std;


int main() 
{


/* ------ Declarations----*/

int thickness;            //thickness value in centimeters
int ssn;                  //last 4 digits of patient's ssn
bool insurance;    //whether or not the patient has insurance,1=true, 0=false
unsigned int LVA;       //left visual acuity (positive unsigned int)
unsigned int RVA;      //left visual acuity (positive unsigned int) 
const short K1 = 2;   // Index of refraction constant
const float K2 = 4.2;// Dr Nick's minimum income from each customer
int IAF;         //this is sum of last two digits
int IAF_lastTWO;
int IAF_thirdNUM;
int IAF_fourthNUM;
//of the patient's soc sec number ONLY added if patient has insurance



//opening statement/greeting to the program followed class slide examples
cout<<"You are using the LENS-O-MATIC program"<<endl; 

//Inputs and outputs to the porgram
cout<<"enter:";
cout<<"\n      left visual acuity:\t"; //input to LVA, followed class slide examples
cin>>LVA;
cout<<"      right visual acuity:\t"; //input to RVA, followed class slide examples
cin>>RVA;
cout<<"      ssn:\t";                //input to ssn, followed class slide examples
cin>>ssn;
cout<<"      ins?:\t";              //input to ssn, will read 1 or 0, true or false
cin>>insurance;                    


/*------Calculations------*/
//multiplying ssn number by boolean insurance, since insurance can be 0 or 1. This will either
//make ssn numnber to itself if there is insurance or make ssn into 0 if there isnt
//this effectively eliminates the need to have if insurace add else if no insurance do not add
int ssnvalue = (insurance*ssn); 

//Adding the last two numbers from ssn
IAF_lastTWO = ssnvalue%100; //Takes the last two numbers of the ssn
IAF_thirdNUM = IAF_lastTWO /10; //Gets the first number of the last two of ssn
IAF_fourthNUM = IAF_lastTWO %10; //Gets the second number of the last two of ssn
IAF = IAF_thirdNUM + IAF_fourthNUM; //Adds both the third and foruth numbers of the ssn

//Dr. Nick's formula for thickness
thickness = (((LVA / (RVA + K1)) + (( 5 * K2 )) + IAF)); 
thickness = floor(thickness);   //rounding down to the nearest integer value

//Displaying the value for the thickness of the lense
cout<<"      thickness of lense:\t"<<thickness<<" cm";

//sign off message followed class slide examples
cout<<"\nGood luck with those glasses! And comeback to see Dr. Nick !"<<endl;

//return 0 for int main
  return 0;
}

