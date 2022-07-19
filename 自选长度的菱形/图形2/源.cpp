#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	for (;;)
	{
		int a = 0;
		printf("请设置菱形边长a");
		scanf_s("%d", &a);
		for (int i = 0; i < a; i++)
		{
			for (int l = 0; l < (a - i - 1); l++)
			{
				printf(" ");
			}
			printf("/");
			for (int l = 0; l < 2 * i; l++)
			{
				printf(" ");
			}
			printf("\\");
			for (int l = 0; l < (a - i - 1); l++)
			{
				printf(" ");
			}
			printf("\n");

		}
		for (int i = 0; i < a; i++)
		{
			for (int l = 0; l < i; l++)
			{
				printf(" ");
			}
			printf("\\");
			for (int l = 0; l < 2 * (a - i - 1); l++)
			{
				printf(" ");
			}
			printf("/");
			for (int l = 0; l < i; l++)
			{
				printf(" ");
			}
			printf("\n");

		}
	}
	/*int a = 0;
	printf("请设置菱形边长a");
	scanf_s("%d", &a);
	for (int i = 0; i < a; i++)
	{
		for (int l = 0; l < (a - i - 1); l++)
		{
			printf(" ");
		}
		printf("/");
		for (int l = 0; l < 2 * i; l++)
		{
			printf(" ");
		}
		printf("\\");
		for (int l = 0; l < (a - i - 1); l++)
		{
			printf(" ");
		}
		printf("\n");

	}
	for (int i = 0; i < a; i++)
	{
		for (int l = 0; l < i; l++)
		{
			printf(" ");
		}	
		printf("\\");
		for (int l = 0; l < 2 * (a - i - 1); l++)
		{
			printf(" ");
		}
		printf("/");
		for (int l = 0; l < i; l++)
		{
			printf(" ");
		}
		printf("\n");

	}*/
	//for (int i = 0, j = 0, k = 0;i < 1; i++)
	//{
	//	for (int l = 0;i < a - 1;i++)
	//	{
	//		printf(" ");
	//	}
	//	printf("\\/\n");
	//}
	system("pause");
	return 0;
}