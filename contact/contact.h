#define _CRT_SECURE_NO_WARINGS 1
#pragma 
// 定义
#define MAX 1000//1000个成员
#define MAX_NAME 20//名字20个字节
#define MAX_SEX 5//性别5个字节
#define MAX_TELE 12//电话12个字节
#define MAX_ADD 20//住址20个字节
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
enum Option//枚举选项
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	ShowSORT
};
struct people//成员结构体的声明
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char add[MAX_ADD];
};

struct Contact
{
	struct people data[MAX];//存放一个人的信息
	int size;//记录当前已经有的元素（人数）个数
};
//声明函数
//初始化通讯录
void InitContact(struct Contact *ps);
//增加一个元素到通讯录
void AddContact(struct Contact* ps);
//打印通讯录的信息
void ShowContact(const struct Contact*ps);
//删除指定的联系人
void DelContact(struct Contact* ps);
//搜索联系人
void SearchContact(struct Contact* ps);
//修改指定联系人
void ModifyContact(struct Contact* ps);
//排序通讯录
//void SortContact(struct Contact* ps);