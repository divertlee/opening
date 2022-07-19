#include<stdio.h>
#include"game.h"
void game()
{
	printf("扫雷\n");
	//布置雷的信息
	char mine[ROWS][COLS] = { 0 };//11*11
	//排查雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//打印棋盘
	/*Displayboard(mine,ROW,COL);*/
	Displayboard(show, ROW, COL);
	//布置雷
	Setmine(mine,ROW,COL);
	/*Displayboard(mine, ROW, COL);*/
	//扫雷
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
		printf("请选择:");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择：\n");
			break;


		}

	} while (input);


}
int main()
{
	test();


	return 0;

}