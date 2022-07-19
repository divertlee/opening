#include<stdio.h>
int main()
{
	int n = 0;
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			if (i == j)
			{
				arr[i][j] = 1;
			}
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 9 - i; n++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{

			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}