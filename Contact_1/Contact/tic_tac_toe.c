//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#define MAX_ROW 3
//#define MAX_COL 3
//
//
//int menu(){
//	printf("******************\n");
//	printf("***  1、玩游戏 ***\n");
//	printf("***  0、退出   ***\n");
//	printf("******************\n");
//	int num = 0;
//	printf("请选择:>\n");
//	scanf("%d",&num);
//	return num;
//}
//void Print(char chessBoard[MAX_ROW][MAX_COL]){
//	for (int row = 0; row < MAX_ROW; row++){
//		printf("   ----+---+----\n");
//		printf("   | %c | %c | %c |\n", chessBoard[row][0], chessBoard[row][1], chessBoard[row][2]);
//	}
//	printf("   ----+---+----\n");
//}
//void Init(char chessBoard[MAX_ROW][MAX_COL]){
//	//for (int row=0; row < MAX_ROW;row++){
//	//	for (int col = 0; col < MAX_COL;col++){
//	//		chessBoard[row][col] = ' ';
//	//	}
//	//}
//	srand((unsigned int)time(0));
//	memset(chessBoard,' ',MAX_ROW*MAX_COL*sizeof(char));
//}
//void PlayerMove(char chessBoard[MAX_ROW][MAX_COL]){
//	printf("轮到你落子(row col):>\n");
//	int row = 0;
//	int col = 0;
//	while (1){
//		scanf("%d %d", &row, &col);
//		if (row<=0 || row > MAX_ROW || col<=0 || col > MAX_COL){
//			printf("你个憨憨，输入有误，请重新输入:>\n");
//			continue;
//		}
//		if (' ' != chessBoard[row-1][col-1]){
//			printf("此处已有子，请重新选择:>\n");
//			continue;
//		}
//		break;
//	}
//	chessBoard[row-1][col-1] = 'X';
//}
//void ComputerMove(char chessBoard[MAX_ROW][MAX_COL]){
//	printf("电脑已走!\n");
//	int row = 0;
//	int col = 0;
//	// 判断当前位置是否有子
//	while (1){
//		row = rand() % MAX_ROW;
//		col = rand() % MAX_COL;
//		if (' ' != chessBoard[row][col]){
//			continue;
//		}
//		break;
//	}
//	chessBoard[row][col] = 'O';
//}
//int isFUll(char chessBoard[MAX_ROW][MAX_COL]){
//	for (int row = 0; row < MAX_ROW;row++){
//		for (int col = 0; col < MAX_COL;col++){
//			if (' ' == chessBoard[row][col]){
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//char isWin(char chessBoard[MAX_ROW][MAX_COL]){
//	// 判断行
//	for (int row = 0; row < MAX_ROW;row++){
//		if (chessBoard[row][0] != ' ' &&
//			chessBoard[row][0] == chessBoard[row][1] &&
//			chessBoard[row][0] == chessBoard[row][2]){
//			return chessBoard[row][0];
//		}
//	}
//	// 判断列
//	for (int col = 0; col < MAX_COL; col++){
//		if (chessBoard[0][col] != ' '&&
//			chessBoard[1][col] == chessBoard[0][col] &&
//			chessBoard[0][col] == chessBoard[2][col]
//			){
//			return chessBoard[0][col];
//		}
//	}
//	//判断斜线
//	if (chessBoard[0][0] != ' ' &&
//		chessBoard[0][0] == chessBoard[1][1] &&
//		chessBoard[0][0] == chessBoard[2][2]){
//		return chessBoard[0][0];
//	}
//	if (chessBoard[0][2] != ' ' &&
//		chessBoard[0][2] == chessBoard[1][1] &&
//		chessBoard[0][2] == chessBoard[2][0]){
//		return chessBoard[0][2];
//	}
//	if (0 == isFUll(chessBoard)){
//		return ' ';
//	}
//	return 'Q';
//}
//
//int main(){
//	char chessBoard[MAX_ROW][MAX_COL];
//	while (1){
//		Init(chessBoard);
//		int choice = menu();
//		char ret = ' ';
//		if (1 == choice){
//			while (1){
//				Print(chessBoard);
//				PlayerMove(chessBoard);
//				ret = isWin(chessBoard);
//				if (' ' != ret){
//					break;
//				}
//				ComputerMove(chessBoard);
//				ret = isWin(chessBoard);
//				if (' ' != ret){
//					break;
//				}
//			}
//			if ('X' == ret){
//				printf("恭喜您，您赢了！\n");
//			}else if ('O' == ret){
//				printf("电脑赢，你个憨憨！\n");
//			}else if('Q' == ret){
//				printf("无赢者，平局！\n");
//			}
//			Print(chessBoard);
//		}else if(0 == choice){
//			printf("退出！\n");
//			break;
//		}else{
//			printf("你个憨憨，输入有误，请重新选择！\n");
//		}
//	}
//	
//	system("pause");
//	return 0;
//}
//
//
//
//// 写代码之前，首先用文字将其描述清楚再写，描述清楚之后再打框架
//
//// 三子棋
//// 1、首先要打印一个棋盘
//// 2、棋盘需要对其进行初始化
//// 3、提示玩家走棋
//// 4、判断是否胜利
//// 5、电脑走棋
//// 6、判断电脑是否胜利
//// 7、到3循环