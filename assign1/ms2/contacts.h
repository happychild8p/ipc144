//==========================================
// Name:					 Heedong Yang
// Student Number: 146191168
// Email:					 hyang117@myseneca.ca
// Section:				 NSA
// Date:				 	 10/18/2019
// =========================================
// Assignment:		 1
// Milestone:			 1
// =========================================

// Structure type Name declaration

struct Name {
				char firstName[31];
				char middleInitial[7];
				char lastName[36];
};

// Structure type Address declaration
// Place your code here...

struct Address {
				int streetNumber;
				char street[41];
				int apartmentNumber;
				char postalCode[8];
				char city[41];
};

// Structure type Numbers declaration
// Place your code here

struct Numbers {
				char cell[11];
				char home[11];
				char business[11];
};
