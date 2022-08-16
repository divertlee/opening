#include"Stack.h"
//解耦--低耦合 高内聚
////数据结构建议不要直接访问结构数据，一定要通过函数接口访问
//void TestStack()
//{
//	ST st;
//	
//	StackInit(&st);
//	StackPush(&st, 1);
//	StackPush(&st, 2);
//	StackPush(&st, 3);
//	StackPush(&st, 4);
//	while (!StackEmpty(&st))
//	{
//		printf("%d ", StackTop(&st));
//		StackPop(&st);
//	}
//	printf("\n");
//	
//	StackDestory(&st);
//}
TestQueue()
{
	Queue qu;
	QueueInit(&qu);
	QueuePush(&qu, 1);
	QueuePush(&qu, 2);
	QueuePush(&qu, 3);
	QueuePush(&qu, 4);
	while (!QueueEmpty(&qu))
	{
		printf("%d ", QueueFront(&qu));
		QueuePop(&qu);
	}
	QueueDestory(&qu);
}
int main()
{
	TestQueue();
	//TestStack();
	return 0;
}