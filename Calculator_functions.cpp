// Abdelrahman Obyat
#include "Calculator.h"

//Simple function to calculate the factorial of a given number
int factorial(int number)
{
        return (number==1 || number==0) ? 1 : factorial(number-1)*number;
}

//Power function will return an int or double. Can raise numbers and decimals
//to int powers
  long double Poww(double i, int exp){
//base case. If reaches 0 then returns 1
        if(exp<=0) return 1;
            return i*Poww(i, exp-1);
            cout<<i*Poww(i, exp-1)<<endl;
  }


//function to calculate e^x using the given formula
long double efunction(int number)
{
    long double answerp1=0.000000000;
    long double answerp2=0.0;
   
    //since the first two terms do not need a loop just add them first
    answerp2+=1+ex;
    //Given formula using loop for necessary range
    for(int n=2;n<=Range;n++){
        answerp1+=((Poww(ex, n))/(factorial(n)));
    }

//Add part1 and part2
answer=answerp1+answerp2;
//Call display function in order to show the user
edisplay();
return answer=answerp1+answerp2;
}


//function to calculate the the cos(x) using the given formula within the
//range 1-5. However the function itself can handle values 1-8. But in its
//current form will show error message unless x is in range 1-5
long double cos()
{

    int test = -1;
    int Rangecosx = -1;
    cout<<"\nPlease enter a positive integer to compute its cos(x): ";
    cin>>cosx;

    cout<<"\nPlease enter the number of terms to compute the approximation: ";
    cin >> test; 
 while(true){
    //As requested will only accept values between 1-5
   if (test>0&&test<6){
        Rangecosx=test;//if value for terms/range given is between 1-5
                      //then will calculate the value of cos(x) for the 
                     //requested range 

        if(Rangecosx==1){
        cosinex=1;
        }
        if(Rangecosx==2){
        cosinex=(1-(((Poww(cosx, 2)))/(factorial(2))));
        }
        if(Rangecosx==3){
        cosinex=((1-(((Poww(cosx, 2)))/(factorial(2))))+(((Poww(cosx, 4)))
        /(factorial(4))));
        }
        if(Rangecosx==4){
        cosinex=(((1-(((Poww(cosx, 2)))/(factorial(2))))+(((Poww(cosx, 4)))
        /(factorial(4))))-(((Poww(cosx, 6)))/(factorial(6))));
        }
        if(Rangecosx==5){
        cosinex=(((1-(((Poww(cosx, 2)))/(factorial(2))))+(((Poww(cosx, 4)))
        /(factorial(4))))-(((Poww(cosx, 6)))/(factorial(6)))+(((Poww(cosx, 8)))
        /(factorial(8))));
        }
        if(Rangecosx==6){
        cosinex=(((1-(((Poww(cosx, 2)))/(factorial(2))))+(((Poww(cosx, 4)))
        /(factorial(4))))-(((Poww(cosx, 6)))/(factorial(6)))+(((Poww(cosx, 8)))
        /(factorial(8)))-(((Poww(cosx, 10)))/(factorial(10))));
        }
        if(Rangecosx==7){
        cosinex=(((1-(((Poww(cosx, 2)))/(factorial(2))))+(((Poww(cosx, 4)))
        /(factorial(4))))-(((Poww(cosx, 6)))/(factorial(6)))+(((Poww(cosx, 8)))
        /(factorial(8)))-(((Poww(cosx, 10)))/(factorial(10)))
        +(((Poww(cosx, 12)))/(factorial(12))));
        }
        if(Rangecosx==8){
        cosinex=(((1-(((Poww(cosx, 2)))/(factorial(2))))+(((Poww(cosx, 4)))
        /(factorial(4))))-(((Poww(cosx, 6)))/(factorial(6)))+(((Poww(cosx, 8)))
        /(factorial(8)))-(((Poww(cosx, 10)))
        /(factorial(10)))+(((Poww(cosx, 12)))
        /(factorial(12)))-(((Poww(cosx, 14)))/(factorial(14))));
        }
        
       //calls disply function in order to display to the screen the output
        cosdisplay();
        break;
    //if the value for the numer of terms to be calculated is not within range
   //1-5 will show error message
    } else if (test > 5 || test < 1)
    {   cout<<"\nYou entered an invalid input.\n";
        cout<<"\nPlease enter a Range between 1-8 to"<<
        " compute the approximation of cosx: ";
        cin >> test;
    }//else
 }//while
}


//function to calculate a given nth root for a given value x using 
//newton's method
long double nthroot(long double number, long double number2){

    root=nth;
    //as requested to do 100 iterations
    const int max_term=100;
    long double Xn = x;

    for(int i=1;i<=max_term;i++)
    {
        //[(kth root -1) *(previous answer)] + 
        //[input number divided by previous answer^(root-1))]
        //everything above divided by kth root
        Xn = ((((root-1)*(Xn))+(x/(Poww(Xn, (root-1)))))/(root));
    }

    rootdigit=Xn;
    //calls rootdsiplay() in order to show the value to the user
    rootdisplay();

return Xn;
}



