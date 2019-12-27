//==========================================
// Name:				 Heedong Yang
// Student Number:		 146191168
// Email:				 hyang117@myseneca.ca
// Section:				 NSA
// Date:			 	 11/08/2019
// =========================================
// Assignment:			 1
// Milestone:			 3
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
// Structure type Contact declaration
// Place your code here
struct Contact {
				struct Name name;
				struct Address address;
				struct Numbers numbers;
};
// Function Prototypes
// Milestone 4
// Define Prototype only
void getName(struct Name *);
void getAddress(struct Address *);
void getNumbers(struct Numbers *);

