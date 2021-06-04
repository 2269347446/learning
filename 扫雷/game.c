#pragma once
#include"game.h"

void menu()
{
	printf("***********************\n");
	printf("*** 1.play   0.exit ***\n");
	printf("***********************\n");
}

initboard(char board[ROWS][COLS], char num)//≥ı ºªØhide
{
	for (int a = 0; a < ROWS; a++)
	{
		for (int b = 0;b < COLS;b++)
		{
			board[a][b] = num;
		}
	}
};
displayboard(char board[ROWS][COLS])//¥Ú”°∆Â≈Ã
{
	for (int a = 0; a <= COL; a++) 
	{
		printf("%d ", a);
	}
	printf("\n");
	for (int a = 1; a <= ROW; a++)
	{
		printf("%d ", a);
		
		for (int b = 1;b <= COL;b++)
		{
			printf("%c ", board[a][b]);
		}
		printf("\n");
	}
}
pushmine(char board[ROWS][COLS],char num,int count)
{
	while (count) {
		int a = rand() % ROW + 1;
		int b = rand() % COL + 1;
		if (board[a][b] == '0')
		{
			board[a][b] = '1';
			count--;
		}
	}
}
findmine(char hide[ROWS][COLS], char show[ROWS][COLS],int count)
{
	int a; int b;
	while (1) {
		
		printf("«Î ‰»Î◊¯±Í");
		scanf("%d%d", &a, &b);
		if (a >= 1 && a <= ROW && b >= 1 && b <= COL)
		{
			if (hide[a][b] == '1')
			{
				printf("ƒ„±ª’®À¿¡À");
			}
			else
			{
				
				show[a][b] =
						hide[a - 1][b - 1] + hide[a - 1][b] + hide[a - 1][b + 1] +
						hide[a][b - 1] + hide[a][b + 1] +
						hide[a + 1][b - 1] + hide[a + 1][b] + hide[a + 1][b + 1]-8*'0'+'0';
			}
			printf("%d%d\n", a, b);
			displayboard(show);
		}
		
	}
	
}

int game()
{
	srand((unsigned int)time(NULL));
	char hide[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	initboard(hide, '0');
	initboard(show, '*');
	pushmine(hide, '1',mine);
	displayboard(show);//¥Ú”°∆Â≈Ã
	displayboard(hide);//¥Ú”°∆Â≈Ã***
	findmine(hide,show,mine);
};