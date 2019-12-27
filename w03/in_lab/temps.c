//==============================================
// Name:           Heedong Yang
// Student Number: 146191168
// Email:          hyang117@myseneca.ca
// Section:        NSA
// Workshop:       3 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS
#define NUMS 3
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int high, low, day;

    printf("---=== IPC Temperature Analyzer ===---\n");

    for (day = 1; day <= NUMS; day++)
    {
        printf("Enter the high value for day %d: ", day);
        scanf("%d", &high);
        printf("\nEnter the low value for day %d: ", day);
        scanf("%d", &low);
				printf("\n");
        while (high <= low || high > 40 || low < -40)
        {
            printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
            printf("\nEnter the high value for day %d: ", day);
            scanf("%d", &high);
            printf("\nEnter the low value for day %d: ", day);
            scanf("%d", &low);
						printf("\n");
        }
    }

    return 0;
}