//function to display the vaules to the user with appropriate suffix
void rootdisplay()
{
    if(nth==1){cout<<"\nThe "<<nth<<"st root of "<<x<<" is: "<<
        rootdigit<<"\n\n"<<endl;}
    else if(nth==2){cout<<"\nThe "<<
        nth<<"nd root of "<<x<<" is: "<<rootdigit<<"\n\n"<<endl;}
    else if(nth==3){cout<<"\nThe "<<
        nth<<"rd root of "<<x<<" is: "<<rootdigit<<"\n\n"<<endl;}
    else if(nth>3){
        cout<<"\nThe "<<nth<<"th root of "<<x<<" is: "
        <<rootdigit<<"\n\n"<<endl;
    }
}



//function to display the vaules to the user
void cosdisplay()
{
        cout<<"\nThe value of Cos("<<cosx<<") is: "<<cosinex<<"\n\n"<<endl;
}



//function to display the vaules to the user
void edisplay()
{
    cout<<"\n\nThe value of e^"<<ex<<" is: "<<answer<<"\n\n"<<endl;
}



//function to display the vaules to the user
void hyperbolicdisplay()
{
    cout<<"\n\nThe hyperbolic value is : "
    << hyperbolicvalue<<"\n\n"<<endl;

}


//function to use the previous e^x function and calculate sinh(x) using the
//given formula
long double hyperbolic(long double enumber) 
{

    hyperbolicvalue = ((((efunction(ex)))-(efunction(ex=-ex)))/2);
    hyperbolicdisplay();
}



//computes the factorial of an input number that is cleansed to be
//between 0 and 10
int walkcompute(int number)
{
    //test value for cin in order to cleans the input and only accept
    //values between 0-10
    int test = -1;
    cout<<"\nPlease enter a number between 0-10 to compute its factorial: ";
    cin >> test; 
 while(true){
   if (test>-1&&test<11){
        number=test;//if input is correct will call factorial with that input
        number1= factorial(number);
        cout<<"\n the factorial of "<<number<<" is : "<<
        number1<<"\n"<<endl;
        break;
   //if value given is not within range will show error message
    } else if (test > 10 || test < 0)
    {   cout<<"\nYou entered an invalid input.\n";
    cout<<"\nPlease enter a number between 0-10 to compute its factorial: ";
        cin >> test;
    }//else
 }//while

return number1;
}


//prompt for inputting x for e^x and possibly changed Range/terms to be 
//computed
int eprompt()
{
    cout<<"enter x for e^x: ";
    cin>>ex;




         //In order to change the number of terms for this calculation
        //As requested the default terms/range is 8 the code to change it
        //is given here

//cout<<"enter the number of terms/Range to be used in this calculations: ";
//cin>>Range;


//calls efunction with the given value for x in e^x and possibly necessary 
//Range/terms for computation
        efunction(ex);


return number;
}



//Prompt for input a value for x in sinh(x)
int hyperbolicprompt()
{

    cout<<"Enter a number to find its hyperbolic sine value: ";
    cin>>ex;
    //calls hyperbolic function with given value
    hyperbolic(ex);

return number;
}



//Prompt for input a number and its root in order to find the nth root 
//of a number
int rootprompt()
{


    cout<<"\nPlease enter x to find its root: ";
    cin>>x;

    cout
    <<"\nPlease enter the nth root (For example n=2 is the squared root): ";
    cin>>nth;
//calls nthroot function with given values
    nthroot(x, nth);
}




//Only the prompt asking for the number of legs for daily walk.
//this calls walkcompute which calls factorial
int walkprompt()
{
      //  cout<<"Please enter the number of legs for your daily walk: ";    
        //cin >> number;
        walkcompute(number);

return number;
}




//Simple functions for the greeting message
void greetings()
{
   cout<<"\tWelcome to the Calc-o-Matic!"<<"\n"
   <<"Please input one of the following options to calculate its value\n"
   <<endl;
return;
}




//Simple exit function when option 6 is given and display a message
int exitfunction()
{
cout<<"\n\n\nThank you for using the Cal-o-Matic! Have a nice day!"<<endl;
    exit(0);
return 0;
}




//The menu which takes the input for a a calculator function and returns to main
//for the switch statement which will handle this menu's input cleansing
int menu()
{
   cout<<"Cal-o-Matic Options"<<endl;
   cout<<"----------------------"<<endl;
   cout<<"1. Factorial of x"<<endl;
   cout<<"2. Exponential of x"<<endl;
   cout<<"3. Cosine of x"<<endl;
   cout<<"4. Roots of X"<<endl;
   cout<<"5. Hyperbolic sine of x"<<endl;
   cout<<"6. Quit\n"<<endl;
   cout<<"Please select one of the options above: ";
}


