#include"Stack.h"
//����--����� ���ھ�
////���ݽṹ���鲻Ҫֱ�ӷ��ʽṹ���ݣ�һ��Ҫͨ�������ӿڷ���
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