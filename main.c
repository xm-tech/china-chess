// 初始化棋盘
#include <stdio.h>

#define CHESS_NUM 14;

// 棋子
typedef struct {
	int x;
	int y;
	int chessid;
	// 阵营: 0-楚，1-汉
	int camp;
} chess;

// 棋盘
typedef struct {
	chess *chess_list[14];
} map;


void initMap();

// 初始化棋子
void initChess();


int main(){

	initMap();

	initChess();
}


void initMap() {
	printf("初始化棋盘 \n");
}

void initChess() {
	printf("初始化棋子 \n");
}
