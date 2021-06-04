#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define mine 10
void menu();
int game();
initboard(char hide[ROWS][COLS], char num);
displayboard(char board[ROWS][COLS]);
pushmine(char board[ROWS][COLS], char num,int count);
findmine(char hide[ROWS][COLS], char show[ROWS][COLS],int count);