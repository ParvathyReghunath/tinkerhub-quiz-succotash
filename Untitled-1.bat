#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
    {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
	 char select;
     char yourname[20];
     time_t t;
	 time(&t);
     mainhome:
    system("cls");
     printf("\n\t\t                                             \n\n");
     printf("\n\t\t\t          WELCOME ");
     printf("\n\t\t\t            TO ");
     printf("\n\t\t\t       AIRIA QUIZZIZ ");
     printf("\n\t\t                                              ");
     printf("\n\t\t ENHANCE YOUR KNOWLEDGE AND BE A MILLIONAIRE   ") ;
     printf("\n\t\t                                               ");
	 printf("\n\t\t================================================");
     printf("\n\t\t -> Press S to start the game");
     printf("\n\t\t -> Press V to view the highest score  ");
     printf("\n\t\t -> Press R to reset score");
     printf("\n\t\t -> Press H for help            ");
     printf("\n\t\t -> Press Q to quit             ");
	 printf("\n\t\t================================================\n\n");
	 printf("\n\t\t.................................................. ");
     printf("\n\t\t Current date and time : %s",ctime(&t));
	 printf("\t\t.................................................. ");  
     choice=toupper(getch());
     if (choice=='V')
	 {
	  show_record();
	  goto mainhome;
	 }
     else if (choice=='H')
	 {
	  help();getch();
	  goto mainhome;
	 }
	 else if (choice=='R')
	 {
	  reset_score();
	  getch();
	  goto mainhome;
	 }
	 else if (choice=='Q')
	  exit(1);
     else if (choice=='S')
     {
    system("cls");
      printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name:");
      gets(yourname);
    system("cls");
      printf("\n ------------------  WELCOME %s TO AIRIA QUIZZIZ --------------------------",strupr(yourname));
      printf("\n\n Here are some tips you might wanna know before playing:");
      printf("\n-------------------------------------------------------------------------");
      printf("\n >> There are 3 zones in this AIRIA QUIZZIZ ,WARMUP ZONE,SAFE ZONE & CHALLANGE ZONE");
      printf("\n >> In WARMUP ZONE you will be asked total 22 questions to check your");
      printf("\n    knowledge. You are eligible to reach safe zone only if you give atleast");
      printf("\n    9 right answers, otherwise you can't proceed further to the Safe Zone.");
	  printf("\n\t\t                                                                          ");
	  printf("\n >> In SAFE ZONE you are allowed to choose your interested topic from the "); 
      printf("\n    given 6 topics.You are eligible to reach the challenge zone only if you");
	  printf("\n    score above 35.This zone consist of total 15 questions where you score 3");
	  printf("\n    mark for each right answer and 1 mark deducted for each wrong answer.");
	  printf("\n\t\t\t\t\t\t                                                                     ");
      printf("\n >> Your game starts with CHALLANGE ZONE. In this zone you will be asked ");
      printf("\n    total 10 questions. Each right answer will be awarded $100,000!");
      printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
      printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
      printf("\n    right option.");
      printf("\n >> You will be asked questions continuously, till right answers are given");
      printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
      printf("\n\n\n Press Y  to start the game!\n");
      printf("\n Press any other key to return to the main menu");
      if (toupper(getch())=='Y')
	  {
	   goto home;
      }
	  else
	  {
       goto mainhome;
    system("cls");
      }

      home:
    system("cls");
       count=0;
       for(i=1;i<=22;i++)
       {
    system("cls");
        r1=i;
        switch(r1)
		{
		 case 1:
	 	 printf("\n\n The minimum age to quality for election to the Lok Sabha is?"); 
		 printf("\n\nA.25\t\tB.21\n\nC.18\t\tD.35");
		 if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
            }
		 else
		    {
		      printf("\n\nWrong!!! The correct answer is A.25");
		      getch();
		      break;
		    }

         case 2:
		 printf("\n\n\n A girl introduced a boy as the son of the daughter of the father of the her uncle.");
		 printf("\n     The boy is girl's___. ");
		 printf("\n\nA.brother\t\tB.Son\n\nC.Uncle\t\tD.Son-in-law");
		 if (toupper(getch())=='A')
			{ 
              printf("\n\nCorrect!!!");count++;
			  getch();
			  break;
            }
		 else
		    {printf("\n\nWrong!!! The correct answer is A.brother");
		     getch();
		     break;
            }

         case 3:
		 printf("\n\n\n Who is the father of mathematics");
		 printf("\n\nA.Aryabhatta\t\tB.Archimedes\n\nC.Phythagoras\t\tD.John Napier");
		 if (toupper(getch())=='B')
			{
             printf("\n\nCorrect!!!");count++;
			 getch();
			 break;
            }
		 else
		    {
             printf("\n\nWrong!!! The correct answer is B.Archemides");
		     getch();
		     break;
            }

         case 4:
		 printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
		 printf("\n\nA.Wayne Rooney\t\tB.Lucas Podolski\n\nC.Lionel Messi\t\tD.Christiano Ronaldo");
		 if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			 getch();
			 break;}
		 else
		    {printf("\n\nWrong!!! The correct answer is B.Lucas Podolski");
		     getch();
		     break;}

         case 5:
         printf("\n\n\nKnot is unit of ___.");
         printf("\n\nA.speed\t\tB.Distance\n\nC.Deapth\t\tD.Acceleration");
         if (toupper(getch())=='A')
            {printf("\n\nCorrect!!!");count++;
             getch();
             break;}
         else
		    {printf("\n\nWrong!!! The correct answer is A.Speed");
		     getch();
		     break;}
         case 6:
         printf("\n\n\nvalue of cos360?");
         printf("\n\nA.0\t\tB.not defined\n\nC.0.5\t\tD.1");
         if (toupper(getch())=='D')
            {printf("\n\nCorrect!!!");count++;
             getch();
             break;}
         else
		    {printf("\n\nWrong!!! The correct answer is D.1");
		     getch();
		     break;}
		 case 7:
         printf("\n\n\n For which malayalam film actor Indrans got awarded Best Actor in 2017?");
         printf("\n\nA.Take Off\t\tB.Aalorukkam\n\nC.Ee ma yau\t\tD.Ottamuri Velicham");
         if (toupper(getch())=='B')
            {printf("\n\nCorrect!!!");count++;
             getch();
             break;}
         else
		    {printf("\n\nWrong!!! The correct answer is B.Alorukkam");
		     getch();
		     break;}
		 case 8:
         printf("\n\n\nComputer's main circuit board is called___.");
         printf("\n\nA.Bluetooth Card\t\tB.Mother Board\n\nC.Hard Drive\t\tD.Monitor");
         if (toupper(getch())=='B')
            {printf("\n\nCorrect!!!");count++;
             getch();
             break;}
         else
		    {printf("\n\nWrong!!! The correct answer is B.Mother Board");
		     getch();
		     break;}
		 case 9:
         printf("\n\n\nNational Javelin Day");
         printf("\n\nA.August 7\t\tB.February 21\n\nC.November 11\t\tD.April 14");
         if (toupper(getch())=='A')
            {printf("\n\nCorrect!!!");count++;
             getch();
             break;}
         else
		    {printf("\n\nWrong!!! The correct answer is A.August 7");
		     getch();
		     break;}
		 case 10:
         printf("\n\n\nIndian Prime Minister who got piolet liscence?");
         printf("\n\nA.Manmohan Singh\t\tB.Narendra Modi\n\nC.Indhira Gandhi\t\tD.Rajeev Gandhi");
         if (toupper(getch())=='D')
            {printf("\n\nCorrect!!!");count++;
             getch();
             break;}
         else
		    {printf("\n\nWrong!!! The correct answer is D.Rajeev Gandhi");
		     getch();
		     break;}
		 case 11:
         printf("\n\n\nSaikhom Mirabai Chanu,women weighlifter is representing India in category");
		 printf("\nin___category at Tokyo Olympics 2020?");
         printf("\n\nA.49\t\tB.59\n\nC.55\t\tD.64");
         if (toupper(getch())=='A')
            {printf("\n\nCorrect!!!");count++;
             getch();
             break;}
         else
		    {printf("\n\nWrong!!! The correct answer is A.49");
		     getch();
		     break;}
		 case 12:
         printf("\n\n\n26,12,10,16,__?");
         printf("\n\nA.56\t\tB.50\n\nC.53\t\tD.52");
         if (toupper(getch())=='A')
            {printf("\n\nCorrect!!!");count++;
             getch();
             break;}
         else
		    {printf("\n\nWrong!!! The correct answer is A.56");
		     getch();
		     break;}
		 case 13:
         printf("\n\n\nFungi are plants that lack?");
         printf("\n\nA.Oxygen\t\tB.Carbon dioxide\n\nC.Chlorophyll\t\tD.None of these");
         if (toupper(getch())=='C')
            {printf("\n\nCorrect!!!");count++;
             getch();
             break;}
         else
		    {printf("\n\nWrong!!! The correct answer is C.Chlorophyll");
		     getch();
		     break;}
		 case 14:
         printf("\n\n\nDalton's name is associated with which of the following?");
         printf("\n\nA.Electrone\t\tB.Proton\n\nC.Atom\t\tD.Neutrone");
         if (toupper(getch())=='C')
            {printf("\n\nCorrect!!!");count++;
             getch();
             break;}
         else
		    {printf("\n\nWrong!!! The correct answer is C.Atom");
		     getch();
		     break;}
		 case 15:
         printf("\n\n\nWhich of the following is not a classical dance of India?");
         printf("\n\nA.Kathak\t\tB.Sattriya\n\nC.Manipuri\t\tD.Bhangra");
         if (toupper(getch())=='D')
            {printf("\n\nCorrect!!!");count++;
             getch();
             break;}
         else
		    {printf("\n\nWrong!!! The correct answer is D.Bhangra");
		     getch();
		     break;}
		 case 16:
         printf("\n\n\nstudy of hands?");
         printf("\n\nA.Seismology\t\tB.chirology\n\nC.Hepatology\t\tD.cardiology");
         if (toupper(getch())=='B')
            {printf("\n\nCorrect!!!");count++;
             getch();
             break;}
         else
		    {printf("\n\nWrong!!! The correct answer is B.chirology");
		     getch();
		     break;}
		 case 17:
         printf("\n\n\nEzra Cup related to which of the following sports?");
         printf("\n\nA.Tennis\t\tB.Lawn Tennis\n\nC.Polo\t\tD.Cricket");
         if (toupper(getch())=='C')
            {printf("\n\nCorrect!!!");count++;
             getch();
             break;}
         else
		    {printf("\n\nWrong!!! The correct answer is C.Polo");
		     getch();
		     break;}
		 case 18:
         printf("\n\n\nWhich of the following Upanishads is written in prose?");
         printf("\n\nA.Isa\t\tB.Brihadaranyaka\n\nC.Svetasvatara\t\tD.Katha");
         if (toupper(getch())=='B')
            {printf("\n\nCorrect!!!");count++;
             getch();
             break;}
         else
		    {printf("\n\nWrong!!! The correct answer is B.Brihadaranyaka");
		     getch();
		     break;}
		 case 19:
         printf("\n\n\nWhich among the following is a Noble Gas?");
         printf("\n\nA.Nitrogen\t\tB.Hydrogen\n\nC.Oxygen\t\tD.Helium");
         if (toupper(getch())=='D')
            {printf("\n\nCorrect!!!");count++;
             getch();
             break;}
         else
		    {printf("\n\nWrong!!! The correct answer is D.Helium");
		     getch();
		     break;}
		 case 20:
         printf("\n\n\nWhich of the following is an air-borne disease?");
         printf("\n\nA.Measles\t\tB.Typhoid\n\nC.Pink Eye\t\tD.None of these");
         if (toupper(getch())=='A')
            {printf("\n\nCorrect!!!");count++;
             getch();
             break;}
         else
		    {printf("\n\nWrong!!! The correct answer is A.Measles");
		     getch();
		     break;}
	 	 case 21:
         printf("\n\n\nWho is the singer of 'malare' in the movie premam");
         printf("\n\nA.Vineeth Sreenivasan\t\tB.K.J Yeshudas\n\nC.Vijay Yeshudas\t\tD.K.S Harisankar");
         if (toupper(getch())=='C')
            {printf("\n\nCorrect!!!");count++;
             getch();
             break;}
         else
		    {printf("\n\nWrong!!! The correct answer is C.Vijay Yeshudas");
		     getch();
		     break;}
         case 22:
		 printf("\n\n\nWhat is the group of frogs known as?");
		 printf("\n\nA.A traffic\t\tB.A toddler\n\nC.A police\t\tD.An Army");
		 if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");count++;
			 getch();
			 break;}
		 else
		    {printf("\n\nWrong!!! The correct answer is D.An Army");
		     getch();
		     break;}
        }
	  }

	  if(count>=9)
	  {goto test;}
	  else
	  {
	system("cls");
	   printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	   getch();
	   goto mainhome;
	  }
      test:
    system("cls");
       printf("\n\n\t** CONGRATULATION %s you are eligible to play the Safe Zone **",strupr(yourname));
       printf("\n\n\n\n\t!Press any key to move forward!");
       if(toupper(getch())=='p')
	   {goto zone;}
      zone:
    system("cls");
       printf("which of the following,did you want to opt");
	   printf("\n\t\t -> Press C for Current affairs");
       printf("\n\t\t -> Press O for sports");
       printf("\n\t\t -> Press F for Film");
       printf("\n\t\t -> Press L for Landmark");
       printf("\n\t\t -> Press P for politics");
	   printf("\n\t\t -> Press R for Reasoning");
     }