#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//���ٶ�̬�ڴ�ռ���ֵ�����
// 1.����ֱ�ӽ����ã�����������ָ��p��NULL���飩
// 2.�Զ�̬���ٿռ��Խ�����
// //3.�ԷǶ�̬���ٿռ����free�ͷ�
//4.ʹ��free�ͷ�һ���ֶ�̬���ٿռ�-ֻ�ܿռ俪ͷ��ʼ�ͷ�
// 5.��ͬһ�춯̬�ڴ������ͷ�
// 6.��̬�����ڴ������ͷţ��ڴ�й¶��
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	*p = 20;//1.����ֱ�ӽ����ã�����������ָ��p��NULL���飩
//	free(p);
//	p = NULL;
//	return 0;
//}
//2.�Զ�̬���ٿռ��Խ�����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%d", strerror(errno));
//	}
//	*p = 20;
//	free(p);
//	p = NULL;
//	return 0;
//}
//3.�ԷǶ�̬���ٿռ����free�ͷ�
//4.ʹ��free�ͷ�һ���ֶ�̬���ٿռ�-ֻ�ܿռ俪ͷ��ʼ�ͷ�
//int main()
//{
//	printf("hello world\n");
//
//	return 0;
//}




//��������
//struct S
//{
//	int n;
//	int arr[];//���������Ա
//};
//int main()
//{
//	int sz = sizeof(struct S);//�������鲢�޷��䵽�ڴ�-ֻ��n���ڴ�-4���ֽ�
//	printf("%d ", sz);
//	//���������ʹ��
//
//
//	return 0;
//}




//�ļ�����
// ʲô���ļ�-Ӳ���ϵ��ļ�
//�����ļ�����׺Ϊ:Դ�ļ�.c�� Ŀ���ļ���windows������׺.obj������ִ���ļ���windows�����º�׺Ϊ.exe��
//�����ļ�������������Ҫ���ж�ȡ���ݵ��ļ�����������ݵ��ļ�
//�ļ������ļ���ʶ�����ļ�·��+�ļ�������+�ļ���׺
//�ļ�ָ��FILE
//���ļ�ʱ-�����ڴ洴��һ���ļ���Ϣ��-FILE����-��¼�ļ�������ǰ״̬
#include<errno.h>
//int main()
//{
//	//���ļ�
//	FILE*pf= fopen("test.c", "r");//�Զ�����ʽ��
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");//'w'д�ļ�-д�ַ�
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//���ļ�
//
//	//д�ļ�
//	fputc('a', pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");//'r'���ļ�-���ַ�
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//���ļ�
//
//	//���ļ�
//	char ch = getc(pf);
//	printf("%c", ch);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");//'w'д�ļ�-дһ������
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//���ļ�
//
//	//дһ������-���ļ�ԭ����������-�����
//	fputs("hello i\n", pf);
//	fputs("hello i", pf);
//	
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");//'r'���ļ�-��һ������
//	if (pf == NULL)
//	{
//		/*printf("%s\n", strerror(errno));*/
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//
//	//��һ������
//	char arr[20];
//	fgets(arr, 20, pf);//��ĩβ���'\0'-����\n����\0��ֹͣ
//	printf("%s\n", arr);
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	int score;
//};
//int main()
//{
//	struct S s = { "zhangshan",18,200 };
//
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");//'w'д�ļ�
//	if (pf == NULL)
//	{
//		/*printf("%s\n", strerror(errno));*/
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//
//	//д�ļ�
//
//	fprintf(stdout,"%s %d %d", s.name, s.age, s.score);//fprint-���������-stdout-��Ļ-ֱ���������Ļ-��ӡ����Ļ
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	struct S s = {0};
//
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");//'r'���ļ�
//	if (pf == NULL)
//	{
//		/*printf("%s\n", strerror(errno));*/
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//
//	//���ļ�
//
//	fscanf(pf,"%s %d %d ",s.name,&(s.age),&(s.score));
//	printf("%s %d %d", s.name, s.age, s.score);
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//�κ�һ��c������������Ĭ�ϴ�������
//stdin(��������-����
//stdout���������-��Ļ
//stderr����������-��Ļ

//struct S
//{
//	char name[20];
//	int age;
//	int score;
//};

//int main()
//{
//	struct S s = { "zhangsan",20,180 };
//	//���ļ�//�Զ�������ʽд���ļ�
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//	//�Զ�������ʽд
//	fwrite(&s, sizeof(struct S), 1, pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { "zhangsan",20,180 };
//	//���ļ�//�Զ�������ʽ�����ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//�Զ�������ʽ��
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %d", s.name, s.age, s.score);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//
//
//sprintf:
//sscanf
//struct S
//{
//	char name[20];
//	int age;
//	int score;
//};
//
//int main()
//{
//struct S s{"zhangsan",18,200 };
//struct S tmp = { 0 };
//char buf[100] = { 0 };
////��s�еĸ�ʽ������ת�����ַ����ŵ�buf��
//sprintf(buf, "%s %d %d", s.name, s.age, s.score);
//
// printf("%s\n", buf);//���ַ�����ʽ��ӡ
// //��buf���ַ�����ʽ������ת��Ϊ��ʽ�����ݷŵ�tmp��
// sscanf(buf, "%s %d %d", tmp.name, &(tmp.age), &(tmp.score));
// printf("%s %d %d", tmp.name, tmp.age, tmp.score);
//	 return 0;
//}

int main()
{
	FILE* pf = fopen("test.txt", "r");//���ļ�
	if (pf == NULL)
	{
		perror("fopen fail");
		return 1;
	}
	
	//���ļ�
	//��λ�ļ�ָ��
	fseek(pf, 2, SEEK_SET);//SEEK_SET-�ӿ�ͷ��-�����ļ�ָ��ָ����һ��
	char ch = fgetc(pf);
	printf("%c\n", ch);//c
	printf("%d\n", ftell(pf));//�ַ�ƫ����-abcdefg-3-�ļ�ָ���a��ʼ-һ��ʼƫ����Ϊ1
	fseek(pf, 2, SEEK_CUR);//SEEK_CUR-�����ڵĵط���-�����ļ�ָ��ָ����һ��
	char cu = fgetc(pf);
	printf("%c\n", cu);//f
	printf("%d\n", ftell(pf));//�ַ�ƫ����-abcdefg-6-�ļ�ָ���a��ʼ-һ��ʼƫ����Ϊ1
	fseek(pf, -3, SEEK_END);//SEEK_END-��ĩβ��-�����ļ��ļ�ָ��ͣ��-����ָ����ǰһ��
	char ca = fgetc(pf);
	printf("%c\n", ca);//e
	printf("%d\n", ftell(pf));//�ַ�ƫ����-abcdefg-5-�ļ�ָ���\0��ʼ
	rewind(pf);//�ļ�ָ��ص���ͷ
	char cc = fgetc(pf);
	printf("%c\n", cc);//a


	//�ر��ļ�
	fclose(pf);
	free(pf);
	pf = NULL;
	return 0;
}