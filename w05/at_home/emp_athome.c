//==============================================
// Name:       	Heedong Yang
// Student Number: 146191168
// Email:      	hyang117@myseneca.ca
// Section:    	NSA
// Workshop:   	5 (at-home)
//==============================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// Define Number of Employees "SIZE" to be 2
#define SIZE 4
// Declare Struct Employee
struct Employee
{
	int id;
	int age;
	double salary;
};

/* main program */
int main(void)
{
	int option = 0;
	int i = 0, tmp_id, emp_id;
	int n_emp = 0;
	int exist = 0;
	int k = -1;


	// Declare a struct Employee array "emp" with SIZE elements
	// and initialize all elements to zero
	struct Employee emp[SIZE] = { {0} };
	printf("---=== EMPLOYEE DATA ===---\n\n");

	do {
		// Print the option list
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");
		// Capture input to option variable
		scanf("%d", &option);
		printf("\n");

		switch (option)
		{
		case 0:    // Exit the program
			printf("Exiting Employee Data Program. Good Bye!!!\n");
			break;

		case 1: // Display Employee Data
				// @IN-LAB
			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");

			for (i = 0; i < SIZE; i++)
			{
				if (emp[i].id > 0)
				{
					printf("%6d%9d%11.2lf", emp[i].id, emp[i].age, emp[i].salary);
					printf("\n");
				}
			}
			printf("\n");
			break;

		case 2: // Adding Employee
				// @IN-LAB
			printf("Adding Employee\n");
			printf("===============\n");

			if (n_emp >= SIZE)
			{
				printf("ERROR!!! Maximum Number of Employees Reached\n\n");
				break;
			}
			else if ((n_emp < SIZE) && (k >= 0))
			{
				printf("Enter Employee ID: ");
				scanf("%d", &emp[k].id);
				printf("Enter Employee Age: ");
				scanf("%d", &emp[k].age);
				printf("Enter Employee Salary: ");
				scanf("%lf", &emp[k].salary);
				printf("\n");
				n_emp++;
				k = -1;
			}
			else
			{
				printf("Enter Employee ID: ");
				scanf("%d", &emp[n_emp].id);
				printf("Enter Employee Age: ");
				scanf("%d", &emp[n_emp].age);
				printf("Enter Employee Salary: ");
				scanf("%lf", &emp[n_emp].salary);
				printf("\n");
				n_emp++;
			}
			// Check for limits on the array and add employee
			// data accordingly.
			break;
		case 3: //Update Salary
			exist = 0;

			printf("Update Employee Salary\n");
			printf("======================\n");
			do
			{
				printf("Enter Employee ID: ");
				scanf("%d", &tmp_id);
				for (i = 0; i < SIZE; i++)
				{
					if (tmp_id == emp[i].id)
					{
						printf("The current salary is %.2lf\n", emp[i].salary);
						printf("Enter Employee New Salary: ");
						scanf("%lf", &emp[i].salary);
						printf("\n");
						exist = 1;
					}
				}
				if (exist == 0)
					printf("*** ERROR: Employee ID not found! ***\n");
			} while (exist == 0);
			break;

		case 4: //Remove Employee

			exist = 0;

			printf("Remove Employee\n");
			printf("===============\n");
			do
			{
				printf("Enter Employee ID: ");
				scanf("%d", &emp_id);
				for (i = 0; i < SIZE; i++)
				{
					if (emp_id == emp[i].id)
					{
						printf("Employee %d will be removed\n\n", emp_id);
						emp[i].id = 0;
						emp[i].age = 0;
						emp[i].salary = 0.0;
						exist = 1;
						k = i;
						n_emp--;
					}
				}
				if (exist == 0)
					printf("*** ERROR: Employee ID not found! ***\n");
			} while (exist == 0);
			break;
		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}

	} while (option != 0);

	return 0;
}
