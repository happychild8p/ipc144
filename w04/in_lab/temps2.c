//==============================================
// Name:           Heedong Yang
// Student Number: 146191168	
// Email:          hyang117@myseneca.ca
// Section:        NSA
// Workshop:       4 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:
#include <stdio.h>

int main()
{
	int n_day, i;
	int a_high[10];
	int a_low[10];

	printf("---=== IPC Temperature Calculator V2.0 ===---\n");
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &n_day);
	while (n_day < 3 || n_day > 10)
	{
		printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &n_day);
		printf("\n");
	}
	for (i = 0; i < n_day; i++)
	{
		printf("Day %d - High: ", i + 1);
		scanf("%d", &a_high[i]);	
		printf("Day %d - Low: ", i + 1);
		scanf("%d", &a_low[i]);
	}
	printf("\nDay  Hi  Low\n");
	for (i = 0; i < n_day; i++)
		printf("%d %4d %5d\n", i + 1, a_high[i], a_low[i]);
	
	return 0;
}
