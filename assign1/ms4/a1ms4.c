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

int main() {
	struct Contact contact = { { "", "", "" }, { 0, "", 0, "", "" }, { "", "", "" } };
	//struct Contact contact = { {0} };
	// Display the title
	printf("Contact Management System\n");
	printf("=========================\n");
	// Use functions to get the inputs
	getName(&contact.name);
	getAddress(&contact.address);
	getNumbers(&contact.numbers);

	// Display outputs
	// Display Contact Summary Details
	printf("\nContact Details\n");
	printf("===============\n");
	printf("Name Details\n");
	printf("------------\n");
	printf("First name: %s\n", contact.name.firstName);
	printf("Middle initial(s): %s\n", contact.name.middleInitial);
	printf("Last name: %s\n", contact.name.lastName);
	printf("\n");
	printf("Address Details\n");
	printf("---------------\n");
	printf("Street number: %d\n", contact.address.streetNumber);
	printf("Street name: %s\n", contact.address.street);
	printf("Apartment: %d\n", contact.address.apartmentNumber);
	printf("Postal code: %s\n", contact.address.postalCode);
	printf("City: %s\n", contact.address.city);
	printf("\n");
	printf("Phone Numbers\n");
	printf("-------------\n");
	printf("Cell phone number: %s\n", contact.numbers.cell);
	printf("Home phone number: %s\n", contact.numbers.home);
	printf("Business phone number: %s\n", contact.numbers.business);

	// Display Completion Message
	printf("\nStructure test for Contact using functions done!\n");

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
