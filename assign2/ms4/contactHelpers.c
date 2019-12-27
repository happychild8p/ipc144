//==============================================
// Name:           Heedong Yang	
// Student Number: 146191168
// Email:          hyang117@myseneca.ca
// Section:        NSA
// Date:           ~11/29/2019
//==============================================
// Assignment:     2
// Milestone:      4
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the SYSTEM string library functions.
// HINT: The library name is string.h.
//       #include the string.h header file on the next line:
#include "contactHelpers.h"
#include "contacts.h"
#include <string.h>
#include <ctype.h>
// -------------------------------
// Include your contactHelpers header file on the next line:



// -------------------------------
// define MAXCONTACTS for sizing contacts array (5):
#define MAXCONTACTS 5


//--------------------------------
// Function Definitions
//--------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        function definitions below...            |
// +-------------------------------------------------+
void clearKeyboard()
{
	while (getchar() != '\n'); // empty execution code block on purpose
}

// pause function definition goes here:
void pause() {
	printf("(Press Enter to Continue)\n");
	clearKeyboard();
}

// getInt function definition goes here:
int getInt() {
	int value;
	char NL = 'x';

				scanf("%d%c", &value, &NL);
				if (NL != '\n') {
						clearKeyboard();
				}
	while (NL != '\n') {
		printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		scanf("%d%c", &value, &NL);
		if (NL != '\n') {
			//printf("*** INVALID INTEGER *** <Please enter an integer>: ");
			clearKeyboard();
		}
	}
	return value;
	
}


// getIntInRange function definition goes here:
int getIntInRange(int min, int max) {
	int value;
	value = getInt();
	while ((value < min) || (value > max)) {
		printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
		value = getInt();
	}
	return value;
}

// yes function definition goes here:
int yes() {
	char response, NL = 'x';

	scanf("%c%c", &response, &NL);

	while ((NL != '\n') && ((response != 'Y') || (response != 'y') || (response != 'N') || (response != 'n'))) {
		clearKeyboard();
		printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
		scanf("%c%c", &response, &NL);
	}
	return (response == 'Y' || response == 'y') ? 1 : 0;
}

// menu function definition goes here:
int menu() {

	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n");
	printf("\n");
	printf("Select an option:> ");


	return getIntInRange(0, 6);
}

