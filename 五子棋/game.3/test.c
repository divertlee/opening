#include<stdio.h>
#include"game.h"
void game()
{
	printf("ɨ��\n");
	//�����׵���Ϣ
	char mine[ROWS][COLS] = { 0 };//11*11
	//�Ų��׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//��ӡ����
	/*Displayboard(mine,ROW,COL);*/
	Displayboard(show, ROW, COL);
	//������
	Setmine(mine,ROW,COL);
	/*Displayboard(mine, ROW, COL);*/
	//ɨ��
	Findmine(mine,show, ROW, COL);

}

void menu()
{
	printf("********************\n");
	printf("**play.1 or exit.0**\n");
	printf("********************\n");

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("��ѡ��:");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;


		}

	} while (input);


}
int main()
{
	test();


	return 0;

}