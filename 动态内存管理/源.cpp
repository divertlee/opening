
#define _CRT_SECURE_NO_WARNINGS 1
#include<Stdio.h>
#include<string.h>
#include<stdlib.h>
//int main()
//{
//	int a = 10;//4个字节
//	int arr[10];//40个字节
//	return 0;
//}
//动态内存管理
//malloc
//calloc
//realoc
//free
//malloc-void*malloc(size_t size)
// 函数向内存申请一块连续可用的空间，并返回指定这块空间的指针
//1.如果开辟成功，则返回一个指向开辟好空间的指针
//2.如果开辟失败，则返回NULL指针，所以malloc的返回值要做检查
//3.返回的类型是void*，函数本身不知道开辟空间的类型，具体看使用者
//4.如果size_t为0，则malloc行为标准为未定义，取决于编译器
//int main()
//{
//{//变长数组
//	int n = 0;
//	scanf("%d", &n);
//	int arr2[n];
//	int arr[10] = { 0 };
	//动态内存开辟
//	/*int* p = (int*)malloc(INT_MAX);*///开辟内存过大会报错
//	int* p = (int*)malloc(40);//（类型为void*）malloc开辟大小位40个字节的空间，强制转换为int*，用int*来接收-以int（4个字节大小的方式来使用）
//	if (p == NULL)
//	{
//	
//		printf("%s\n", strerror(errno));//如果开辟的空间对应的int*p对应的指针为空指针，将报错
//		return 1;//c语言中正常情况返回0这里出现非常情况则返回1
//	}
//	//成功走到这即为开辟成功
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;//p为起始地址（p+i）跳过i个整形-*（p+i）找到内存中的各个元素
//		//*(p + i) = i把i赋值给各个元素
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));//打印各个元素
//	}
//	//没有free
//	//并不是说内存空间不回收，当程序退出时，系统会自动回收内存
//	
//	free(p);//释放内存
//	p = NULL;//使指针p找不回内存-保护内存
//	//malloc申请-free释放-成对出现
//	return 0;
//}
//free-用来做动态内存空间的释放和回收
//void free(void*ptr)
//如果参数ptr指向的空间不是动态内存开辟的，则free函数行为为未定义
//如果参数ptr为NULL指针，则free什么事都不做
//calloc-calloc(size_t num,size_t szie)
// calloc=malloc+memset
//1.calloc与malloc的区别-calloc在返回地址前把申请的空间的每个字节初始化为0
//2.功能为num个大小为size的元素开辟的空间，并把空间的每个元素初始化为0

	//int main()
	//{
	//	int*p=(int*)calloc(10, sizeof(int));
	//	if (p == NULL)
	//	{
	//		printf("%d\n", strerror(errno));
	//		return 1;
	//	}
	//	//打印
	//	int i = 0;
	//	//for (i = 0; i < 10; i++)
	//	//		{
	//	//			*(p + i) = i;//p为起始地址（p+i）跳过i个整形-*（p+i）找到内存中的各个元素
	//	//			*(p + i) = i;/*把i赋值给各个元素*/
	//	//		}
	//
	//	for (i = 0; i < 10; i++)
	//	{
	//		printf("%d ", *(p + i));
	//	}
	//	//释放
	//	free(p);
	//	p = NULL;
	//	return 0;
	//}
//
//realloc-void*realloc(void*ptr,size_t size)
//1.ptr是要调整内存的地址
//2.size是调整之后的大小
//3. 返回值是调整之后的内存的起始位置
//4.函数会调整原内存空间大小的基础上，把内存中的数据移到新的空间-两种情况：看第117行



//int main()
//{
//	int*p=(int*)malloc(40);//开辟类型为int的动态内存为40个字节，强制转换为int*，用int*去接收
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));//如果开辟的空间对应的int*p对应的指针为空指针，将报错
//			return 1;//c语言中正常情况返回0这里出现非常情况则返回1
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;//把i+1的值赋给元素（p+i）
//	}
//	//扩容
//	int*ptr=(int*)realloc(p, 80);//扩容起始地址为p，扩容后内存为80个字节，int类型，用新的开辟好的内存（ptr）去接收旧空间的元素
//	//扩容空间有两种情况-1.在旧空间后面紧接着添加空间来开辟新的空间，新空间（ptr*）和（p*）的起始位置一样,
//	//2.在有新空间大小的内存开辟新内存这时新开辟的空间（ptr*）与（p*）的起始位置不一样，旧空间会被释放
//	if (ptr != NULL)//判断新开辟的空间是否为空指针
//	{
//		p = ptr;//?
//	}
//	//使用
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//}
int main()
{
	realloc(NULL, 40);//这里给空指针意味着realloc跟malloc功能一样
	return 0;
}