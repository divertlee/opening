#define _CRT_SECURE_NO_WARINGS 1
#pragma 
// ����
#define MAX 1000//1000����Ա
#define MAX_NAME 20//����20���ֽ�
#define MAX_SEX 5//�Ա�5���ֽ�
#define MAX_TELE 12//�绰12���ֽ�
#define MAX_ADD 20//סַ20���ֽ�
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
enum Option//ö��ѡ��
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	ShowSORT
};
struct people//��Ա�ṹ�������
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char add[MAX_ADD];
};

struct Contact
{
	struct people data[MAX];//���һ���˵���Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�أ�����������
};
//��������
//��ʼ��ͨѶ¼
void InitContact(struct Contact *ps);
//����һ��Ԫ�ص�ͨѶ¼
void AddContact(struct Contact* ps);
//��ӡͨѶ¼����Ϣ
void ShowContact(const struct Contact*ps);
//ɾ��ָ������ϵ��
void DelContact(struct Contact* ps);
//������ϵ��
void SearchContact(struct Contact* ps);
//�޸�ָ����ϵ��
void ModifyContact(struct Contact* ps);
//����ͨѶ¼
//void SortContact(struct Contact* ps);