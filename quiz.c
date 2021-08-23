#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
     {
     int countr,r,r1,r3,r4,count,r5,counto,coun;
	 int i,n,countn,r2,county,counts,r6,counte,r7;
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
	printf("\n    given 6 topics.This zone consist of total 10 questions where you score 3");
	printf("\n    mark for each right answer and 1 mark deducted for each incorrect answer.");
	printf("\n    You are eligible to reach the challenge zone only if you score above 19 in this zone.");
	printf("\n\t\t\t\t\t\t                                                                     ");
    printf("\n >> Your game starts with CHALLANGE ZONE. In this zone you will be asked ");
    printf("\n    total 15 questions. Each right answer will be awarded $100,000!");
    printf("\n    By this way you can win upto more then ONE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
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
		printf("\n     The boy is girl's_____. ");
		printf("\n\nA.brother\t\tB.Son\n\nC.Uncle\t\tD.Son-in-law");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.brother");
		       getch();
		       break;}

        case 3:
		printf("\n\n\n Who is the father of mathematics");
		printf("\n\nA.Aryabhatta\t\tB.Archimedes\n\nC.Phythagoras\t\tD.John Napier");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Archemides");
		       getch();
		       break;}

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
        printf("\n\n\nKnot is unit of _________.");
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
        printf("\n\n\nComputer's main circuit board is called_____.");
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
		printf("\nin_____category at Tokyo Olympics 2020?");
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
		}}

	if(count>=9)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	printf("\n\t\t.................................................. ");
    printf("\n\t\t Current date and time : %s",ctime(&t));
	printf("\t\t.................................................. ");
	getch();
	goto mainhome;
	}
    test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Safe Zone ***",strupr(yourname));
     printf("\n\n\n\n\t!Press any key to move forward!");
     if(toupper(getch())=='p')
		{goto zone;}
    zone:
      system("cls");
      printf("Choose area of your interst!!!!");
	  printf("\n\t\t -> Press N for Nutrition");
      printf("\n\t\t -> Press O for sports");
      printf("\n\t\t -> Press F for Film");
      printf("\n\t\t -> Press L for Landmark");
      printf("\n\t\t -> Press I for India");
	  printf("\n\t\t -> Press R for Reasoning");
    select=toupper(getch());
	if (select=='N')
	{
		goto nutrition;getch();
	}
	else if (select=='O')
	{
		goto sports;getch();
	}
    else if (select=='F')
	{
		goto film;getch();
	}
	else if (select=='L')
	{
		goto landmark;getch();
	}
	else if (select=='I')
	{
		goto India;getch();
	}
	else if (select=='R') 
	{
		goto reasoning;getch();
	}
	  nutrition:
	  coun=0;
	  for(i=1;i<=10;i++)
	  {system("cls");
	   r7=i;
	   switch(r7)
	   {
        case 1:
		printf("\n\n\nAmylases in saliva begin the breakdown of carbohydrates into_____");
		printf("\n\nA.fatty acids\t\tB.polypeptides\n\nC.amino acids\t\tD.simple sugars");
		if (toupper(getch())=='D')
		{printf("\n\nCorrect!!!");
		 coun=coun+3;
		 getch();
		 break;getch();}
		else
		{printf("\n\nWrong!!! The correct answer is D.simple sugars");getch();
		 coun--;
		 break;}
		case 2:
		printf("\n\n\nMineral that body needs to work properly is_______");
		printf("\n\nA.Calcium\t\tB.silver\n\nC.gold\t\tD.lead");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");
			 coun=coun+3;
			 getch();
			 break;}
		else
		    {printf("\n\nWrong!!! The correct answer is A.Calcium");getch();	
			 coun--;	      
		     break;
		    }
        case 3:
		printf("\n\n\nCitrus foods are an excellent source of_______");
		printf("\n\nA.Calcium\t\tB.Vitamin C");
		printf("\n\nC.Vitamin B\t\tD.Calories");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");coun=coun+3;getch();
			 break;}
		else
		    {printf("\n\nWrong!!! The correct answer isB.Vitamin C");getch();
		     coun--;
		     break;}

        case 4:
		printf("\n\n\nBest source for omega-3 fatty acids.......");
        printf("\n\nA.Corn Oil\t\tB.Wheat Products");
		printf("\n\nC.Pork\t\tD.Sardines");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");coun=coun+3;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is D.Sardines");getch();
				coun--;
		        break;
		       }

        case 5:
		printf("\n\n\nNutrient important for healthy vision.....");
		printf("\n\nA.Vitamin K\t\tB.Calcium\n\nC.Vitamin A\t\tD.Iron");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");coun=coun+3;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.Vitamin A");
		           getch();
		           coun--;
		           break;
		       }

		case 6:
		printf("\n\n\nWhat is the main ingredient of black pudding...?");
		printf("\n\nA.Milk\t\tB.Blood\n\nC.Vermicelli\t\tD.Wine");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");coun=coun+3;getch();
			 break;}
		else
		    {printf("\n\nWrong!!! The correct answer is B.Blood");
		     getch();
			 coun--;
		     break;}

        case 7:
		printf("\n\n\nWhat is couscous made from....?");
		printf("\n\nA.Semolina\t\tB.Aubergines\n\nC.Bobotie\t\tD.Garbanzo flour");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");coun=coun+3;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Semolina");getch();
		        coun--;
		        break;}

        case 8:
		printf("\n\n\nEnglish Toffee day is in which month.....?");
		printf("\n\nA.September\t\tB.June\n\nC.March\t\tD.January");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");coun=coun+3;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.January");getch();
		       coun--;
		       break;}

        case 9:
		printf("\n\n\nIchthyophobia means ______________");
		printf("\n\nA.Fear of food\t\tB.Fear of fish");
		printf("\n\nC.Fear of cattle\t\tD.Fear of cooking");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");coun=coun+3; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Fear of fish");getch();
		        coun--;
		        break;}

        case 10:
		printf("\n\n\nWhich part of turmeric plant is dried and used in Indian Cooking..?");
		printf("\n\nA.Stem\t\tB.Leaf\n\nC.Root\t\tD.Petiole");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");coun=coun+3;getch(); 
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Root");getch();
			   coun--;
			   break;}

	   }}
	   if(coun>=20)
	    {goto success;}
	    else
	    {
	    system("cls");
	    printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	    getch();
	    goto mainhome;
	    }
	  sports:
	  counte=0;
	  for(i=1;i<=10;i++)
	  {system("cls");
	   r6=i;
	   switch(r6)
	   {
        case 1:
		printf("\n\n\nWhich Country won the first FIFA World Cup..?");
		printf("\n\nA.Argentina\t\tB.Brazil\n\nC.Italy\t\tD.Uruguay");
		if (toupper(getch())=='D')
		{printf("\n\nCorrect!!!");
		 counte=counte+3;
		 getch();
		 break;getch();}
		else
		{printf("\n\nWrong!!! The correct answer is D.Uruguay");getch();
		 counte--;
		 break;}
		case 2:
		printf("\n\n\nWho is known as Flying Sikh...?");
		printf("\n\nA.Michael Johnson\t\tB.Usain Bolt\n\nC.Milkha Sing\t\tD.Carl Lewis");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");
			 counte=counte+3;
			 getch();
			 break;}
		else
		    {printf("\n\nWrong!!! The correct answer is C.Milkha Sing");getch();	
			 counte--;	      
		     break;
		    }
        case 3:
		printf("\n\n\nWhat is the National Sports of China...?");
		printf("\n\nA.Baseball\t\tB.Table Tennis");
		printf("\n\nC.Cricket\t\tD.Swimming");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");counte=counte+3;getch();
			 break;}
		else
		    {printf("\n\nWrong!!! The correct answer isB.Table Tennis");getch();
		     counte--;
		     break;}

        case 4:
		printf("\n\n\nWhich Country won the most FIFA World Cup?");
        printf("\n\nA.Argentina\t\tB.France");
		printf("\n\nC.Germany\t\tD.Brazil");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");counte=counte+3;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is D.Brazil");getch();
				counte--;
		        break;
		       }

        case 5:
		printf("\n\n\nNational game of India is _______");
		printf("\n\nA.Hockey\t\tB.Kabbadi\n\nC.Football\t\tD.Cricket");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");counte=counte+3;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is A.Hockey");
		           getch();
		           counte--;
		           break;
		       }

		case 6:
		printf("\n\n\nWhich country calls Football Soccer...?");
		printf("\n\nA.India\t\tB.China\n\nC.USA\t\tD.UK");
		if (toupper(getch())=='C' )
			{printf("\n\nCorrect!!!");counte=counte+3;getch();
			 break;}
		else
		    {printf("\n\nWrong!!! The correct answer is C.USA");
		     getch();
			 counte--;
		     break;}

        case 7:
		printf("\n\n\nThomas Cup is related to _________");
		printf("\n\nA.Cricket\t\tB.Basket Ball\n\nC.Badminton\t\tD.Tennis");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");counte=counte+3;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Badminton");getch();
		        counte--;
		        break;}

        case 8:
		printf("\n\n\nWhere was first Commonwealth Games held...?");
		printf("\n\nA.USA\t\tB.Chile\n\nC.Mexico\t\tD.Canada");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");counte=counte+3;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Canada");getch();
		       counte--;
		       break;}

        case 9:
		printf("\n\n\nWhat does Blue Color Ring represent in Olympic Rings..?");
		printf("\n\nA.Asia\t\tB.Europe\n\nC.Africa\t\tD.Oceania");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");counte=counte+3; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Europe");getch();
		        counte--;
		        break;}

        case 10:
		printf("\n\n\nWhich sport does internet sensation 'Dan Bilzerian' play..?");
		printf("\n\nA.Poker\t\tB.Shooting\n\nC.Chess\t\tD.Weight Lifting");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");counte=counte+3;getch(); 
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Poker");getch();
			   counte--;
			   break;}

	   }}
	   if(counte>=20)
	    {goto success;}
	    else
	    {
	    system("cls");
	    printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	    getch();
	    goto mainhome;
	    }
	  
	  film:
	  countn=0;
	  for(i=1;i<=10;i++)
	  {system("cls");
	   r2=i;
	   switch(r2)
	   {
        case 1:
		printf("\n\nLumiere brothers,the pioneer of motion-picture are from");
		printf("\n\nA.USA\t\tB.French\n\nC.England\t\tD.Germany");
		if (toupper(getch())=='B')
		{printf("\n\nCorrect!!!");
		 countn=countn+3;
		 getch();
		 break;getch();}
		else
		{printf("\n\nWrong!!! The correct answer is B.French");getch();
		 countn=countn-1;
		 break;}
		case 2:
		printf("\n\n\nFrom which year,Oscar Award was first awarded?");
		printf("\n\nA.1929\t\tB.1932\n\nC.1935\t\tD.1921");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");
			 countn=countn+3;
			 getch();
			 break;}
		else
		    {printf("\n\nWrong!!! The correct answer is A.1929");getch();	
			 countn=countn-1;	      
		     break;
		    }
        case 3:
		printf("\n\n\nwhich one is the longest film to be shown in a cinema");
		printf("\n\nA.Grandmother Martha\t\tB.The Cure for Isnomia");
		printf("\n\nC.The clock\t\tD.Helmet:A Chronicle 0f Germany");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countn=countn+3;getch();
			 break;}
		else
		    {printf("\n\nWrong!!! The correct answer isB.The Cure for Isnomia");getch();
		     countn=countn-1;
		     break;}

        case 4:
		printf("\n\n\nThe man with most oscar awards");
		printf("\n\nA.Edith Head\t\tB.John Ford\n\nC.Walt Disney\t\tD.Katharine Hepburn");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countn=countn+3;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is C.Walt Disney");getch();
		        countn=countn-1;
		        break;
		       }

        case 5:
		printf("\n\n\nThe movie 'The Godfather' wins the Oscar for Best Picture in the year?");
		printf("\n\nA.1969\t\tB.1970\n\nC.1972\t\tD.1975");
		if (toupper(getch())=='c')
			{printf("\n\nCorrect!!!");countn=countn+3;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.1972");
		           getch();
		           countn=countn-1;
		           break;
		       }

		case 6:
		printf("\n\n\nLast film directed by Sathyajit Ray?");
		printf("\n\nA.Agantuk\t\tB.Bala\n\nC.Pikoo\t\tD.Jana Aranya");
		if (toupper(getch())=='A' )
			{printf("\n\nCorrect!!!");countn=countn+3;getch();
			 break;}
		else
		    {printf("\n\nWrong!!! The correct answer is A.Agantuk");
		     getch();
			 countn=countn-1;
		     break;}

        case 7:
		printf("\n\n\nFilm and Television Institute of India located at?");
		printf("\n\nA.Mumbai\t\tB.Kolkata\n\nC.Delhi\t\tD.Pune");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countn=countn+3;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Pune");getch();
		        countn=countn-1;
		        break;}

        case 8:
		printf("\n\n\nTotal number of Best Actor nomination for Amitabh Bachan in filmfare award?");
		printf("\n\nA.26\t\tB.28\n\nC.14\t\tD.12");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countn=countn+3;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.28");getch();
		       countn=countn-1;
		       break;}

        case 9:
		printf("\n\n\nDooradarshan founded in India in the year?");
		printf("\n\nA.1962\t\tB.1965\n\nC.1952\t\tD.1959");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countn=countn+3; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.1959");getch();
		        countn=countn-1;
		        break;}

        case 10:
		printf("\n\nFirst 3D animinated film from India is?");
		printf("\n\nA.Roadside Romeo\t\tB.Ghayab Aaya\n\nC.Hanuman\t\tD.Bal Ganesh");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countn=countn+3;getch(); 
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Roadside Romeo");getch();
			   countn=countn-1;
			   break;}
        }}
		if(countn>=20)
	    {goto success;}
	    else
	    {
	    system("cls");
	    printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	    getch();
	    goto mainhome;
	    }
	  landmark:
	  counto=0;
	  for(i=1;i<=10;i++)
	  {system("cls");
	   r5=i;
	   switch(r5)
	   {
        case 1:
		printf("\n\n\nTallest mountain on earth....");
		printf("\n\nA.Kangchenjunga\t\tB.Mt.McKinley\n\nC.Mt.Everest\t\tD.Mt.Rainier");
		if (toupper(getch())=='C')
		{printf("\n\nCorrect!!!");
		 counto=counto+3;
		 getch();
		 break;getch();}
		else
		{printf("\n\nWrong!!! The correct answer is C.Mt.Everest");getch();
		 counto--;
		 break;}
		case 2:
		printf("\n\n\nStatue of Liberty was a gift to america from which country?");
		printf("\n\nA.France\t\tB.Egypt\n\nC.England\t\tD.Mexico");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");
			 counto=counto+3;
			 getch();
			 break;}
		else
		    {printf("\n\nWrong!!! The correct answer is A.France");getch();	
			 counto--;	      
		     break;
		    }
        case 3:
		printf("\n\n\nChrist the Redeemer is a statue which looks over which city?");
		printf("\n\nA.San Juan\t\tB.Rio de janeiro");
		printf("\n\nC.Managua\t\tD.Buenos Aires");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");counto=counto+3;getch();
			 break;}
		else
		    {printf("\n\nWrong!!! The correct answer isB.Rio de Janeiro");getch();
		     counto--;
		     break;}

        case 4:
		printf("\n\n\nNasca lines are in which country...?");
        printf("\n\nA.Colombia\t\tB.Chile");
		printf("\n\nC.Ecuador \t\tD.Peru");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");counto=counto+3;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is D.Peru");getch();
				counto--;
		        break;
		       }

        case 5:
		printf("\n\n\nWhich landmark in Rome was said to have seated more");
		printf("\nthan 50,000 fans, all vying for blood");
		printf("\n\nA.The Colosseum\t\tB.Pantheon\n\nC.Vatican Museum\t\tD.Trevi Fountain");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");counto=counto+3;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is A.The Colosseum");
		           getch();
		           counto--;
		           break;
		       }

		case 6:
		printf("\n\n\nIn which country would you find the Wadi Rum");
		printf("\n\nA.Syria\t\tB.Jordan\n\nC.Cairo\t\tD.Turkey");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");counto=counto+3;getch();
			 break;}
		else
		    {printf("\n\nWrong!!! The correct answer is B.Jordan");
		     getch();
			 counto--;
		     break;}

        case 7:
		printf("\n\n\nMillennium Wheel is better known as what.....?");
		printf("\n\nA.Niagara Skywheel\t\tB.Melbourne Star\n\nC.The London eye\t\tD.The Big Wheel");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");counto=counto+3;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.The London eye");getch();
		        counto--;
		        break;}

        case 8:
		printf("\n\n\nSalar de Uyuni is the world's largest what?");
		printf("\n\nA.Salt flat\t\tB.CapeHorn\n\nC.Yosemite\t\tD.Palmyra");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");counto=counto+3;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Salt flat");getch();
		       counto--;
		       break;}

        case 9:
		printf("\n\n\nMausoleum in Agra that is one of the most famous landmarks in India....");
		printf("\n\nA.Sheesh Mahal\t\tB.Taj Mahal\n\nC.Agra Fort\t\tD.Jama Masjid");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");counto=counto+3; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Taj Mahal");getch();
		        counto--;
		        break;}

        case 10:
		printf("\n\nStonehenge can be found in which English country..?");
		printf("\n\nA.Wiltshire\t\tB.Fiji\n\nC.Dorset\t\tD.Somerset");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");counto=counto+3;getch(); 
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Wiltshire");getch();
			   counto--;
			   break;}

	   }}
	   if(counto>=20)
	    {goto success;}
	    else
	    {
	    system("cls");
	    printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	    getch();
	    goto mainhome;
	    }


	  India:
	  counts=0;
	  for(i=1;i<=10;i++)
	  {system("cls");
	   r3=i;
	   switch(r3)
	   {
        case 1:
		printf("\n\nWho was the first speaker of Lok Sabha");
		printf("\n\nA.Mavlankar\t\tB.Hukum Singh\n\nC.B.D Jatti\t\tD.V.V Giri");
		if (toupper(getch())=='A')
		{printf("\n\nCorrect!!!");
		 counts=counts+3;
		 getch();
		 break;getch();}
		else
		{printf("\n\nWrong!!! The correct answer isA.Mavlankar");getch();
		 counts--;
		 break;}
		case 2:
		printf("\n\n\nIndia's only Naval Aviation Museum is located in");
		printf("\n\nA.Karnataka\t\tB.Kerala\n\nC.Tamilnadu\t\tD.Goa");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");
			 counts=counts+3;
			 getch();
			 break;}
		else
		    {printf("\n\nWrong!!! The correct answer is D.Goa");getch();	
			 counts--;	      
		     break;
		    }
        case 3:
		printf("\n\n\nLargest river in south India");
		printf("\n\nA.Krishna\t\tB.Godavari");
		printf("\n\nC.Kavery\t\tD.Mahanadi");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");counts=counts+3;getch();
			 break;}
		else
		    {printf("\n\nWrong!!! The correct answer isB.Godavari");getch();
		     counts--;
		     break;}

        case 4:
		printf("\n\n\nWho was called Grand Old Man of India");
        printf("\n\nA.Bala Gangadhar Thilak\t\tB.Dadabhai Navaroji");
		printf("\n\nC.Gopala Krishna Gokale\t\tD.Feroz Shah Mehta");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");counts=counts+3;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is B.Dadabhai Navaroji");getch();
				counts--;
		        break;
		       }

        case 5:
		printf("\n\n\nThe National Police Academy is located in?");
		printf("\n\nA.Abu Road\t\tB.Delhi\n\nC.Hyderabad\t\tD.Bangalore");
		if (toupper(getch())=='c')
			{printf("\n\nCorrect!!!");counts=counts+3;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.Hyderabad");
		           getch();
		           counts--;
		           break;
		       }

		case 6:
		printf("\n\n\nWho established the first Women's University of India?");
		printf("\n\nA.Hirabai Tata\t\tB.Ramabai Ranade\n\nC.Annie Besant\t\tD.D.K karve");
		if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");counts=counts+3;getch();
			 break;}
		else
		    {printf("\n\nWrong!!! The correct answer is D.D.K karve ");
		     getch();
			 counts--;
		     break;}

        case 7:
		printf("\n\n\nThe maximum number of Public Accounts Committie can be?");
		printf("\n\nA.10\t\tB.12\n\nC.22\t\tD.25");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");counts=counts+3;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is c.22");getch();
		        counts--;
		        break;}

        case 8:
		printf("\n\n\nIn which year Sikkim become a part of India");
		printf("\n\nA.1972\t\tB.1975\n\nC.1977\t\tD.1980");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");counts=counts+3;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.1975");getch();
		       counts--;
		       break;}

        case 9:
		printf("\n\n\nDooradarshan founded in India in the year?");
		printf("\n\nA.1962\t\tB.1965\n\nC.1952\t\tD.1959");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");counts=counts+3; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.1959");getch();
		        counts--;
		        break;}

        case 10:
		printf("\n\nWhich river is called Bangal's sarrow?");
		printf("\n\nA.Yamuna\t\tB.Damodhar\n\nC.Narmada\t\tD.Tapti");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");counts=counts+3;getch(); 
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Damodhar");getch();
			   counts--;
			   break;}

	   }}
	   if(counts>=20)
	    {goto success;}
	    else
	    {
	    system("cls");
	    printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	    getch();
	    goto mainhome;
	    }

	   reasoning:
	  county=0;
	  for(i=1;i<=10;i++)
	  {system("cls");
	   r4=i;
	   switch(r4)
	   {
        case 1:
		printf("\n\n80, 10, 70, 15, 60,.....What number comes next?");
		printf("\n\nA.20\t\tB.25\n\nC.30\t\tD.50");
		if (toupper(getch())=='A')
		{printf("\n\nCorrect!!!");
		 county=county+3;
		 getch();
		 break;getch();}
		else
		{printf("\n\nWrong!!! The correct answer is A.20");getch();
		 county--;
		 break;}
		case 2:
		printf("\n\n\nPick the odd man out.");
		printf("\n\nA.just\t\tB.fair\n\nC.equitable\t\tD.biased");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");
			 county=county+3;
			 getch();
			 break;}
		else
		    {printf("\n\nWrong!!! The correct answer is D.biased");getch();	
			 county--;	      
		     break;
		    }
        case 3:
		printf("\n\n\nCUP:LIP :: BIRD:?");
		printf("\n\nA.GRASS\t\tB.FOREST\n\nC.BEAK\t\tD.BUSH");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");county=county+3;getch();
			 break;}
		else
		    {printf("\n\nWrong!!! The correct answer is C.BEAK");getch();
		     county--;
		     break;}

        case 4:
		printf("\n\n\nKevin is the oldest.Nickolas is not the oldest.Joseph is not");
		printf("\n\nyoungest.If they are brother's,then who is the youngest?");
	    printf("\n\nA.Joseph\t\tB.Kevin\n\nC.Nicholas\t\tD.Both joseph and Nicholas");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");county=county+3;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is C.Nicholas");getch();
		        county--;
		        break;
		       }

        case 5:
		printf("\n\n\nSTATEMENT:Medicine'P' is a drug which is causing?");
		printf("\n\n             ripples in medical field.");
		printf("\n\n Assumption I:No other drug is causing ripples in medical field.");
		printf("\n\n Assumption II:Medicine'P' is a great drug");
		printf("\n\nA.If only assumptionI is implicit\t\tB.If only assumptionI is implicit");
		printf("\n\nC.If either I or II is implicit\t\tD.If neither I or II is implicit");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");county=county+3;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is D.If neither I or II is implicit");
		           getch();
		           county--;
		           break;
		       }

		case 6:
		printf("\n\n\n SCD, TEF, UGH, _____, WKL");
		printf("\n\nA.IJT\t\tB.VIJ\n\nC.CMN\t\tD.UJI");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");county=county+3;getch();
			 break;}
		else
		    {printf("\n\nWrong!!! The correct answer is B.VIJ");
		     getch();
			 county--;
		     break;}

        case 7:
		printf("\n\n\nPick an odd man out");
		printf("\n\nA.wing\t\tB.fin\n\nC.beak\t\tD.rudder");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");county=county+3;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.beak");getch();
		        county--;
		        break;}

        case 8:
		printf("\n\n\nPointing to a photograph, a man said,'I have no brother or sister");
		printf("\n\nbut that man's father is my father's son.' Whose photograph was it?");
		printf("\n\nA.His own\t\tB.His son\n\nC.His father\t\tD.His grandfather");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");county=county+3;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.His son");getch();
		       county--;
		       break;}

        case 9:
		printf("\n\n'A*B'means A is father of B\n\n'A–B'means A is sister of B");
		printf("\n\n'A+B'means A is mother of B\n\n'A/B'means A is sister of B");
        printf("\n\nIn the expression D+F*O/P,how is O related to D?");
		printf("\n\nA.Grand daughter\t\tB.Son\n\nC.Grand son\t\tD.Daughter");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");county=county+3; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Grand son");getch();
		        county--;
		        break;}

        case 10:
		printf("\n\nIf '+' stands for '-' , '-' stands for 'x', 'x' stands for '/'and");
		printf("\n\n'/' stands for '+' then what is the value of 56x7/13-11+15-8/2-7?");
		printf("\n\nA.30\t\tB.45\n\nC.60\t\tD.90");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");county=county+3;getch(); 
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.45");getch();
			   county--;
			   break;}
	   }}
	   if(county>=20)
	    {goto success;}
	   else
	    {
	    system("cls");
	    printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
		printf("\n\t\t.................................................. ");
        printf("\n\t\t Current date and time : %s",ctime(&t));
	    printf("\t\t.................................................. ");
	    getch();
	    goto mainhome;
	    }

    success:
	system("cls");
     printf("\n\n\t*** CONGRATULATION %s YOU ARE ELIGIBLE TO PLAY CHALLENGE ZONE ***",strupr(yourname));
     printf("\n\n\n\n\t!Press any key to move forward!");
     if(toupper(getch())=='p')
		{goto game;}

	game:
    countr=0;
    for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\nWhich among the following is not correctly matched?");
		printf("\n\nA.Sukhna Lake-Chandigarh\t\tB.Wandoor-Andaman&Nicobar");
		printf("\n\nC.BangaramBeach-Lakshadweep\t\tD.Devka Beach-Goa");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Devka Beach-Goa");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\nNational Rural Health mission lauched in,");
		printf("\n\nA.October 2005\t\tB.Auguast 2005\n\nC.April 2005\t\tD.July 2005");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.April 2005");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\nWhich of the following is not correct? ");
		printf("\n\nA.NMA-National Monuments Authority\t\tB.SIT-Special Investigation Teamn");
		printf("\n\nC.BSF-British Security Force\t\tD.ASI-Archeology Survey Of India");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.BSF-Border Security Force");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\nIn which year Pulitzer Prize established?");
		printf("\n\nA.1917\t\tB.1918\n\nC.1916\t\tD.1919");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.1917");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nWho invented Gunpowder?");
		printf("\n\nA.Ferdinand Von Zeppelin\t\tB.Sir Frank Whittle");
		printf("\n\nC.Roger Bacon\t\tD.Leo H Baekeland");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.Roger Bacon");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nBrown Waterfalls are situated in");
		printf("\n\nA.Australia\t\tB.Canada\n\nC.Switzerland\t\tD.New Zealand");
		if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Newzeland");goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\nWhat is the National Name of Japan?");
		printf("\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Nippon");getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\n1917 is known for?");
		printf("\n\nA.Battle of Trafalgar\t\tB.Battle of Waterloo");
		printf("\n\nC.End of World War2t\tD.The Russian Revolution");
		if(toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer isD.The Russian Revolution");getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\nDiesal locomotives are built in?");
		printf("\n\nA.Bangalore\t\tB.Varanasi\n\nC.Perambur\t\tD.Hubli");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Varanasi");getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\nWhich is the longest River in the world?");
		printf("\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Nile");getch();break;goto score;}

        case 11:
		printf("\n\n\nWho wrote the famous book WE THE PEOPLE?");
		printf("\n\nA.T.N Kaul\t\tB.J.R.d Tata\n\nC.Khushwant Singh\t\tD.Nani Palkhivala");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
              {printf("\n\nWrong!!! The correct answer is D.Nani Palkhivala");getch();
              break;goto score;}

        case 12:
		printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
		printf("\n\nA.Rome\t\tB.Vactican City\n\nC.Madrid\t\tD.Berlin");
		if (toupper(getch())=='A')
			  {printf("\n\nCorrect!!!");countr++;getch();
			   break;}
		else
              {printf("\n\nWrong!!! The correct answer is A.Rome");getch();
              break;goto score;}

		case 13:
		printf("\n\n\n18th March is celebrated as?");
		printf("\n\nA.World Wild life Day\t\tB.International Women Day");
		printf("\n\nC.Self Injury Awareness Day\t\tD.World Sleep Day");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.World Sleep Day");getch();
		       break;goto score;}

        case 14:
		printf("\n\n\nFirst bank in Kerala'?");
		printf("\n\nA.Bank of Hindhusthan\t\tB.State Bank of Hindhusthan");
		printf("\n\nC.Nedumanghadi Bank\t\tD.Grameen Bank");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Nedumanghadi Bank");getch();
		       break;goto score;}

		case 15:
		printf("\n\n\nGreta Garbo is associated with?");
		printf("\n\nA.Classical dance\t\tB.Literutre\n\nC.Journalism\t\tD.Acting");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Acting");getch();
		       goto score;
		       break;}}}
	score:
    system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<1500000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won $%.2f",score);goto go;
		 printf("\n\t\t.................................................. ");
         printf("\n\t\t Current date and time : %s",ctime(&t));
	     printf("\t\t.................................................. ");}

	 else if(score==1500000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You!!");
		printf("\n\t\t.................................................. ");
        printf("\n\t\t Current date and time : %s",ctime(&t));
	    printf("\t\t.................................................. ");
	}
	 else
    {
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;
		printf("\n\t\t.................................................. ");
        printf("\n\t\t Current date and time : %s",ctime(&t));
	    printf("\t\t.................................................. ");
		}
	

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any other key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,yourname);
		goto mainhome;}}}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n ------------------------------AIRIA QUIZZIZ----------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are three zones in the game, WARMUP ZONE< SAFE ZONE & CHALLANGE ZONE");
    printf("\n >> In WARMUP ZONE, you will be asked a total of 22 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game only if you give atleast 9");
    printf("\n    right answers otherwise you wouldn't be able to continue the game...........");
	printf("\n >> In SAFE ZONE you are allowed to choose your interested topic from the "); 
	printf("\n    given 6 topics.You are eligible to reach the challenge zone only if you");
	printf("\n    score above 19.This zone consist of total 10 questions where you score 3");
	printf("\n    mark for each right answer and 1 mark deducted for each wrong answer.");
    printf("\n >> Your game starts with the CHALLANGE ZONE. In this round you will be asked");
    printf("\n    total 15 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto more than ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****This QUIZ GAME is developed by SUCCOTASH team********");}

void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
