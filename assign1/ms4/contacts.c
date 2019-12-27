//==============================================
// Name:           Heedong Yang
// Student Number: 146191168
// Email:          hyang117@myseneca.ca
// Section:        NSA
// Date:           11/12/2019
//==============================================
// Assignment:     1
// Milestone:      4
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contacts.h"
// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:
void clear_buff() {
	while (getchar() != '\n');
}
// Get and store from standard input the values for Name
// Put your code here that defines the Contact getName function:
void getName(struct Name* name) {
	char answer;

	printf("Please enter the contact's first name: ");
	scanf("%[^\n]", (*name).firstName);
	clear_buff();
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf("%c", &answer);
	clear_buff();
	if (answer == 'y' || answer == 'Y')
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf("%[^\n]", (*name).middleInitial);
		clear_buff();
	}
	printf("Please enter the contact's last name: ");
	scanf("%[^\n]", (*name).lastName);
	clear_buff();
}
// Get and store from standard input the values for Address
// Put your code here that defines the Contact getAddress function:
void getAddress(struct Address* address) {
	char answer;

	printf("Please enter the contact's street number: ");
	scanf("%d", &(*address).streetNumber);
	clear_buff();
	printf("Please enter the contact's street name: ");
	scanf("%[^\n]", (*address).street);
	clear_buff();
	printf("Do you want to enter an apartment number? (y or n): ");
	scanf("%c", &answer);
	clear_buff();
	if (answer == 'y' || answer == 'Y')
	{
		printf("Please enter the contact's apartment number: ");
		scanf("%d", &(*address).apartmentNumber);
		clear_buff();
	}
	printf("Please enter the contact's postal code: ");
	scanf("%[^\n]", (*address).postalCode);
	clear_buff();

	printf("Please enter the contact's city: ");
	scanf("%[^\n]", (*address).city);
	clear_buff();
}
// Get and store from standard input the values for Numbers
// Put your code here that defines the Contact getNumbers function:
void getNumbers(struct Numbers* number) {
	char answer;

	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf("%c", &answer);
	clear_buff();

	if (answer == 'y' || answer == 'Y')
	{
		printf("Please enter the contact's cell phone number: ");
		scanf("%[^\n]", (*number).cell);
		clear_buff();
	}

	printf("Do you want to enter a home phone number? (y or n): ");
	scanf("%c", &answer);
	clear_buff();
	if (answer == 'y' || answer == 'Y')
	{
		printf("Please enter the contact's home phone number: ");
		scanf("%[^\n]", (*number).home);
		clear_buff();
	}
	printf("Do you want to enter a business phone number? (y or n): ");
	scanf("%c", &answer);
	clear_buff();

	if (answer == 'y' || answer == 'Y')
	{
		printf("Please enter the contact's business phone number: ");
		scanf("%[^\n]", (*number).business);
		clear_buff();
	}
}
