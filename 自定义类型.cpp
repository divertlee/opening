//#include<Stdio.h>
//#include <stddef.h> 
////�ṹ��
////struct stu//�ṹ�嶨��
////{
////	int age;
////	char name;
////	//��Ա�б�
////} s1,s2;//ȫ�ֱ���//�ṹ�����//s1��s2��struct stu�ı���
////int main()
////
////{
////	struct stu s3;//�ֲ�����
////	return 0;
////}
////struct stu
////{
////	int age;
////	char name;
////}arr[20];//��������20�������Ľṹ��, *p//ָ��ָ��ṹ��;
//////�����ṹ������-ֻ����һ��
//////struct
//////{
//////	char name;
//////	int age;
//////}s1;
//////�ṹ��������
////struct Node
////{
////	int data;//������
////	struct Node* next;//ָ����
////};
//////�ṹ������д��
////typedef struct Node
////{
////	int data;
////	struct Node* next;
////}Node;
////�ṹ���ʼ��
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
////�ṹ���ڴ����
////1.��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ��
////2.������ԱҪ���뵽ĳ�����֣������������������ĵ�ַ��
////3.��������������Ĭ�ϵ�һ������������ó�Ա��С�Ľ�Сֵ-vsĬ��Ϊ8
////4.�ṹ���ܴ�СΪ����������ÿ����Ա��������һ������������������
////5.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ��������С������������������Ƕ�׽ṹ��Ķ���������������
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
//	//offsetof(���ͣ���Ա��(����ƫ������
//	printf("%d", offsetof(struct s1, c1));
//	return 0;
//}