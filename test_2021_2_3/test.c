#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("*********************************\n");
	printf("*******      1.play       *******\n");
	printf("*******      0.exit       *******\n");
	printf("*********************************\n");
}

void game()
{
	//创建棋盘对应的数组
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	//初始化棋盘内容
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//打印棋盘
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	SetMine(mine, ROW, COL, EASY_COUNT);
	FindMine(mine, show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}