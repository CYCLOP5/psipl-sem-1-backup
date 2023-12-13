#include <stdio.h>

int main()
{
	int rows, copy;
	printf("Enter the number of rows");
	scanf("%d", &rows);
	copy = rows;
	printf("Pattern 16: \n");
	for (int j = 1; j <= rows; j++)
	{
		for (int spaces = 1; spaces <= rows - j; spaces++)
			printf(" ");
		for (int i = 1; i <= j; i++)
			printf("*");
		printf("\n");
	}
	printf("\n \n");
	printf("Pattern 2: \n");
	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= copy - 1; j++)
		{
			printf(" ");
		}

		for (int k = 1; k <= 2 * i - 1; k++)
		{
			printf("*");
		}

		copy--;

		printf("\n");
	}
	printf("\n \n");
	printf("Pattern 3: \n");
	copy = rows;
	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= copy - 1; j++)
		{
			printf(" ");
		}

		char letters = 'A';
		for (int k = 1; k <= i; k++)
		{
			printf("%c", letters);
			letters++;
		}

		letters -= 2;
		for (int s = 1; s <= i - 1; s++)
		{
			printf("%c", letters);
			letters--;
		}
		copy--;
		printf("\n");
	}

	return 0;
}
