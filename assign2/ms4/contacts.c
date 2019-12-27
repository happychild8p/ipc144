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
#include "contactHelpers.h"
#include "contacts.h"
// +-------------------------------------------------+
// | NOTE:  Include additional header files...       |
// +-------------------------------------------------+

void clearKeyboard();

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        source code below...                     |
// +-------------------------------------------------+
void getName(struct Name* name) {
	int answer;

	printf("Please enter the contact's first name: ");
	scanf("%30[^\n]", (*name).firstName);
	clearKeyboard();
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	answer = yes();
	//clearKeyboard();
	if (answer == 1) {
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6[^\n]", (*name).middleInitial);
		clearKeyboard();
	}
	else {
		(*name).middleInitial[0] = '\0';
	}
	printf("Please enter the contact's last name: ");
	scanf("%35[^\n]", (*name).lastName);
	clearKeyboard();
}


// getAddress:
void getAddress(struct Address* address) {
	int answer;

	printf("Please enter the contact's street number: ");
	(*address).streetNumber = getInt();
	while ((*address).streetNumber < 0) {
		printf("*** INVALID STREET NUMBER *** <must be a positive number>: ");
		(*address).streetNumber = getInt();
	}

	printf("Please enter the contact's street name: ");
	scanf("%40[^\n]", (*address).street);
	clearKeyboard();
	printf("Do you want to enter an apartment number? (y or n): ");
	answer = yes();

	if (answer == 1)
	{
		printf("Please enter the contact's apartment number: ");
		//scanf("%d", &(*address).apartmentNumber);
		//clearKeyboard();
		(*address).apartmentNumber = getInt();
		while ((*address).apartmentNumber < 0) {
			printf("*** INVALID APARTMENT NUMBER *** <must be a positive number>: ");
			(*address).apartmentNumber = getInt();
		}
	}
	printf("Please enter the contact's postal code: ");
	scanf("%7[^\n]", (*address).postalCode);
	clearKeyboard();

	printf("Please enter the contact's city: ");
	scanf("%40[^\n]", (*address).city);
	clearKeyboard();
}


// getNumbers:
// HINT:  Update this function to use the new helper 
//        function "getTenDigitPhone" where applicable
void getNumbers(struct Numbers* number) {
	int answer;
	//char Phone[11];
	printf("Please enter the contact's cell phone number: ");
	getTenDigitPhone((*number).cell);

	printf("Do you want to enter a home phone number? (y or n): ");
	answer = yes();

	if (answer == 1) {
		printf("Please enter the contact's home phone number: ");
		getTenDigitPhone((*number).home);
	}
	else {
					(*number).home[0] = '\0';
	}
	printf("Do you want to enter a business phone number? (y or n): ");
	answer = yes();

	if (answer == 1) {
		printf("Please enter the contact's business phone number: ");
		getTenDigitPhone((*number).business);
	}
	else {
					(*number).business[0] = '\0';
	}

}


// getContact
void getContact(struct Contact* contact) {
	struct Contact mycontact = { {"","",""} ,{0,"",0,"",""} ,{"","",""} };

	getName(&mycontact.name);
	getAddress(&mycontact.address);
	getNumbers(&mycontact.numbers);

	*contact = mycontact;
}
