#pragma once
#define ROW 3
#define COL 3

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//����
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col); 
void ComputerMove(char board[ROW][COL], int row, int col);


//������Ϸ״̬
//1 ���Ӯ--'*'
//2 ����Ӯ--'@'
//3 ����-- 'Q'
//4 ƽ��--'C'
char IsWin(char board[ROW][COL], int row, int col);