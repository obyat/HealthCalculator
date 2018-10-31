// Abdelrahman Obyat


#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

#include "hw6_functions.h"
//ARRAYS AND STRUCTS

//Array of sayings 
string Greetings[14] = 
{
"Whazzup?",
"Duuude, totally love the horse head and human body combo!\"",
"Looking for a card (shark)?", 
"Are you someone famous?", 
"You look fishy to me; or are you horsing around?",
"Don't trust the salmon!!!",
"Here's some advice: the shark wants you to be his chum!",
"Better take some paper towels if you visit the blobfish",
"Hey man, got any sea-weed?",
"Let me give you my card...my phone number is on the back",
"I'd gladly pay Tuesday for a lobster roll today.",
"Don't be so crabby!",
"Just keep swimming, swimmin, swimming, ...",
"You just keep sinking, sinking, sinking,..."
};
newperson creatures[14] = {
{"Wanda Walrus", 2, 6},
{"Stanley Sardine", 3, 1},
{"Sylvia Seahorse", 4, 2},
{"Janie Jellyfish", 1, 10},
{"Doris Dolphin", 8, 4},
{"Bob Blobfish", 1, 5},
{"Sammy Shark", 8, 4},
{"Walter Whale", 6, 2},
{"Stevie Salmon", 2, 3},
{"Sheila Shellfish", 1, 3},
{"Daniel Octopus", 3, 7},
{"Mark Herrings", 9, 5},
{"Bernie Tuna", 3, 5}, 
{"Oscar Tilppia", 5, 3}
};

string locatedcreatures[14]={""};
string differentcreatures[14]={""};
vistedperson vistedcreatures[14]={};//"0", 0, 0};


int rval(){
srand(37);
//cout<<"RAND VALUES"<<endl;

for(int i=1;i<=150;i++){
rvalue=rand()%15;
//cout<<"rvalue is "<<rvalue<<endl;
}

//cout<<"K is "<<k<<endl;

return rvalue;
}

bool compareTwo(vistedperson a, vistedperson b) 
{ 


	if (a.name != b.name) 
			return b.name > a.name; 


} 

void computeRanks(vistedperson vistedcreatures[], int n) 
{ 

	for (int i=0; i<n; i++) 
		vistedcreatures[i].name = vistedcreatures[i].name; 

	sort(vistedcreatures, vistedcreatures+14, compareTwo); 

} 
//Simple functions for the greeting message
void greetings()
{
   cout<<"\tWelcome to Atlantis!"<<"\n"
   <<"Your vacation will end when you have visted 14 different creatures or\n"
    <<"collected 6 stackable cards!\n"
   <<endl;
return;
}

void leaving()
{
cout<<"Reason for leaving Atlantis:"<<endl;
cout<<"\nDifferent creatures visited"<<endl;
int rvalue3;

for (int i=0;i<14;i++){
rvalue3=rand()%14;
cout<<differentcreatures[i]<< " \tsays\t "<<Greetings[rvalue3]<<endl;  } 


//sorts vistited creatures array
//computeRanks(vistedcreatures, 14); 
cout<<"\nStackable cards collected"<<endl;
for (int i=0;i<14;i++){
cout<<vistedcreatures[i].name<<", "<<vistedcreatures[i].l<<" x "
<<vistedcreatures[i].w<<endl;  } 

cout<<"\nThanks for visiting Atlantis!"<<endl;
return;
}

void visitcreatures(){

indd=0;
for(int i=0;i<=149;i++){


rvalue2=rand()%14;

person=creatures[rvalue2].name;
//cout<<person<<endl;
//cout<<"index is "<< indd<<endl;
for (int j=0;j<13;j++){
if(indd<13){
if(differentcreatures[j]!=creatures[rvalue2].name){
    differentcreatures[indd]=person;//creatures[Random].name;
}

}}indd++;

}


return;
}
void collectcards(){


//making an array to store all random values 150 of them
int arr[150]={0};
for(int i=0;i<=149;i++){
rvalue=rand()%15;
arr[i]=rvalue;
}
FIRSTrvalue=arr[0];


//Setting first installation of the array
vistedcreatures[ind].name=creatures[FIRSTrvalue].name;
vistedcreatures[ind].l=creatures[FIRSTrvalue].l;
vistedcreatures[ind].w=creatures[FIRSTrvalue].w;

ind=0;
for (int i=0;i<=13;i++){
rvalue=arr[i];
//cout<<"rvalue is "<<rvalue<<endl;
differentcreatures[i]=creatures[rvalue].name;
int previous=rvalue;
if((((creatures[rvalue].l > vistedcreatures[i-1].l) && 
    (creatures[rvalue].w > vistedcreatures[i-1].w))
 ||
    ((creatures[rvalue].l > vistedcreatures[i-1].l) && 
    (creatures[rvalue].w == vistedcreatures[i-1].w))
 ||
    ((creatures[rvalue].w > vistedcreatures[i-1].w) &&
     (creatures[rvalue].l == vistedcreatures[i-1].l)))){ 

for (int j=0; j<=13 ;j++){


    if((creatures[rvalue].l!=vistedcreatures[i].l) || 
    (creatures[rvalue].w!=vistedcreatures[i].w)){


vistedcreatures[i].name=creatures[rvalue].name;
vistedcreatures[i].l=creatures[rvalue].l;
vistedcreatures[i].w=creatures[rvalue].w;
}}}}}

