#include<stdio.h>
//int main()
//{
//	int a = 4;
//	char* p = &a;
//	printf("%d", *p);
//		return 0;
//}

//ָ�������--ָ������1
//ָ�����;�����ָ�����ͽ����ò���ʱ�ܹ����ʿռ�Ĵ�С
//int *p �ܹ�����4���ֽ�
//char*p�ܹ�����1���ֽ�
//double *p �ܹ�����8���ֽ�
//ָ��+-����
//ָ�����;�����ָ��һ���߶�Զ--ָ������2
//int *p+1-->4����һ������
// printf("%p",cp+1);
//char *p+1-->1����һ���ַ�
//double *p+1-->8


//Ұָ��
//1.ָ��δ��ʼ��
//ָ��Խ�����
//ָ��ָ��Ŀռ䱻�ͷ�
//int main()
//{
//	int i = 0;
//	//int a;//δ��ʼ��int a =0;
//	//int* p = &a;//�ֲ�ָ������ᵼ�³�ʼ����ַ���ֵ--Ұָ��
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (i = 0; i < 11; i++)//����arr�ڴ淶Χ��ΪҰָ��
//	{
//		p++;
//	}
//
//	return 0;
//}
//int* cp = NULL;//NULL������ָ�븳ֵ����ʼ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;//�ض��˷�������ָ������Ҫ��ʼ��;
//	if (pa != NULL)
//	{
//
//	}
//
//
//
//	return 0;
//}
//ָ�����㣺ָ��+-������ָ��+-ָ�룺�õ�ָ����ָ��֮���м��Ԫ�ظ���;ָ���ϵ����
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* cp = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz/2; i++)
//	{
//		printf("%d ", *cp);
//		*cp+=2;
//
//	}
//	printf("%d", &arr[9] - &arr[0]);
//
//	return 0;
//}
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d", len);
//
//
//
//
//	return 0;
//}
//��׼�涨������ָ�������ָ����ָ���������ָ�������ڴ�ָ��Ƚϣ�����������ָ�������һ��ָ��ǰ���Ǹ��ڴ�ָ��Ƚ�
//&������-������ȡ��������������ĵ�ַ��sizeof����������-������ȡ��������������Ĵ�С
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf(" %d ",  *(p + i));
//
//	}
//	return 0;
//}
//����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	int*** pppa = &ppa;//����ָ��
//
//	return 0;
//}
//ָ������-����-���ָ�������
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	//����ָ��-ָ��
	//����ָ��
	//����ָ��
	//�ַ�ָ��
	/*int arr[] = "10";*/
	int* arr2[3] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d", *(arr2[i]));
	}
	return 0;
}