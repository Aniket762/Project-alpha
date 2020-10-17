//Guess the no.(Guessing game)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>//for random no. generator seed
 int main(){
 	int n=0;
 	int guess=0;
 	int no_OfGuess=5;
 	time_t t;
 	//Initialization of random no.
 	srand((unsigned)time(&t));
 	//get the random no.
 	n=rand()%21; //to ensure tht no. is between 0-20
 	printf("\n This is a guessing game.");
 	printf("I've a chosen a random no. between 0-20,that you've to guess.\n");
 	
 	for (no_OfGuess=5;no_OfGuess>0;--no_OfGuess)
 	{
 		printf("\n You've %d tr%s left.",no_OfGuess,no_OfGuess==1?"y":"ies");
 		printf("\nEnter a guess:");
 		scanf("%d",&guess);
 		
 		if(guess==n)
 		{
 			printf("\nCongratulations!You guessed it correct.\n");
 			return;
		 }
		 else if(guess<0||guess>20)//checking for invalid guess
		 {
		 	printf("I said the no. is between 0-20.\n");
		 }
		 else if(n>guess)
		 {
		 	printf("Sorry,%d is wrong.My no. is greater than that.\n",guess);
		 }
		 else if(n<guess)
		 {
		 	printf("Sorry,%d is wrong.My no. is lesser than that.\n",guess);
		 }
	 }
	 printf("You've had 5 tries and failed.The no. was %d.\n",n);
	 return 0; 
 }
