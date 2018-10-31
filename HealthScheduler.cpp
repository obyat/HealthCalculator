// Abdelrahman Obyat
//Various calculations
#include <iostream>
#include <stdlib.h> //for exit(0) in unix
using namespace std;


                    /****Function Prototypes****/

//Description: the greetings() function will output a message to the screen
//greeting the user.
//Pre: None
//Post: Message output to the screen.
void greetings();
//Description: The menu() function will display a menu to the user and
//store the value for main to select a corresponding function
//Pre: only takes values 1-5
//Post: stores are returns value_to_get in order to select a corresponding 
//function
int menu();
//Description: Function to calculate the factorial of a given number
//Pre: must be given an int
//Post: returns the factorial of a given number
int factorial(int number);
//Description: pillsnumber() will calculat the number of pills for a 
//given function 
//Pre: must have anxiety and day calculated
//Post:re Returns the number of pills according to the formula will always
//return 0 or more pills
int pillsnumber(int p);
//Description: This function is the prompt for giving number of legs for daty
//will then call walkcompute()
//Pre: None
//Post: stores the number and calls walkcompute() with the given number
int walkprompt(int number);
//Description: walkcompute() will take the number from walkprompt() and 
//va;; factorial() then display the number of steps 
//Pre: walkcompute needs to be positive
//Post:Display the factorial of a given number which is the number of steps
int walkcompute(int nummber);
//Description: anxietylevel() will prompt for a given anxiety number of the
//day must be a value between 1-10
//Pre: None
//Post: will store the given number of anxiety for a given day
int anxietylevel(int anx);
//Description: Will prompt for the current day of the week as 1-7
//Pre: None
//Post: Stores the current day of the week
int dayoftheweek(int d);
//Description: This function will calculate the number of minutes for a nap
//based on the formula given
//Pre: must have distanced walked and number of pills calculated
//Post: Will call displayminutes() with the value of minutes calculated
int minutes(int hrs, int dist, int pills);
//Description: will calculate the calories according to the given formula
//then calls displaycalories() in order to show the information for option 4
//Pre: must have option 1 calculated weight, height, and temp all have
//fixed range of input
//Post: will store the calories value and call displaycalories
float calorie(int weight, int height, float temp);
//Description: Will display the number of minutes on screen
//Pre: must have number of minutes updated from its original value
//Post:shows the calculated number of minutes for a nap
void displayminutes(int m);
//Description: will display the number of pills calculated from the formula to 
//the screen
//Pre: anxiety and day must be updated from their original values
//Post: display the number of pills to be taken on a particular day
void displaypills(int p);
//Description: Will display the number of calories on screen
//Pre:temp can be negative but cannot be 0. Must have option 1 calculated first
//Post: Will display the calculated number of pills on screen for option 2
void displaycalorie(int x);
//Description: function to input the number of hours slept the previous night
//Pre: the value given must be between 1-24hrs
//Post: will store the number of hours in a variable for later use
int hourslept(int h);
//Description: Function in order to exit the main funtion when option 5 
//is selected
//Pre: None
//Post: Exits the program
int exitfunction();

                    /****Declarations****/
//control variables
int h;
bool T=true;

//The following variables are static in order to retain their value 
//after a function call as their updated values will be needed for 
//proceeding calculations.
//I have initialized some of them to -1 because some of 
//them can take the value 0 as meaningful input
static short number=-1;
static int anxiety=-1;
static int pills=-1;
static int minute;
static int hours=-1;
static int day=-1;
static int weight=-1;
static int height=-1;
static float temp=-130.0; //temp can be float
static float calories=-1.0; //calculated calories can be float
static int number1=-1;


                    /****Functions and calculations****/


//Simple function to calculate the factorial of a given number
int factorial(int number)
{
        return (number==1 || number==0) ? 1 : factorial(number-1)*number;
}




//computes steps as the factorial of an input number that is cleansed to be
//0 or more steps
int walkcompute(int number)
{
 while(true){
   if (number>-1){
        number1= factorial(number);
        cout<<"\nYour total number of steps for the day is: "
        <<number1<<" steps\n"<<endl;
        break;
    } else if (number < 1)
    { 
        cout<<"\nPlease enter a positive number for your daily walk\n";
        cin >> number;
    }
   }//while
return number;
}


//Only the prompt asking for the number of legs for daily walk.
//this calls walkcompute which calls factorial
int walkprompt()
{
        cout<<"Please enter the number of legs for your daily walk: ";    
        cin >> number;
        walkcompute(number);

return number;
}


