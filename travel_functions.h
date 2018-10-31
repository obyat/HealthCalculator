// Abdelrahman Obyat
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

//visited creatures struct
struct vistedperson
{
string name;
int l;
int w;
    
    };
//creatures struct
struct newperson
{
string name;
int l;
int w;
    
    };


int rval();
//Description: the greetings() function will output a message to the screen
//greeting the user.
//Pre: None
//Post: Message output to the screen.
void greetings();
//Description: the leaving() function will output a message to the screen
//stating that is he leaving with corresponding output
//Pre: cards and creatures must be meat
//Post: Message output to the screen with required information.
void leaving();
//Description: this function will make sure cards collected meet the 
//Dimension requirements
//Pre: none.
//Post: collects cards in an array stored for later display
void collectcards();
//Description: this function will visit  different creatures at random with
// their randomly generated sayings
//Pre: none
//Post: will store different creatures visited with their sayings
//variables
void visitcreatures();
static string person;
static int k;
static long int rvalue;
static long int rvalue2;
static int Random;
static int ind;
static int indd;
static int FIRSTrvalue;
static int trueRand;




