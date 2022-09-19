#include"SLNode.h"


void Test1()
{
	LTNode* plist = NULL;
	Print(plist);
	SLPushfront(&plist, 1);
	SLPushfront(&plist, 2);
	SLPushfront(&plist, 3);
	Print(plist);
	LTNode* pos = SLFind(plist, 1);
	if (pos)
	{
		pos->data *= 100;
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	Print(plist);
	SLInsertafter(&plist, pos, 899);
	Print(plist);
	SListEarse(&plist, pos);
	Print(plist);
	SLDestroy(&plist);
}

int main()
{
	Test1();
	return 0;
}