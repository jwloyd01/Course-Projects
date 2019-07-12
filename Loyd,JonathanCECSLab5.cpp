/*
Jonathan Loyd
Lab 5
Mad libs but with code
Lab Section: 01
*/

#include <time.h>
#include <stdio.h>
#include <cstdlib>

int main ()
{
	//tell what the program is upon startup
	printf("We are going to write a story! Please respond with relevant information.\n");
	
	int iRandomNumber = 0,i;//neat cars people like to drive for the purpose of the story
	srand(time(NULL));
	const char *Cars[] = {"Mustang", "Bugatti", "Jaguar", "Mercedes", "Corvette"};
	
	for (i=0; i<4; i++)
	{
		iRandomNumber = (rand() %5);
		break;
	}
	
	int iRandomNumber2 = 0,j; //scenerios for the third sentence
	srand(time(NULL));
	const char *Forgot[] = {"about the Spanish Inquisition. ", "they were on medication and was not supposed to operate heavy machinery. ", "cars shouldn't talk. "};
	
	for (j=0; j<2; j++)
	{
		iRandomNumber2 = (rand() %3);
		break;
	}
	
	int iRandomNumber3 = 0,k; //scenerios for the crash
	srand(time(NULL));
	const char *Accident[] = {"off of a cliff. ", "into a crowd of people. ", "into the future to hit Marty McFly. ", "through a baguette shop. ", "through the fourth wall. "};
	
	for (k=0; k<4; k++)
	{
		iRandomNumber3 = (rand() %5);
		break;
	}
	
	int iRandomNumber4 = 0,l; //scenerios for the ending
	srand(time(NULL));
	const char *Remember[] = {"party and drive. ", "eat and drive. ", "kill people. ", "drive wrecklessly. "};
	
	for (l=0; l<3; l++)
	{
		iRandomNumber4 = (rand() %4);
		break;
	}
	
	//Making variables for asking questions
	char Name[20];
	char Color[20];
	int iFavNumber;
	char Food[20];
	
	//asking the user questions
	printf("\nWhat is your name? ");
	scanf("%s", &Name);
	
	printf("What is your favorite color? ");
	scanf("%s", &Color);
	
	printf("What is your favorite number? ");
	scanf("%d", &iFavNumber);
	
	printf("What is your favorite food? ");
	scanf("%s", &Food);
	
	//putting the other variables into use and making the story
	printf("\nIt was a rather boring day, until %s drove by in that sick, %s %s. ", Name, Color, (Cars[iRandomNumber]));
	printf("Everyone around turned their heads because there were %d other people in that %s! ", iFavNumber, (Cars[iRandomNumber]));
	printf("%s was busy eating %s and forgot %s", Name, Food, (Forgot[iRandomNumber2]));
	printf("This caused %s to rethink life, causing them to drive %s", Name, (Accident[iRandomNumber3]));
	printf("Remember kids, don't %s", (Remember[iRandomNumber4]));
	
	return 0;
}
