// 初始化棋盘
#include <stdio.h>

#define CHESS_NUM 14;

// 格子直线
#define dot "."
#define line "----------------------------------------------------------------"
#define column "|"
#define line_seperator "\n"
// 格子宽度和长度
#define grid_size 30
#define grid_x_num 10
#define grid_y_num 12

const int red_chess[] = {};
const int black_chess[] = {};

// 棋子坐标
typedef struct {
	int x;
	int y;
} position;

// 棋子
typedef struct {
	int chessid;
	// 阵营: 0-楚，1-汉
	int camp;
	// 棋子位置
	position pos;
} chess;

// 棋盘
typedef struct {
	chess *chess_list[14];
} map;


// 初始化棋盘
void initMap();

// 初始化棋子
void initChess();


int main(){

	initMap();

	initChess();
}


void initMap() {
	printf("初始化棋盘 \n");
	printf("\t |----|----|----|----|----|----|----|----| \n");
	printf("\t |    |    |    |    |    |    |    |    | \n");
	printf("\t |----|----|----|----|----|----|----|----| \n");
	printf("\t |    |    |    |    |    |    |    |    | \n");
	printf("\t |----|----|----|----|----|----|----|----| \n");
	printf("\t |    |    |    |    |    |    |    |    | \n");
	printf("\t |----|----|----|----|----|----|----|----| \n");
	printf("\t |    |    |    |    |    |    |    |    | \n");
	printf("\t |----|----|----|----|----|----|----|----| \n");
	printf("\t |     楚河                     汉界     | \n");
	printf("\t |----|----|----|----|----|----|----|----| \n");
	printf("\t |    |    |    |    |    |    |    |    | \n");
	printf("\t |----|----|----|----|----|----|----|----| \n");
	printf("\t |    |    |    |    |    |    |    |    | \n");
	printf("\t |----|----|----|----|----|----|----|----| \n");
	printf("\t |    |    |    |    |    |    |    |    | \n");
	printf("\t |----|----|----|----|----|----|----|----| \n");
	printf("\t |    |    |    |    |    |    |    |    | \n");
	printf("\t |----|----|----|----|----|----|----|----| \n");

}

	
void initChess() {
	printf("初始化棋子 \n");
}
