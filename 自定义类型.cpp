//#include<Stdio.h>
//#include <stddef.h> 
////结构体
////struct stu//结构体定义
////{
////	int age;
////	char name;
////	//成员列表
////} s1,s2;//全局变量//结构体变量//s1，s2是struct stu的变量
////int main()
////
////{
////	struct stu s3;//局部变量
////	return 0;
////}
////struct stu
////{
////	int age;
////	char name;
////}arr[20];//数组里有20个这样的结构体, *p//指针指向结构体;
//////匿名结构体类型-只能用一次
//////struct
//////{
//////	char name;
//////	int age;
//////}s1;
//////结构题自引用
////struct Node
////{
////	int data;//数据域
////	struct Node* next;//指针域
////};
//////结构体其他写法
////typedef struct Node
////{
////	int data;
////	struct Node* next;
////}Node;
////结构体初始化
////struct rgb
////{
////	int red;
////	int green;
////	int blue;
////	
////};
////struct stu
////{
////	int age;
////	char name[20];
////	struct rgb r4;
////};
////int main()
////{
////	stu g1 = { 20,"sz",{20,30,46} };
////	printf("%d %s %d %d %d", g1.age, g1.name, g1.r4.blue, g1.r4.green, g1.r4.red);
////	return 0;
////
////}
////结构体内存对齐
////1.第一个成员在与结构体变量偏移量为0的地址处
////2.其他成员要对齐到某个数字（对齐数）的整数倍的地址处
////3.对齐数：编译器默认的一个对齐数于与该成员大小的较小值-vs默认为8
////4.结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍
////5.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小是所有最大对齐数（含嵌套结构体的对齐数）的整数倍
//struct s1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct s2
//{
//	char arr;
//	struct s1;
//	int age;
//};
//int main()
//{
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(s2));
//	//offsetof(类型，成员）(返回偏移量）
//	printf("%d", offsetof(struct s1, c1));
//	return 0;
//}