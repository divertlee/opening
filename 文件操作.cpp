#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//��������-�ṹ�����һ��Ԫ��������δ֪��С�����飬����������������Ա
// struct s
//{
//	int i;
//	int arr[];//���������Ա
//};
// struct stu1
//{
//	int i;
//	int arr[0];//���������Ա
//};
////���������ص�
////1.���������Աǰ����������һ����Ա
////2.sizeof������ڴ��С�����������������С
////3. �������������Ա�Ľṹ��malloc�������������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С
//int main()
//{
//	 struct s s1;
//	printf("%d", sizeof(s1));
//	struct S* ps = (struct S*)malloc(sizeof(struct s) + 40);
//	if (ps == NULL)
//	{
//		printf("%d", strerror(errno));
//		return 1;
//	}
//	
//	free(ps);
//
//	return 0;
//}
//struct S
//{
//	int n;
//	int arr[];
//};
//int main()//����1
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
//	if (ps == NULL)
//	{
//		printf("%d", strerror(errno));
//		return 1;
//	}
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", ps->arr[i]);
//	}
//	struct S* pr = (struct S*)realloc(ps, sizeof(struct S) + 80);//����
//	free(ps);
//	ps == NULL;
//	return 0;
//}
////struct A
////{
////	int n;
////	int* arr;
////};
//int main()//����2
//{
//	struct A*ps = (struct A*)malloc(sizeof(struct A));
//	if (ps == NULL)
//	{
//		printf("%d", strerror(errno));
//		return 1;
//	}
//	ps->n = 100;
//	ps->arr = (int*)malloc(40);
//	if (ps->arr == NULL)
//	{
//		printf("%d", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	int* ptr = (int*)realloc(ps->arr, 80);//����
//	free(ps->arr);//�ͷ�
//		free(ps);
//		ps = NULL;
//	return 0;
//}
//��һ���������ţ������ڴ��ͷţ������ڷ����ٶȣ������ڴ���Ƭ
//Ϊʲôʹ���ļ�
//ʲô���ļ�
//�ļ��Ĵ򿪺͹ر�
//�ļ���˳���д
//�ļ��������д
//�ı��ļ��Ͷ������ļ�
//�ļ���ȡ�������ж�
//�ļ�������
//Դ�ļ������׺.cĿ���ļ���windows������׺Ϊ.obj),��ִ�г���windows������׺Ϊ.exe)
//�ļ������ļ�·��+�ļ�������+�ļ���׺
//�ļ�ָ�룺FLIE*pf;
// 
//
//#include<errno.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	FILE* pf1 = fopen("C:\\Users\\86176\\Desktop\\�ޱ���.png", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	if (pf1 == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//���ļ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	fclose(pf1);
//	pf1 = NULL;
//	
//	return 0;
//}