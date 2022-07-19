#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//����ͨѶ¼���ֻ��0��Ԫ��
}
static int FindName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))//strcmp�Ƚ��ַ������Ƚ�i�±��Ա�����ֺ�����������Ƿ���ͬ
		{
			return i;//�ҵ���
		}
	}
	return -1;//û�ҵ�
}
void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼�������޷�����\n");
	}
	else
	{//¼����Ϣ
		printf("����������:>");
		scanf("%s", ps->data[ps->size].name);
		printf("����������:>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[ps->size].add);

		ps->size++;
		printf("��ӳɹ�\n");
	}
}
void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ�������֣�");
	scanf("%s", name);
	//1.����Ҫɾ��Ԫ�ص�����
	//�ҵ��˷�������Ԫ�ص��±꣬�Ҳ�������-1
	int ret = FindName(ps, name);

	if (ret == -1)
	{
		printf("Ҫɾ�����˲��ڣ�\n");
	}
	else
		//ɾ��
	{
		int j = 0;
		for (j = ret; j < ps->size - 1; j++)//�±�Ϊj�ĳ�Ա���±�Ϊ���ĳ�Ա�Ƚ�
		{
			ps->data[j] = ps->data[j + 1];//��Ա��ǰ������һ��λ��
		}
		ps->size--;//��Ա������һ
		printf("ɾ���ɹ���\n");
	}
}
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)//��Ա����Ϊ0
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%20s\t%4s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "סַ");
		for (i = 0; i < ps->size;i++)//�±�Ϊi�ĳ�Ա�����һ����Ա�Ƚ�
		{
			printf("%20s\t%4d\t%5s\t%12s\t%20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].add);//�ֱ��ӡ�����±�Ϊi�ĸ��ֱ�ǩ
		}
	}

}


void SearchContact(struct Contact* ps)
{
	char name[MAX_NAME];//�涨name���ֽڷ�Χ����20��
	printf("������Ҫ�����˵����֣�\n");
	scanf("%s", name);
	int ret=FindName(ps, name);
	if (ret == -1)
	{
		printf("Ҫ�������˲����ڣ�\n");
	}
	else
	{
		printf("%20s\t%4s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "סַ");

		printf("%20s\t%4d\t%5s\t%12s\t%20s\n",
			ps->data[ret].name,
			ps->data[ret].age,
			ps->data[ret].sex,
			ps->data[ret].tele,
			ps->data[ret].add);
	}
}

//�޸�ָ����ϵ��
void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸��˵����֣�\n");
	scanf("%s",name);
	int ret = FindName(ps, name);
	if (ret == -1)
	{
		printf("Ҫ�޸ĵ��˲����ڣ�\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[ret].name);
		printf("����������:>");
		scanf("%d", &(ps->data[ret].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[ret].sex);
		printf("������绰:>");
		scanf("%s", ps->data[ret].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[ret].add);
		printf("�޸ĳɹ���\n");
	}
	
}
static int cmp(const void* p1, const void* p2)
{
	return ((struct people*)p1)->age - ((struct people*)p2)->age;
}
void qsort(ps->data, ps->size, sizeof(struct people)
{

}
void ShowSort(struct Contact* ps)
{
	printf("��������Ӵ�С����\n");
	qsort(ps->data, ps->size, sizeof(struct people), cmp);
}
//void ShowSortContact(struct Contact* ps)
//{
//	printf("���������С��������:\n");
//	printf("%20s\t%4s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "סַ");
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < ps->size ; i++)
//	{
//		if (ps->data[i-1].age>ps->data[i].age)
//		{
//			j = i - 1;
//			int x=ps->data[i].age;
//			while (j > -1 && x<ps->data[i].age)
//			{
//				ps->data[i].age = ps->data[i-1].age;
//			}
//			ps->data[i-1].age = x;
//		}
//		for (i = 1; i <=ps->size; i++)
//		printf("%20s\t%4d\t%5s\t%12s\t%20s\n",
//			ps->data[i-1].name,
//			ps->data[i-1].age,
//			ps->data[i-1].sex,
//			ps->data[i-1].tele,
//			ps->data[i-1].add);
//
//	}
//
//}

