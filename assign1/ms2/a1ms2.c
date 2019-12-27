//==============================================
// Name:           Heedong Yang
// Student Number: 146191168
// Email:          hyang117@myseneca.ca
// Section:        NSA
// Date:           11/5/2019
//==============================================
// Assignment:     1
// Milestone:      2
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
	while ( getchar() != '\n') ;
}

int main(void)
{
	// Declare variables here:
	struct Name fullname = { "", "", "" };
	struct Address addressinfo = { 0, "", 0,"", "" };
	struct Numbers phone = { "", "", "" };
	char answer;

	// Display the title
	printf("Contact Management System\n");
	printf("-------------------------\n");

	// Contact Name Input:
	printf("Please enter the contact's first name: ");
	scanf("%[^\n]", fullname.firstName);
	clear_buff();
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf("%c", &answer);	
	clear_buff();
	if (answer == 'y' || answer == 'Y')
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf("%[^\n]", fullname.middleInitial);
		clear_buff();
	}
	printf("Please enter the contact's last name: ");
	scanf("%[^\n]", fullname.lastName);
	clear_buff();

	// Contact Address Input:
	printf("Please enter the contact's street number: ");
	scanf("%d", &addressinfo.streetNumber);
	clear_buff();

	printf("Please enter the contact's street name: ");
	scanf("%[^\n]", addressinfo.street);
	clear_buff();

	printf("Do you want to enter an apartment number? (y or n): ");
	scanf("%c", &answer);
	clear_buff();

	if (answer == 'y' || answer == 'Y')
	{
		printf("Please enter the contact's apartment number: ");
		scanf("%d", &addressinfo.apartmentNumber);
		clear_buff();
	}

	printf("Please enter the contact's postal code: ");
	scanf("%[^\n]", addressinfo.postalCode);
	clear_buff();

	printf("Please enter the contact's city: ");
	scanf("%[^\n]", addressinfo.city);
	clear_buff();
	
	// Contact Numbers Input:
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf("%c", &answer);
	clear_buff();

	if (answer == 'y' || answer == 'Y')
	{
		printf("Please enter the contact's cell phone number: ");
		scanf("%[^\n]", phone.cell);
		clear_buff();
		//printf("--->>> Testing CellP <<<--- : %s \n", phone.cell);
	}
	
	printf("Do you want to enter a home phone number? (y or n): ");
	scanf("%c", &answer);
	clear_buff();
	//printf("--->>>Testing answer<<<--- : %c \n", answer);
	if (answer == 'y' || answer == 'Y')
	{
		printf("Please enter the contact's home phone number: ");
		scanf("%[^\n]", phone.home);
		clear_buff();
		//printf("--->>> Testing homeP <<<--- : %s\n", phone.home);
	}
	printf("Do you want to enter a business phone number? (y or n): ");
	scanf("%c", &answer);
	clear_buff();

	if (answer == 'y' || answer == 'Y')
	{
		printf("Please enter the contact's business phone number: ");
		scanf("%[^\n]", phone.business);
		clear_buff();
	}

	// Display Contact Summary Details
	printf("\nContact Details\n");
	printf("---------------\n");
	printf("Name Details:\n");
	printf("First name: %s\n", fullname.firstName);
	printf("Middle initial(s): %s\n", fullname.middleInitial);
	printf("Last name: %s\n", fullname.lastName);
	printf("\n");
	printf("Address Details:\n");
	printf("Street number: %d\n", addressinfo.streetNumber);
	printf("Street name: %s\n", addressinfo.street);
	printf("Apartment: %d\n", addressinfo.apartmentNumber);
	printf("Postal code: %s\n", addressinfo.postalCode);
	printf("City: %s\n", addressinfo.city);
	printf("\n");
	printf("Phone Numbers:\n");
	printf("Cell phone number: %s\n", phone.cell);
	printf("Home phone number: %s\n", phone.home);
	printf("Business phone number: %s\n", phone.business);
	
	// Display Completion Message
	printf("\nStructure test for Name, Address, and Numbers Done!\n");

	return 0;
}

/*  SAMPLE OUTPUT:

	Contact Management System
	-------------------------
	Please enter the contact's first name: Tom
	Do you want to enter a middle initial(s)? (y or n): y
	Please enter the contact's middle initial(s): L. A.
	Please enter the contact's last name: Wong Song
	Please enter the contact's street number: 20
	Please enter the contact's street name: Keele Street
	Do you want to enter an apartment number? (y or n): y
	Please enter the contact's apartment number: 40
	Please enter the contact's postal code: A8A 4J4
	Please enter the contact's city: North York
	Do you want to enter a cell phone number? (y or n): Y
	Please enter the contact's cell phone number: 9051116666
	Do you want to enter a home phone number? (y or n): Y
	Please enter the contact's home phone number: 7052227777
	Do you want to enter a business phone number? (y or n): Y
	Please enter the contact's business phone number: 4163338888
	Contact Details
	---------------
	Name Details:
	First name: Tom
	Middle initial(s): L. A.
	Last name: Wong Song
	Address Details:
	Street number: 20
	Street name: Keele Street
	Apartment: 40
	Postal code: A8A 4J4
	City: North York
	Phone Numbers:
	Cell phone number: 9051116666
	Home phone number: 7052227777
	Business phone number: 4163338888
	Structure test for Name, Address, and Numbers Done!
*/
