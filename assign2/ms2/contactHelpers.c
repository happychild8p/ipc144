//==============================================
// Name:           Full name here
// Student Number: #########
// Email:          userID@myseneca.ca
// Section:        XXX
// Date:           
//==============================================
// Assignment:     2
// Milestone:      2
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contactHelpers.h"
#include "contacts.h"

// This source file needs to "know about" the functions you prototyped
// in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:


//--------------------------------
// Function Definitions
//--------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+


// Clear the standard input buffer
void clearKeyboard(void)
{
    while (getchar() != '\n')   ; // empty execution code block on purpose
}

// pause function definition goes here:
void pause() {
	printf("(Press Enter to Continue)");
	clearKeyboard();
}

// getInt function definition goes here:
int getInt() {
	int value;
	char NL = 'x';

	scanf("%d%c", &value, &NL);

	while (NL != '\n') {
			scanf("%d%c", &value, &NL);
			if (NL != '\n') {
				printf("*** INVALID INTEGER *** <Please enter an integer>: ");
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
	int done = 0;

	scanf("%c%c", &response, &NL);

	while ((NL != '\n') && ((response != 'Y') || (response != 'y') || (response != 'N') || (response != 'n'))) {
		clearKeyboard();
		printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
		scanf("%c%c", &response, &NL);
	}
		if ((response == 'Y') || (response == 'y')) {
			done = 1;
		}
		else if ((response == 'N') ||( response == 'n')) {
			done = 0;
		}
	return done;
}

// menu function definition goes here:
int menu() {
	int answer;

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
	
	answer = getIntInRange(0, 6);

	return answer;
}

// contactManagerSystem function definition goes here:
void contactManagerSystem() {

	int response, exit = 0;
	
		do {
		//printf("\n");
		response = menu();

		if (response == 1) {
			printf("\n<<< Feature 1 is unavailable >>>\n\n");
			pause();
		}
		else if (response == 2) {
			printf("\n<<< Feature 2 is unavailable >>>\n\n");
			pause();
		}
		else if (response == 3) {
			printf("\n<<< Feature 3 is unavailable >>>\n\n");
			pause();
		}
		else if (response == 4) {
			printf("\n<<< Feature 4 is unavailable >>>\n\n");
			pause();
		}
		else if (response == 5) {
			printf("\n<<< Feature 5 is unavailable >>>\n\n");
			pause();
		}
		else if (response == 6) {
			printf("\n<<< Feature 6 is unavailable >>>\n\n");
			pause();
		}
		else if (response == 0) {

			printf("\nExit the program? (Y)es/(N)o: ");
			exit = yes();
			
			if (exit == 1)
				printf("\nContact Management System: terminated");
		}
		printf("\n");
	} while (exit != 1); 
}
