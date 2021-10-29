#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
void Clean(char arr[ROW][COL], int row, int col);
void Print(char arr[ROW][COL], int row, int col);
void Playermove(char arr[ROW][COL], int row, int col);
void AImove(char arr[ROW][COL], int row, int col);
char Judge(char arr[ROW][COL], int row, int col);

-----------------------------------------------------

#include"三子棋.h"
void Clean(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			arr[i][j] = ' ';
		}
	}
}
void Print(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0;j < col;j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}
void Playermove(char arr[ROW][COL], int row, int col)
{
	while (1)
	{
		printf("do it,and input(x,x)\n");
		int a, b;
		scanf_s("%d%d", &a, &b);
		if (arr[a - 1][b - 1] == ' ')
		{
			if (a - 1 < row && b - 1 < col)
			{
				arr[a - 1][b - 1] = '#';
				break;
			}
		}
		else
		{
			printf("try again\n");
		}
	}
}
void AImove(char arr[ROW][COL], int row, int col)
{
	int a = rand() % 3;
	int b = rand() % 3;
	if (arr[a][b] == ' ')
	{
		arr[a][b] = '@';
	}
}
int is_Full(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			if (arr[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char Judge(char arr[ROW][COL], int row, int col)
{
	if (arr[0][0] == arr[1][1] == arr[2][2] && arr[1][1] != ' ')
	{
		return arr[1][1];
	}
	if (arr[0][2] == arr[1][1] == arr[2][0] && arr[1][1] != ' ')
	{
		return arr[1][1];
	}
	int i = 0;
	for (i = 0;i < row;i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != ' ')
			return arr[i][0];
	}
	for (i = 0;i < row;i++)
	{
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != ' ')
			return arr[0][i];
	}
	if (is_Full(arr, ROW, COL) == 1)
	{
		return 'q';
	}
	return 'c';
}

----------------------------------------------------------------------

#include"三子棋.h"
void game()
{
	char arr[ROW][COL] = { 0 };//crate a whiteboard
	Clean(arr, ROW, COL);//delete '0'
	Print(arr, ROW, COL);//print a board
	char a = 0;
	while (1)
	{
		Playermove(arr, ROW, COL);// player move
		Print(arr, ROW, COL);// print board
		a = Judge(arr, ROW, COL);
		if (a != 'c')
		{
			break;
		}
		AImove(arr, ROW, COL);//ai move
		Print(arr, ROW, COL);//print board
		a = Judge(arr, ROW, COL);
		if (a != 'c')
		{
			break;
		}
	}
	if (a == '#')
	{
		printf("player win\n");
	}
	else if (a == '@')
	{
		printf("Ai win\n");
	}
	else
	{
		printf("all loose\n");
	}
}
void menu()
{
	printf("#####################\n");
	printf("###1 play 0 exit#####\n");
	printf("#####################\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("plesae select it\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			printf("successfully exit\n");
			break;
		}
		default:
		{
			printf("please try again\n");
		}
		}

	} while (input);
	return 0;
}
