#include"SList.h"
void TestSList1()
{
	SLTNode* plist = NULL;
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	SListPrint(plist);
	SLTNode* pos = SListFind(plist, 4);
	if (pos)
	{
		pos->data *= 2;
		printf("找到了\n");
	}
	else
	{
		printf("没找到\n");
	}
	SListPrint(plist);
	SListInsert(&plist,pos, 20);
	SListPrint(plist);
	SListDestory(&plist);
	SListPrint(plist);
}
//void TestSList2()
//{
//SLTNode* plist = NULL;
//	SListPushBack(&plist, 2);
//	SListPrint(plist);
//	SListPushBack(&plist, 3);
//	SListPrint(plist);
//	SListPushBack(&plist, 4);
//	SListPrint(plist);
// SListPopBack(&plist);
// SListPrint(plist);
// SListPopBack(&plist);
// SListPrint(plist); 
// SListPopBack(&plist);
// SListPrint(plist);
// SListPopBack(&plist);
// SListPrint(plist);
// SListDestory(&plist);
//}
int main()
{
	TestSList1();
	return 0;
}