//==============================================
// Name:           Heedong Yang
// Student Number: 146191168
// Email:          hyang117@myseneca.ca
// Section:        NSA
// Workshop:       3 (at_home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS
#define NUMS 4
#include <stdio.h>

int main()
{
	int high, low, day;
	int h_date, l_date, l_sum = 0, h_sum = 0, highest = -40, lowest = 40;
	float avg = 0.0, h_avg = 0.0, l_avg = 0.0;

	printf("---=== IPC Temperature Analyzer ===---\n");

	for (day = 1; day <= NUMS; day++)
	{
		printf("Enter the high value for day %d: ", day);
		scanf("%d", &high);
		printf("\nEnter the low value for day %d: ", day);
		scanf("%d", &low);
		printf("\n");

		while (high < low || (high > 40 || low < -40))
		{
			printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
			printf("\nEnter the high value for day %d: ", day);
			scanf("%d", &high);
			printf("\nEnter the low value for day %d: ", day);
			scanf("%d", &low);
			printf("\n");
		}
		if (high >= highest)
		{
			highest = high;
			h_date = day;
		}
		if (low <= lowest)
		{
			lowest = low;
			l_date = day;
		}
		h_sum = h_sum + high;
		l_sum = l_sum + low;

	}
	h_avg = (float)(h_sum / (float)NUMS);
	l_avg = (float)(l_sum / (float)NUMS);
	avg = (float)((h_sum + l_sum) / (float)(2 * NUMS));

	printf("The average (mean) LOW temperature was: %.2f\n", l_avg);
	printf("The average (mean) HIGH temperature was: %.2f\n", h_avg);
	printf("The average (mean) temperature was: %.2f\n", avg);
	printf("The highest temperature was %d, on day %d\n", highest, h_date);
	printf("The lowest temperature was %d, on day %d\n", lowest, l_date);

	return 0;
}