//Simple functions for the greeting message
void greetings()
{
   cout<<"\tWelcome to the Health-o-Matic!"<<"\n"
   <<"Please input one of the following for your daily Health Management\n"
   <<endl;
return;
}



//The menu which takes the input for a daily activity and returns it to main
//for the switch statement which will handle this menu's input cleansing
int menu()
{
   cout<<"Health-o-Matic Options"<<endl;
   cout<<"----------------------"<<endl;
   cout<<"1. Taking a Walk!"<<endl;
   cout<<"2. Your Medications"<<endl;
   cout<<"3. Nap Time!!"<<endl;
   cout<<"4. Caloric Intake"<<endl;
   cout<<"5. Quit\n"<<endl;
   cout<<"Please select one of the options above: ";
}



//Function to prompt for anxiety level and store it for later use
//the anxiety level is cleansed for the range 1-10
int anxietylevel(int anx){
    int test = -1;
    cout<<"\nPlease enter your current axiety level between 1-10: ";
                cin >> test; 
 while(true){
   if (test>0&&test<11){
        anxiety=test;
            //cout<<"\n\n\nanxiety is"<<anxiety<<"\n\n\n";
         break;      

    } else if (test > 10 || test < 1)
    {   cout<<"\nYou entered an invalid input.\n";
        cout<<"\nPlease enter your current axiety level between 1-10: ";
        cin >> test;
    }//else
  }//while
 dayoftheweek(day);

return anxiety;
}


//Function to prompt for day of the week and store it for later use
//the day is cleansed for the range 1-7
int dayoftheweek(int d){
    int test = -1;
    cout<<"\nPlease enter the day of the week as 1-7: ";
    cin >> test; 
 while(true){
   if (test>0&&test<8){
        day=test;
        //cout<<"\n\n\nday is"<<day<<"\n\n\n";
        break;
    } else if (test > 7 || test < 0)
    {   cout<<"\nYou entered an invalid input.\n";
        cout<<"\nPlease enter the day of the week as 1-7: ";
        cin >> test;
    }//else
 }//while
 pillsnumber(h);
return day;
}



//Funciton to calculate the number of daily pills to be taken which uses the
//values stored from anxiety and day. If the pills is negative, it will make
//it zero. The pills value will also be stored for later use
int pillsnumber(int p)
{
    pills =(anxiety-day);//Given formula
    if(pills<1){ pills = 0;//If negative make it zero
    } else if(pills>0){ pills= pills;
    }
    displaypills(pills);
return pills;
}



//Simple function to display the number of pills to be taken to the screen
void displaypills(int p)
{
    cout<<"\nThe number of pills to be taken today are: "
    <<pills<<" pills\n"<<endl;
return;
}


//Function to get the number of hours slept the night before
//this is input cleansed to be between 0-24 hours
//This function will call minutes(); function so it can calculate the number
//of minutes to sleep
//This function is wrapped in an if-else in order to make sure the input
//values of pills and distance walked are updated 
//(Option 1 and option 2 need to done first)
int hourslept(int h){
    if(pills==-1||number1==-1){//if they haven't been calculated give error
        cout<<"\n\nDaily number of pills (option 2) and/or daily walk"
        <<" distance (option 1) need to be calculated first.\n\n";
        return pills;
    } else //if the pills and distance walked have been updated then get hours
    {
        int test = -1;
        cout<<"\nPlease enter the number of hours"
        <<" slept last night between 0-24: ";
        cin >> test; 
        while(true){
            if (test>-1&&test<25){
                hours=test;
                //  cout<<"\n\n\nhours is "<<hours<<"\n\n\n";
                break;
             } else if (test > 24 || test < 0)
             { 
                    cout<<"\nYou entered an invalid input.\n";
                    cout<<"\nPlease enter the number"
                    <<" of hours slept last night between 0-24: ";
                    cin >> test;
             }//else
        }//while
        minutes(h, h, h);//After done getting hours call minutes() in order to
                        //to continue and get the nap time for option 3
    }
return hours;
}



//Simple exit function when option 5 is given
int exitfunction()
{
    exit(0);
return 0;
}



//Function to calculate the number of minutes to sleep in nap time based
//on the given formula. If the number of pills is 0 change it to one to 
//avoide dividing by zero
//this will call displayminutes() in order to show the result of option 3
int minutes(int hrs, int dist, int pil)
{
    if (pills!=0){pills=pills;}else{pills=1;}
        minute = (hours+((number1/pills)));
         displayminutes(minute);
return minute;
}



