//==============================================
// Name:           Heedong Yang
// Student Number: 146191168
// Email:          hyang117@myseneca.ca
// Section:        NSA
// Workshop:       2 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Start your code below:

#include <stdio.h>

int main()
{
	double amount;
	int loonie, quarter;
	double owing;
	
	//Store the initial value
	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);

	//Calculation1
	loonie = amount;
	owing = amount - loonie;
	//Output 1
	printf("Loonies required: %d, balance owing $%.2f\n", loonie, owing);
	//Calculate remainders
	quarter = (owing / 0.25);
	owing = owing - (quarter * 0.25);

	//Output 2
	printf("Quarters required: %d, balance owing $%.2f\n", quarter, owing);

	return 0;
}
