#define _CRT_SECURE_NO_WARNINGS 1
#pragma one
#include<Stdio.h>
#include<string.h>
#include<stdlib.h>


#define MAX 1000//#define�����ʶ�� MAX=1000,�궨��һ�벻������
//
//int main()
//{
//
//	int i = 0;
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return EXIT_FAILURE;//���ش���
//		//return EXIT_SUCCESS;
//	}
//	for (; i < 10; i++)
//	{
//		fprintf(pf,"fixle:%s line:%d date:%s time:%s %d\n",__FILE__,__LINE__,__DATE__,__TIME__, i);
//	}
//
//	fclose(pf);
//	free(pf);
//	pf = NULL;
//	return 0;
//}

//#define PRINT��������stuff
//#define ��ʶ����������Ҫ�滻������-�궨��-������������Ҫ������ʶ��
#define PRINT(N) printf("the val of "#N" is %d",N)//#����-����������˫����Ϊ�ַ���-"����"

//int main()
//{
//
//	int a = 10;
//	PRINT(a);
//
//
//
//
//	return 0;
//}

//#if  ��#endifǶ�� 
//#if�������ʽ��Ϊ����ִ�к��棬Ϊ����������
//......
//#endif��ִ����ֹ��

//�����֧��������
//#if�������ʽ
// ......
//#elif�������ʽ
// ......
//#else
// ......
//#endif
int main()
{
#if 5>0
	printf("max\n");
#endif
	
}