//Simple function to display the number of minutes to sleep to the screen
void displayminutes(int m)
{

    cout<<"\nThe total number of minutes for today's nap are: "
    <<minute<<" minutes\n"<<endl;;
return;
}



//Function to calculate the number of calories to be taken
//This is wrapped in an if-else in order to make sure the daily walk distance
//has been updated from its original value (option 1 has to be done first)
//Since weight, height, temp are within this function invoking option 4
//means the rest of necassry variables will be calculated as option 4 
//is selected
float calorie(int w, int h, float t)
{
    if(number1==-1){//making sure daily walk has been updated else give error
        cout<<"\n\nDaily walk"
        <<" distance need (option 1) to be calculated first.\n\n";
        return number1;
    }
    else//if it has been updated then proceed to input cleanse the weight 
        //between 0-800lbs and store weight for later use
    {
        int test1 = -1;
        cout<<"\nPlease enter your weight between 1-800 lbs: ";
        cin >> test1; 
 while(true) {
   if (test1>0&&test1<801){
        weight=test1;
        //    cout<<"\n\n\nweight is "<<weight<<"\n\n\n";
        break;
   } else if (test1 > 1 || test1 < 800)
   {
         cout<<"\nYou entered an invalid input.\n";
         cout<<"\nPlease enter your weight between 1-800 lbs: ";
         cin >> test1;
   }//else
 }//while

//input cleanse height between 0-100 inches and store value
int test2= -1;
    cout<<"\nPlease enter your height between 1-100 inches: ";
                cin >> test2; 
 while(true){
   if (test2>0&&test2<101){
         height=test2;
         //   cout<<"\n\n\nheight is "<<height<<"\n\n\n";
         break;
    } else if (test2 < 1 || test2 > 100)
    {
         cout<<"\nYou entered an invalid input.\n";
         cout<<"\nPlease enter your height between 1-100 inches: ";
         cin >> test2;
    }//else
 }//while

//input cleanse temp between -128 and 135 F and store it for later use
int test3= -1;
    cout<<"\nPlease enter your room temperature between"
    <<" -128 to 135 Fahrenheit: ";
    cin>>test3; 
    while(true){
        if (test3>-128&&test3<136){
            temp=test3;
            //cout<<"\n\n\nTemp is "<<temp<<"\n\n\n";
            break;
        } 
        else if (test3 < -128 || test3 > 136)
       { 
            cout<<"\nYou entered an invalid input.\n";
            cout<<"\nPlease enter your room temperature"
            <<" between -128 to 135 Fahrenheit: ";
            cin >> test3;
       }//else
   }//while


//Calculating calories within this function according to the given formula
//if temp is 0 F (which is possible), change it to 1 in order to avoid
//dividing by 0 then store the value of calories for later use
   if(temp==0){ temp = 1;}
   else if(temp!=0){ temp=temp;}
   calories = ((6*weight)+(2*height)+(1/temp)+(number1));
//cout<<"the calories are"<<calories<<endl;

} 
//call the displaycalorie() function in order for option 4 to give
//meaningful output
    displaycalorie(calories);

return calories;
}//cal




//Simple function to display the number of caloric intake to the screen
//after option 4 is selected
void displaycalorie(int x)
{
    cout<<"\nThe total number of calories for today are: "
    <<calories<<" calories\n"<<endl;
return;
}




                    /****main****/
//main function will initally call greetings() function in order to show
//greeting message to the screen then will continue to prompt the 
//menu function for future input options until option 5 quit is given
//main function will also input cleanse for switch statement
int main() 
{
char value;
    greetings();

while (T){
menu();
cin>>value;
    if(value=='1'||value=='2'||value=='3'||value=='4'
        ||value=='5')
    {
        switch(value){
            case '1': {walkprompt(); T=true; break;}
            case '2': {anxietylevel(h); T=true; break;}
            case '3': {hourslept(h); T=true; break;}
            case '4': {calorie(h, h, temp);T=true;break;}
            case '5': {exitfunction(); T=false; ;break;}
           default: {  T=true;cout<<"\nYou entered an invalid input.\n\n";} 
        }
        }else if(value=='.'){cin>>value;
        } else { cout<<"\nYou have entered an invalid input.\n\n"; 
            T=true;break;
        }   
    }
return 0;
}

