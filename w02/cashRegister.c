//==============================================
// Name:           Heedong Yang
// Student Number: 146191168
// Email:          hyang117@myseneca.ca
// Section:        NSA
// Workshop:       2 (at_home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Start your code below:

#include <stdio.h>

int main()
{
	int n_loonie, n_quarter, n_dime, n_nickel, n_penny;
	int quarter = 25, dime = 10, nickel = 5;
	double GST, amount, owing;

	//Store the initial value
	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);

	//Assign value for GST
	GST = (amount * 0.13) + 0.005;
	amount = amount + GST;
	printf("GST: %.2f\n", GST);
	printf("Balance owing: $%.2f\n", amount);

	//Initial Calculation, Output 1
	n_loonie = amount;
	owing = (amount - n_loonie) * 100;
	printf("Loonies required: %d, balance owing $%.2f\n", n_loonie, (owing/100));

	//Calculate remainders, Output 2(Q)
	n_quarter = owing / quarter;
	owing = (int)owing % quarter;
	printf("Quarters required: %d, balance owing $%.2f\n", n_quarter, (owing / 100) );
	
	//Calculate remainders, Output 3(D)
	n_dime = (owing / dime);
	owing = (int)owing % dime;
	printf("Dimes required: %d, balance owing $%.2f\n", n_dime, (owing / 100));

	//Calculate remainders, Output 4(N)
	n_nickel = (owing / nickel);
	owing = (int)owing % nickel;
	printf("Nickels required: %d, balance owing $%.2f\n", n_nickel, (owing / 100) );
	//Calculate remainders
	n_penny = owing;
	owing = 0.0;
	printf("Pennies required: %d, balance owing $%.2f\n", n_penny, owing);
	
	return 0;
}
