//�ṹ����һЩֵ�ļ���
#include<stdio.h>
////struct �ṹ�����֡���stu-��ǩ  struct stu-�ṹ������//typedef-��ȡ����
//// struct stu
////{//��Ա����
////	char name[20];
////	short age;
////	char sex[];
////}s1,s2,s3;//s1,s2,s3-�ṹ�����
//// int main()
//// {
////	 struct stu s1 = {123};
////	 return 0;
//// }
////typedef struct stu
////{//��Ա����
////	char name[20];
////	short age;
////	char sex[];
////}stu;//������stu-����
////int main()
////{
////	stu s1 = {"����",20,"��"};
////
////
////	return 0;
////}
//struct a
//{
//	int v;
//	char f[20];
//	
//};
//struct b
//{
//	char r[10];
//	struct a a;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hellobit\n";
//	struct b B= { "hehe",{10,"haha",},arr};
//	printf("%s\n", B.r);
//	printf("%s\n", B.pc);
//	printf("%d\n", B.a.v);
//	return 0;
//}
typedef struct stu
{//��Ա����
	char name[20];
	short age;
	char sex[];
}stu;
void print1(stu tmp)
{
	printf("name=%s\n", tmp.name);
	printf("sex=%s\n", tmp.sex);
	printf("age=%d", tmp.age);

}
void print2(stu* s)
{
	printf("%s\n", s->name);
	printf("%s\n", s->sex);
	printf("%d\n", s->age);
}
int main()
{
	stu s = {"����",20,"��"};
	print1(s);
	print2(&s);
	return 0;
}