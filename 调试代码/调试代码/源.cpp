#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#include<assert.h>
//F5-��������-��F9���ʹ��
//F9-�ϵ�-����ֹͣ����
//F10-�����
//F11-�����
//ctrl+F5ֱ������������������
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//		
//	}
//	printf("\n");
//	int A= 0;
//	for (A = 0; A < 10; A++)
//	{
//		printf("%d", A);
//	}
//	system( "pause" );
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf_s("%d",&n);
//	for (i = 1; i <=n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", ret);
//	printf("%d", sum);
//	return 0;
//}
//ջ����Ĭ��ʹ�ã���ʹ�øߵ�ַ�Ŀռ䣬��ʹ�õ͵�ַ�Ŀռ�
//���������±����������ַ���ɵ͵��߱仯
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		*dest++;
//		*src++;
//
//	}
//	*dest = *src;
//}
//void my_strcpy(char* dest, char* src)
//{if(dest !=NULL && src != NULL)
//	while (*dest++ = *src++)
//	{
//
//		;
//
//	}
//}
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(*dest != NULL);//assert-���ԣ�Ϊ��-��������Ϊ��-����
//	assert(*src != NULL);
//	//��srcָ����ַ���������destָ��Ŀռ�ȥ
//	if (dest != NULL && src != NULL)
//		while (*dest++ = *src++)
//		{
//
//			;
//
//		}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "####";
//	char arr2[] = "bit";
//	
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//
//}
//int main()
//{
//	int n = 10;
//	int m = 100;
//const	int* p = &n;//const����*���-����*p
////*p = 0;
//p = &m;
//	printf("%d",*p);
//
//	return 0;
//}
//int main()
//{
//	int n = 10;
//	int m = 100;
//		int*const p = &n;//const����*�ұ�-����p
//	*p = 0;
//	/*p = &m;*/
//	printf("%d", *p);
//
//	return 0;
//}
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != 0)
//	{
//		count++;
//		*str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d",len);
//
//	return 0;
//}
//int main()
//{
//	int i = 5, j = 5, p, q;
//	p = (i++) + (i++) + (i++);
//	q = (++j) + (++j) + (++j);
//	printf("p=%d,q=%d,i=%d,j=%d", p, q, i, j);
//	
//	return 0;
//}
//int main()
//{
//	int a = 2;
//	int b = 4;
//	int c = 6, x, y;
//	y = ((x = a + b), (b + c));
//	printf("x=%d,y=%d", x, y);
//	 
//
//	return 0;
//}
void main()
{
	char a = 'z';
	char* Do = &a;

		
	
}