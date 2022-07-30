#include<stdio.h>
//void bubble_sort(int* arr, int l)//√∞≈›≈≈–Ú
//{
//	int j = 0;
//	int i = 0;
//	
//	for (i = 0; i < l - 1; i++)
//	{
//		for (j = 0; j < l - 1 - i; j++)
//		{
//
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,7,4,8,3 };
//	int a = 0;
//	int length = sizeof(arr) / sizeof(arr[0]);
//	for (a = 0; a < length; a++)
//	{
//		printf("%d ", arr[a]);
//	}
//	printf("\n");
//	bubble_sort(arr,length);
//	for (a = 0; a < length; a++)
//	{
//		printf("%d ", arr[a]);
//	}
//	return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf_s("%d", &n);
//    printf("\n");
//    int arr[] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        scanf_s("%d ", &arr[i]);
//
//    }
//    printf("\n");
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    printf("\n");
//    printf("%d", (arr[n - 1] - arr[0]));
//
//    return 0;
//}