// contactManagerSystem function definition goes here:
void contactManagerSystem() {

	struct Contact contacts[MAXCONTACTS] =
	{ { { "Rick", { '\0' }, "Grimes" },
	{ 11, "Trailer Park", 0, "A7A 2J2", "King City" },
	{ "4161112222", "4162223333", "4163334444" } },
	{
	{ "Maggie", "R.", "Greene" },
	{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
	{ "9051112222", "9052223333", "9053334444" } },
	{
	{ "Morgan", "A.", "Jones" },
	{ 77, "Cottage Lane", 0, "C7C 9Q9", "Peterborough" },
	{ "7051112222", "7052223333", "7053334444" } },
	{
	{ "Sasha", {'\0'}, "Williams" },
	{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
	{ "9052223333", "9052223333", "9054445555" } },
	};

	int response, exit = 0;
	do {
		response = menu();
		if (response == 1) {
						displayContacts(contacts, MAXCONTACTS);
						pause();
		}
		else if (response == 2) {
			addContact(contacts, MAXCONTACTS);
			pause();
		}
		else if (response == 3) {
			updateContact(contacts, MAXCONTACTS);
			pause();
		}
		else if (response == 4) {
			deleteContact(contacts, MAXCONTACTS);
			pause();
		}
		else if (response == 5) {
			searchContacts(contacts, MAXCONTACTS);
			pause();
		}
		else if (response == 6) {
			sortContacts(contacts, MAXCONTACTS);
			pause();
		}
		else if (response == 0) {

			printf("\nExit the program? (Y)es/(N)o: ");
			exit = yes();
			//clearKeyboard();
			printf("\n");
			if (exit == 1)
				printf("Contact Management System: terminated\n");
		}
	} while (exit != 1);
}
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        empty function definitions below...      |
// +-------------------------------------------------+

/*void getTenDigitPhone(char phoneNum[]) {
	int needInput = 1, isnumber = 0;

	scanf("%10s", phoneNum);
	clearKeyboard();

	if (strlen(phoneNum) == 10) {
		int i = 0;
		for (i = 0; i < strlen(phoneNum); i++) {
			if (isdigit(phoneNum[i]) == 0) {
					needInput = 1;
			}
			else if ((isdigit(phoneNum[i]) != 0) && (i + 1) == strlen(phoneNum)) {
					needInput = 0;
			}

		}
	}
	while (needInput == 1) {
		printf("Enter a 10-digit phone number: ");
		scanf("%s", phoneNum);
		clearKeyboard();
		// (String Length Function: validate entry of 10 characters)
		if (strlen(phoneNum) == 10) {
			int i = 0;
			for (i = 0; i < strlen(phoneNum); i++) {
				if (isdigit(phoneNum[i]) == 0) {
					needInput = 1;
				}
				else if ((isdigit(phoneNum[i]) != 0) && (i + 1) == strlen(phoneNum)) {
					needInput = 0;
				}
			}
		}
	}
}*/
void getTenDigitPhone(char phoneNum[]) {
				int i, isNumber = 0, needInput = 1;

				while (needInput == 1) {
								scanf("%10s", phoneNum);
								clearKeyboard();
								isNumber = 0;	
								if (strlen(phoneNum) == 10) {
												for (i = 0; i < 10; i++) {
																if (isdigit(phoneNum[i]) != 0) {
																				isNumber++;
																}
												}
																if (isNumber == 10)
																				needInput = 0;
																else 
																			printf("Enter a 10-digit phone number: ");
												
								}
								else {
												printf("Enter a 10-digit phone number: ");
								}
								
				}
}
																				

// findContactIndex:
int findContactIndex(const struct Contact contacts[], int size, const char cellNum[]) {
	int i;

	for (i = 0; i < size; i++)
	{
		if (strcmp(contacts[i].numbers.cell, cellNum) == 0) { //matching
			return i;
		}
	}
	return -1;
}

// displayContactHeader
void displayContactHeader(void) {
	printf("\n");
	printf("+-----------------------------------------------------------------------------+\n");
	printf("|                              Contacts Listing                               |\n");
	printf("+-----------------------------------------------------------------------------+\n");
}

// displayContactFooter
void displayContactFooter(int count) {
	printf("+-----------------------------------------------------------------------------+\n");
	printf("Total contacts: %d\n\n", count);
}

// displayContact:
void displayContact(const struct Contact* contact) {
	printf(" %s ", (*contact).name.firstName);
	if (strlen((*contact).name.middleInitial) != 0)
		printf("%s ", (*contact).name.middleInitial);
	printf("%s\n", (*contact).name.lastName);
	printf("    C: %-10s   H: %-10s   B: %-10s\n", (*contact).numbers.cell, (*contact).numbers.home, (*contact).numbers.business);
	printf("       %d %s, ", (*contact).address.streetNumber, (*contact).address.street);
	if ((*contact).address.apartmentNumber > 0)
		printf("Apt# %d, ", (*contact).address.apartmentNumber);
	printf("%s, %s\n", (*contact).address.city, (*contact).address.postalCode);
}

// displayContacts:
void displayContacts(const struct Contact contacts[], int size) {
	int i, counter = 0;
	displayContactHeader();
	for (i = 0; i < size; i++) {
		if (strlen(contacts[i].numbers.cell) != 0) {
			displayContact(&contacts[i]);
			counter++;
		}
	}
	displayContactFooter(counter);
}

// searchContacts:
void searchContacts(const struct Contact contacts[], int size) {
	char phone[11];
	int index;

	printf("\nEnter the cell number for the contact: ");
	getTenDigitPhone(phone);
	index = findContactIndex(contacts, sizeof(contacts), phone);
	if (index != -1) {
		printf("\n");
		displayContact(&contacts[index]);
		printf("\n");
	}
	else {
		printf("*** Contact NOT FOUND ***\n\n");
	}
}

// addContact:
void addContact(struct Contact contacts[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		if (strlen(contacts[i].numbers.cell) == 0) {
			break;
		}
	}
	if (i == size) {
		printf("\n*** ERROR: The contact list is full! ***\n\n");
	}
	else {
		printf("\n");
		getContact(&contacts[i]);
		printf("--- New contact added! ---\n\n");
	}
}

// updateContact:
void updateContact(struct Contact contacts[], int size) {
	char cell[11];
	int index;
	int response;

	printf("\nEnter the cell number for the contact: ");
	getTenDigitPhone(cell);

	index = findContactIndex(contacts, sizeof(contacts), cell);

	if (index == -1) {
		printf("*** Contact NOT FOUND ***\n\n");
	}
	else {
		printf("\nContact found:\n");
		displayContact(&contacts[index]);
		printf("\n");
		
		printf("Do you want to update the name? (y or n): ");
		response = yes();
		if (response == 1) 
			getName(&contacts[index].name);

		printf("Do you want to update the address? (y or n): ");
		response = yes();
		if (response == 1) 
			getAddress(&contacts[index].address);
		printf("Do you want to update the numbers? (y or n): ");
		response = yes();
		if (response == 1) 
			getNumbers(&contacts[index].numbers);

		printf("--- Contact Updated! ---\n\n");
	}
}

// deleteContact:
void deleteContact(struct Contact contacts[], int size) {

	char cell[11];
	int index;
	int response;

	printf("\nEnter the cell number for the contact: ");
	getTenDigitPhone(cell);

	index = findContactIndex(contacts, sizeof(contacts), cell);

	if (index == -1) {
		printf("*** Contact NOT FOUND ***\n");
	}
	else {
		printf("\nContact found:\n");

		displayContact(&contacts[index]);
		printf("\n");

		printf("CONFIRM: Delete this contact? (y or n): ");
		response = yes();
		//printf("\n");

		if (response == 1)
		{
			contacts[index].numbers.cell[0] = '\0';
			printf("--- Contact deleted! ---\n\n");
		}
		else { 
						printf("\n");
		}
	}
}

// sortContacts:
void sortContacts(struct Contact contacts[], int size) {
	int i, j;
	struct Contact sortContact;
	
	for (i = 0; i < (size - 1); i++) {
		for (j = (i + 1); j < size; j++) {
			if (strlen(contacts[i].numbers.cell) != 0 && strlen(contacts[j].numbers.cell) > 0) {
				if (strcmp(contacts[i].numbers.cell, contacts[j].numbers.cell) > 0) {
					sortContact = contacts[i];
					contacts[i] = contacts[j];
					contacts[j] = sortContact;
				}
			}
		}
	}
	printf("\n--- Contacts sorted! ---\n\n");
}
