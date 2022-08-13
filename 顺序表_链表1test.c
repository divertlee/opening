#include"List.h";
void TestList1()
{
	LTNode* plist = ListInit();
	 ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	Listprint(plist);
	LTNode*pos= ListFind(plist, 3);
	ListSize(plist);
	if (pos)
	{
		ListInsert(pos, 520);
	}
	Listprint(plist);
	ListEarse(pos);
	Listprint(plist);
	int t= ListSize(plist);
	printf("%d", t);
	
	ListDestory(plist);
	plist = NULL;
}
int main()
{
	TestList1();
	return 0;
}