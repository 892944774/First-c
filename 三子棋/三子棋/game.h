#pragma once
#define ROW 3
#define COL 3

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col); 
void ComputerMove(char board[ROW][COL], int row, int col);


//四种游戏状态
//1 玩家赢--'*'
//2 电脑赢--'@'
//3 继续-- 'Q'
//4 平局--'C'
char IsWin(char board[ROW][COL], int row, int col);