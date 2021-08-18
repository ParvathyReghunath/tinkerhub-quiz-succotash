#include<stdio.h>
#include<time.h>
void main()
{
    int i;
    time_t t;
	 time(&t);
 printf("\n\t\t________________________________________");

     printf("\n\t\t\t        WELCOME ");
     printf("\n\t\t\t          TO ");
     printf("\n\t\t\t       QUIZ GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t    TEST YOUR GK..SET YOUR HIGHSCORES!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t -> Press S to start the game");
     printf("\n\t\t -> Press V to view the highest score  ");
     printf("\n\t\t -> Press R to reset score");
     printf("\n\t\t -> Press H for help            ");
     printf("\n\t\t -> Press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     for(i=0;i<80;i++)
		printf("=");
	    printf("\nCurrent date and time : %s",ctime(&t));
	    for(i=0;i<80;i++)
		printf("=");
}