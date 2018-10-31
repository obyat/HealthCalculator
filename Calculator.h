// Abdelrahman Obyat

#include <iostream>
#include <stdlib.h> //for exit(0) in unix
using namespace std;


                    /****Function Prototypes****/
int main();
//Description: the greetings() function will output a message to the screen
//greeting the user.
//Pre: None
//Post: Message output to the screen.
void greetings();
//Description: The menu() function will display a menu to the user and
//store the value for main to select a corresponding function
//Pre: only takes values 1-6
//Post: stores are returns value in order to select a corresponding 
//function
int menu();
//Description: Function to calculate the factorial of a given number
//Pre: must be given an int between 0-10
//Post: returns the factorial of a given number
int factorial(int number);
//Description: walkprompt() is the prompt for the factoiral function
//It will ask for an int to find its factorial. 
//Pre: Int must be betwween 0-10
//Post: calls facrotial() function with given input
int walkprompt();
//Description: walkcompute() will take the number from walkprompt() and 
//call factorial() then display the number of steps 
//Pre: walkcompute needs to be positive
//Post:Display the factorial of a given number which is the number of steps
int walkcompute(int nummber);
//Description: Function in order to exit the main funtion when option 6 
//is selected
//Pre: None
//Post: Exits the program and displays message
int exitfunction();
//Description: Poww() function takes an int and raises it to a given value
//Pre: takes two values: int and its power
//Post: returns the power of that value
long double Poww(double i, int exp);
//Description: functin to calculate e raised to an int (e^x)
//Pre: takes one value which will raise e to
//Post: returns the value of e raised to that number
long double efunction(int number);
//Description: will take input for a value for x and calculate sinh(x)
//Pre: must have a given input
//Post: calls hyperbolicdisplay() in order to show the output to the user
long double hyperbolic(long double enumber);
//Description: eprompt() is a prompt for the user to input a value for e^x
//Pre: must have a given value to calculate
//Post calls edisplay() in order to show the calculated value to the user
int eprompt();
//Description: eprompt() will prompt the user for a value for the efunction()
//will store a value in x for e^x
//Pre: none.
//Post stores value in e and calls efunction to compute e^x
void edisplay();
//Description: Will display the calculated value for e^x for the user
//Pre: must be called after efunciton calculated a value
//Post displays e^x value to the user
int rootprompt();
//Description: prompt for sinh(x) will ask for a value to store in x for sinh(x)
//Pre: none
//Post will call hyperbolic() function to compute sinh(x)
int hyperbolicprompt();
//Description: will display the value of sinh(x) after it has been calculated
//Pre: sinh(x) must be calculated before this is called
//Post value of sinh(x) will be displayed to the user
void hyperbolicdisplay();
//Description: cosdisplay() will display the value of cos(x) to the user
//Pre: the value of cos(x) input is given will then display the value of cos(x)
//must be within range 1-5
//Post value of (x) will be displayed for the user
void cosdisplay();
//Description: will display a prompted nth root of a given value of x
//Pre: nth root for x must already be calculated
//Post nth root of x will be displayed with appropriate suffix
void rootdisplay();
//Description: will calculate the prompted nth root of a given value of x
//Pre: accepted two ints
//Post calls rootdsiplay in order to give the value to the user with 
//appropriate suffix
long double nthroot(long double number, long double number2);
//Description: will calculate the value of a given x in
// cos(x) and call cosdisplay()
//Pre: only accepts range 1-5
//Post calls cosdisplay() in order to show the user the value of cos(x)
long double cos();




                    /****Declarations****/
//control variables
//int h;
//int q;
//bool T=true;

//The following variables are static in order to retain their value 
//after a function call as their updated values will be needed for 
//proceeding calculations.
//I have initialized some of them to -1 because some of 
//them can take the value 0 as meaningful input
//the rest are long double in order to retain as many significant figures in
//their decimals as possible
static short number=-1;
static int factorialN=-1;
static int number1=-1;
static long double hyperbolicvalue=-1;
static int ex=-1;
static int cosx=-1;
static long double cosinex= 0.00000000000;
static int negativex=-1;
static int Range=8;
static long double answer=0.000000000;
static long double root;
static long double x;
static long double nth;
static long double rootnumber=0.00000000;
static long double rootpower=0.00000;
static long double rootdigit;



