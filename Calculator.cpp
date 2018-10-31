// Abdelrahman Obyat
#include <iostream>
#include "Calculator.h"
#include <stdlib.h> //for exit(0) in unix
using namespace std;



                    /****main****/
//main function will initally call greetings() function in order to show
//greeting message to the screen then will continue to prompt the 
//menu function for future input options until option 6 quit is given
//main function will also input cleanse for switch statement
int main() 
{
char value;
    greetings();
while (true){
menu();
cin>>value;
    if(value=='1'||value=='2'||value=='3'||value=='4'
        ||value=='5' || value=='6')
    {
        switch(value){
            case '1': {walkprompt(); break;}
            case '2': {eprompt();; break;}
            case '3': {cos();; break;}
            case '4': {rootprompt();break;}
            case '5': {hyperbolicprompt();  break;}           
            case '6': {exitfunction(); ;break;}

           default: {  cout<<"\nYou entered an invalid input.\n\n";} 
        }
        } else if(value=='.'){cin>>value;
        } else {
           
        }   

    if(!(value=='1'||value=='2'||value=='3'||value=='4'
        ||value=='5' || value=='6'))
    {
            cout<<"\nYou have entered an invalid input.\n\n"; 
            
    }    

  }
return 0;
}

