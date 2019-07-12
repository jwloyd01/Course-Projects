/*
Jonathan Loyd
Lab 6
Phone Book to store contacts and view them
Lab Section: 01
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>


	typedef struct Phonebook //structure created
	{
		char First[50];
		char Last[50];
		char Number[50];
	}Phone;

Phone* AddFriend (Phone *); //voids for later use
void DeleteFriend (Phone *);
void PrintList (Phone *);

int counter = 0; //variables
int x;
int size = 8;



Phone* AddFriend (Phone * Phonebook) //case 1- adding friends
{
	counter++;
	if (counter == size)
	{
		Phonebook = (Phone*)realloc(Phonebook, (size + 8) * sizeof(Phonebook[0]));	
		size += 8;
	}
	
	printf("\nYou chose to add a friend. \n");
	
	printf("First Name: "); //asking information and entering it into an array
	scanf("%s", &Phonebook[counter-1].First);
	
	printf("Last Name: ");
	scanf("%s", &Phonebook[counter-1].Last);
	
	printf("Phone Number: ");
	scanf("%s", &Phonebook[counter-1].Number);
	
	printf("Friend Added!\n");
	return Phonebook;
}

void DeleteFriend (Phone * Phonebook) //case 2- deleting friends
{
	char deleteFirst[50]; //delete variables and variables to clean up issues
	char deleteLast[50];
	int y;
	int oldCounter = counter;
	
	counter++;
	printf("First Name: ");
	scanf("%s", &deleteFirst);
	
	printf("Last Name: ");
	scanf("%s", &deleteLast);
	
	for (x = 0; x < counter; x++)
	{
		if (strcmp(deleteFirst, Phonebook[x].First) == 0 && strcmp(deleteLast, Phonebook[x].Last) == 0)
				{
					for (y = x; y < counter; y++) //to clean up the array and move data
					{
						strcpy(Phonebook[y].First, Phonebook[y + 1].First);
						strcpy(Phonebook[y].Last, Phonebook[y + 1].Last);
						strcpy(Phonebook[y].Number, Phonebook[y + 1].Number);
					}
					counter--;
					printf("Friend successfully deleted from the phonebook.\n\n");
				}
			if (oldCounter > counter) //stopped multiple prints
			{
				printf("The entry is invalid.\n");
				break;
			}	
	}
	counter--;
}

void PrintList (Phone * Phonebook) //case 3- view all contacts
{
	int i = 0;
	printf( "\nsize = %d\n", counter);
    printf( "Contacts:\n" );
    for( i = 0; i < counter; ++i )
    {
        printf("(%d)\n", i+1);
        printf("Name: %s %s\n", Phonebook[i].First, Phonebook[i].Last);
        printf("Number: %s\n", Phonebook[i].Number);
    }
} 

int main() //whole of the phone book
{
	printf( "Size of each record = %d bytes ...\n", sizeof(Phone) );
	Phone* Phonebook = (Phone*)calloc(8, sizeof(Phone));
	
	int choice;
	
	do
	{
	printf("\nWelcome to the phone book"); //menu display
	printf("\n(1) Add friend");
	printf("\n(2) Delete Friend");
	printf("\n(3) Show Phone Book");
	printf("\n(4) Exit");
	printf("\nPlease enter a number corresponding to the following options: ");
	scanf("%d",&choice);
	
		switch (choice) //menu options and what they do
		{	
			case 1: 
				Phonebook = AddFriend (Phonebook);
				break;
				
			case 2:
				DeleteFriend (Phonebook);
				break;
				
			case 3:
				PrintList (Phonebook);
				break;
		}		
	}
	while (choice != 4); //the exit option
	printf("Goodbye!\n");
	
	return 0;
}

