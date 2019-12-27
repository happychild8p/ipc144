//==============================================
// Name:           Heedong Yang
// Student Number: 146191168	
// Email:          hyang117@myseneca.ca
// Section:        NSA
// Workshop:       4 (at_home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:
#include <stdio.h>

int main()
{
	int n_day, i, max, min, test_date;
	int sum = 0;
	int a_high[10], h_date, a_low[10], l_date;
	float avg;

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
	
	max = a_high[0];
	min = a_low[0];
	h_date = 1;
	l_date = 1;
	for (i = 0; i < n_day; i++)
	{
		if (a_high[i] > max)
		{
			max = a_high[i];
			h_date = i + 1;
		}
		if (a_low[i] < min)
		{
			min = a_low[i];
			l_date = i + 1;
		}
	}
	printf("\nThe highest temperature was %d, on day %d\n", max, h_date);
	printf("The lowest temperature was %d, on day %d\n", min, l_date);

	printf("\nEnter a number between 1 and 5 to see the average temperature for the entered number of days, enter a negative number to exit: ");
	scanf("%d", &test_date);
	
	while (1)
	{
		if (test_date < 0)
		{
			printf("\nGoodbye!\n");
			break;
		}
		else if (test_date >= 1 && test_date <= 5)
		{
			sum = 0.0;
			for (i = 0; i < test_date; i++)
				sum = sum + (a_high[i] + a_low[i]);
			avg = (float)sum / (float)(2 * test_date);
			printf("\nThe average temperature up to day %d is: %.2f\n", test_date, avg);
			printf("\nEnter a number between 1 and 5 to see the average temperature for the entered number of days, enter a negative number to exit: ");
			scanf("%d", &test_date);
		}
		else
		{
			printf("\nInvalid entry, please enter a number between 1 and 5, inclusive: ");
			scanf("%d", &test_date);
		}
	}
	return 0;
}
