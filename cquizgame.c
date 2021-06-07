#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      TO ");
     printf("\n\t\t\t   THE QUIZZ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   PREPARATION FOR EXAMINATION   ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
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
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n ");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> It's a quiz to review for the driving exam");
    printf("\n >> The quiz consists of 20 questions (or more) higgledy-piggledy each noted in 1 point");
    printf("\n    A good answer found displays a message indicating that you found;");
    printf("\n    If not, a message indicating the correct response will be displayed");
    printf("\n >> The game continues as you have answered the 20 questions");
    printf("\n >> At the end of the 20 questions, the final score over 20 is displayed;");
    printf("\n    If this is greater than or equal to the average, a congratulation and admission message is displayed");
    printf("\n    Otherwise a consolation message is displayed");
    printf("\n    Your score is then saved in a file and you can consult it at any time");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto game;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

game:
     countr=0;
     for(i=1;i<=20;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\nWhat do you call a motorway junction ?");
		printf("\n\nA.Connection of two highways\t\tB.Separation of two highways\n\nC.The way to the carrefour\t\tD.None of the above");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Connection of two highways");getch();
		       break;}

		case 2:
		printf("\n\n\nDriving the vehicle I can............,");
		printf("\n\nA.Receive a call\t\tB.Eat\n\nC.Chatting with people in the vehicle\t\tD.None of the above");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.None of the above");getch();
		       break;
		       }

        case 3:
		printf("\n\n\nHow many wheels does a vehicle normally have ?");
		printf("\n\nA.4\t\tB.5\n\nC.7\t\tD.6");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.5 ");getch();
		       break;}

        case 4:
		printf("\n\n\nWhere is the dead point ............");
		printf("\n\nA.At the gear lever\t\tB.Where we can park\n\nC.Where we cannot park\t\tD.None of the above");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.At the gear lever");getch();
		       break;
		       }

        case 5:
		printf("\n\n\nAt the sight of a steady yellow traffic light I must .........");
		printf("\n\nA.Accelerate\t\tB.Slow down to stop\n\nC.Suddenly stop\t\tD.Give way");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Slow down to stop");
		       getch();
		       break;
		       }

		case 6:
		printf("\n\n\nWhat is the purpose of a roundabout ?");
		printf("\n\nA.Facilitate la circulation\t\tB.Allow cars to be parked\n\nC.Create traffic jams\t\tD.None of the above");
		if (toupper(getch())=='A' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Facilitate la circulation");
		       getch();
		       break;}

        case 7:
		printf("\n\n\nAt the intersection with no signage I must give way to..........");
		printf("\n\nA.Left only\t\tB.Right only\n\nC.Right and left\t\tD.To no one");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Right only");getch();
		       break;}

        case 8:
		printf("\n\n\nWhat is the behavior to adopt at an accident site?");
		printf("\n\nA.Alert-Protect-Rescue\t\tB.Rescue-Protect-Alert\n\nC.Rescue-Alert-Protect\t\tD.Protect-Alert-Rescue");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Protect-Alert-Rescue");getch();
		       break;}

        case 9:
		printf("\n\n\nThe road light illuminate at ?.......");
		printf("\n\nA.100m\t\tB.30m\n\nC.150m\t\tD.200m");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.100m");getch();
		       break;}

        case 10:
		printf("\n\n\nAt the sight of a white dashed line");
		printf("\n\nA.I can overtake\t\tB.I can't exceed\n\nC.I have to stop\t\tD.None of the above");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.I can overtake");getch();break;}

        case 11:
		printf("\n\n\nWitch of these vehicles has priority at intersections?");
		printf("\n\nA.Firefighters\t\tB.Truck\n\nC.Bus\t\tD.None of these vehicles");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
              {printf("\n\nWrong!!! The correct answer is A.Firefighters");getch();
              break;}

        case 12:
		printf("\n\n\nHow many road signs are there?");
		printf("\n\nA.1\t\tB.2\n\nC.3\t\tD.4");
		if (toupper(getch())=='D')
			  {printf("\n\nCorrect!!!");countr++;getch();
			   break;}
		else
              {printf("\n\nWrong!!! The correct answer is D.4");getch();
              break;}

		case 13:
		printf("\n\n\nHow many meters is the warning sign placed?");
		printf("\n\nA.100m\t\tB.30m\n\nC.50m\t\tD.150m");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.30m");getch();
		       break;}

        case 14:
		printf("\n\n\nHow many ways to park");
		printf("\n\nA.3\t\tB.4\n\nC.5\t\tD.1");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.3");getch();
		       break;}

		case 15:
		printf("\n\n\n How many intersection shapes exist?");
		printf("\n\nA.3\t\tB.4\n\nC.5\t\tD.1");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.4");getch();
		       break;}

		case 16:
		printf("\n\n\nHow many priority rules exist ?");
		printf("\n\nA.1\t\tB.4\n\nC.3\t\tD.2");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is C.3");getch();
		       break;}


		case 17:
		printf("\n\n\nThe minimum distance between two overtaking vehicles is?");
		printf("\n\nA.2m\t\tB.0.5m\n\nC.5m\t\tD.0.2m");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.0.5m");getch();
		       break;}

		case 18:
		printf("\n\n\nHow many pedals does a vehicle have?");
		printf("\n\nA.2\t\tB.4\n\nC.3\t\tD.5\n\n");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.4");getch();
		       break;}

		case 19:
		printf("\n\n Were is the brake pedal in a vehicle?");
		printf("\n\nA.Right\tB.In the middle\n\nC.Left\tD.After the accelerator pedal\n\n");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.In the middle");getch();
		       break;}

		case 20:
		printf("\n\n\nOvertaking is always done by the .......");
		printf("\n\nA.Right\t\tB.In the middle of two cars\n\nC.Left\t\tD.I must not exceed");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Left");getch();
		       break;}

		case 21:
		printf("\n\nTo follow a vehicle travelling at 90km/h the safety interval is__ ?");
		printf("\n\nA.10km about\t\tB.15km about\n\nC.50km about\t\tD. 5km about");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.50km about");getch();
		       break;}

		case 22:
		printf("\n\n\nTe alcohol ......");
		printf("\n\nA.Is fine while driving\t\tB.Is fine before driving\n\nC.Allows you to drive well \t\tD.Prohibited as long as you have to get behind the weel");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Prohibited as long as you have to get behind the weel");getch();
		       break;}

		case 23:
		printf("\n\n\nWhen the direction sign has a yellow background it is:.......");
		printf("\n\nA.Direction of deviation\t\tB.Temporary management\n\nC.Compulsory direction\t\tD.Priority routes");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Temporary management");getch();
		       break;}}}
	score:
    system("cls");
	score=(float)countr;
	if(score>14.00 && score<21)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won %.2f points",score);goto go;}

	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto game;
	else
		{
		edit_score(score,playername);
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
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> It's a quiz to review for the driving exam");
    printf("\n >> The quiz consists of 20 questions (or more) higgledy-piggledy each noted in 1 point");
    printf("\n    A good answer found displays a message indicating that you found;");
    printf("\n    If not, a message indicating the correct response will be displayed");
    printf("\n >> The game continues as you have answered the 20 questions");
    printf("\n >> At the end of the 20 questions, the final score over 20 is displayed;");
    printf("\n    If this is greater than or equal to the average, a congratulation and admission message is displayed");
    printf("\n    Otherwise a consolation message is displayed");
    printf("\n    Your score is then saved in a file and you can consult it at any time");

	printf("\n\n\t*********************GOOD LUCK TO YOU*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by CODE WITH C TEAM********");}

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
