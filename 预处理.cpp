#define _CRT_SECURE_NO_WARNINGS 1
#pragma one
#include<Stdio.h>
#include<string.h>
#include<stdlib.h>


#define MAX 1000//#define定义标识符 MAX=1000,宏定义一半不带符号
//
//int main()
//{
//
//	int i = 0;
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return EXIT_FAILURE;//返回错误
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

//#define PRINT（参数）stuff
//#define 标识符（参数）要替换的内容-宏定义-参数的左括号要紧贴标识符
#define PRINT(N) printf("the val of "#N" is %d",N)//#参数-给参数套上双引号为字符串-"参数"

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

//#if  和#endif嵌套 
//#if常量表达式（为真则执行后面，为假则跳过）
//......
//#endif（执行终止）

//多个分支条件编译
//#if常量表达式
// ......
//#elif常量表达式
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
