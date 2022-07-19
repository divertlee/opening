#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//设置通讯录最初只有0个元素
}
static int FindName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))//strcmp比较字符串：比较i下标成员的名字和输入的名字是否相同
		{
			return i;//找到了
		}
	}
	return -1;//没找到
}
void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满，无法增加\n");
	}
	else
	{//录入信息
		printf("请输入名字:>");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[ps->size].add);

		ps->size++;
		printf("添加成功\n");
	}
}
void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除的名字：");
	scanf("%s", name);
	//1.查找要删除元素的名字
	//找到了返回名字元素的下标，找不到返回-1
	int ret = FindName(ps, name);

	if (ret == -1)
	{
		printf("要删除的人不在！\n");
	}
	else
		//删除
	{
		int j = 0;
		for (j = ret; j < ps->size - 1; j++)//下标为j的成员跟下标为最后的成员比较
		{
			ps->data[j] = ps->data[j + 1];//成员往前面提上一个位置
		}
		ps->size--;//成员数量减一
		printf("删除成功！\n");
	}
}
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)//成员数量为0
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%20s\t%4s\t%5s\t%12s\t%20s\n", "名字", "年龄", "性别", "电话", "住址");
		for (i = 0; i < ps->size;i++)//下标为i的成员跟最后一个成员比较
		{
			printf("%20s\t%4d\t%5s\t%12s\t%20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].add);//分别打印库里下标为i的各种标签
		}
	}

}


void SearchContact(struct Contact* ps)
{
	char name[MAX_NAME];//规定name的字节范围？（20）
	printf("请输入要查找人的名字：\n");
	scanf("%s", name);
	int ret=FindName(ps, name);
	if (ret == -1)
	{
		printf("要搜索的人不存在！\n");
	}
	else
	{
		printf("%20s\t%4s\t%5s\t%12s\t%20s\n", "名字", "年龄", "性别", "电话", "住址");

		printf("%20s\t%4d\t%5s\t%12s\t%20s\n",
			ps->data[ret].name,
			ps->data[ret].age,
			ps->data[ret].sex,
			ps->data[ret].tele,
			ps->data[ret].add);
	}
}

//修改指定联系人
void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改人的名字：\n");
	scanf("%s",name);
	int ret = FindName(ps, name);
	if (ret == -1)
	{
		printf("要修改的人不存在！\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->data[ret].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[ret].age));
		printf("请输入性别:>");
		scanf("%s", ps->data[ret].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[ret].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[ret].add);
		printf("修改成功！\n");
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
	printf("将以年龄从大到小排序：\n");
	qsort(ps->data, ps->size, sizeof(struct people), cmp);
}
//void ShowSortContact(struct Contact* ps)
//{
//	printf("将以年龄从小到大排序:\n");
//	printf("%20s\t%4s\t%5s\t%12s\t%20s\n", "名字", "年龄", "性别", "电话", "住址");
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

