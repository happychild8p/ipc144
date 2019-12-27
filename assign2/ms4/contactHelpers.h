//==============================================
// Name:           Full name here
// Student Number: #########
// Email:          userID@myseneca.ca
// Section:        XXX
// Date:           
//==============================================
// Assignment:     2
// Milestone:      4
//==============================================

/*----------------------------------------------------------------------
Description: This header file modularizes general helper functions to
             help reduce redundant coding for common repetitive tasks.
----------------------------------------------------------------------*/


// Hint:  This header file now has functions with parameters referring to 
//        the struct Contact type so be sure to include the contacts.h header:
#include "contacts.h"
//--------------------------------
// Function Prototypes
//--------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        function prototypes here...              |
// +-------------------------------------------------+

// Clear the standard input buffer
// clearKeyboard:
void clearkeyboard(void);

// pause:
void pause();

// getInt:
int getInt();

// getIntInRange:
int getIntInRange(int min, int max);

// yes:
int yes();

// menu:
int menu();

// contactManagerSystem:
void contactManagerSystem();

// Generic function to get a ten-digit phone number:
// getTenDigitPhone:
void getTenDigitPhone(char phoneNum[]);

// findContactIndex:
int findContactIndex(const struct Contact contacts[], int size, const char cellNum[]);

// displayContactHeader:
void displayContactHeader();

// displayContactFooter:
void displayContactFooter(int count);

// displayContact:
void displayContact(const struct Contact* contact);

// displayContacts:
void displayContacts(const struct Contact contacts[], int size);

/// searchContacts:
void searchContacts(const struct Contact contacts[], int size);

// addContact:
void addContact(struct Contact contacts[], int size);

// updateContact:
void updateContact(struct Contact contact[], int size);

// deleteContact:
void deleteContact(struct Contact contacts[], int size);

// sortContacts:
void sortContacts(struct Contact contacts[], int size);
