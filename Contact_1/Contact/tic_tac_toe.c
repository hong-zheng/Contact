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
//	printf("***  1������Ϸ ***\n");
//	printf("***  0���˳�   ***\n");
//	printf("******************\n");
//	int num = 0;
//	printf("��ѡ��:>\n");
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
//	printf("�ֵ�������(row col):>\n");
//	int row = 0;
//	int col = 0;
//	while (1){
//		scanf("%d %d", &row, &col);
//		if (row<=0 || row > MAX_ROW || col<=0 || col > MAX_COL){
//			printf("���������������������������:>\n");
//			continue;
//		}
//		if (' ' != chessBoard[row-1][col-1]){
//			printf("�˴������ӣ�������ѡ��:>\n");
//			continue;
//		}
//		break;
//	}
//	chessBoard[row-1][col-1] = 'X';
//}
//void ComputerMove(char chessBoard[MAX_ROW][MAX_COL]){
//	printf("��������!\n");
//	int row = 0;
//	int col = 0;
//	// �жϵ�ǰλ���Ƿ�����
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
//	// �ж���
//	for (int row = 0; row < MAX_ROW;row++){
//		if (chessBoard[row][0] != ' ' &&
//			chessBoard[row][0] == chessBoard[row][1] &&
//			chessBoard[row][0] == chessBoard[row][2]){
//			return chessBoard[row][0];
//		}
//	}
//	// �ж���
//	for (int col = 0; col < MAX_COL; col++){
//		if (chessBoard[0][col] != ' '&&
//			chessBoard[1][col] == chessBoard[0][col] &&
//			chessBoard[0][col] == chessBoard[2][col]
//			){
//			return chessBoard[0][col];
//		}
//	}
//	//�ж�б��
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
//				printf("��ϲ������Ӯ�ˣ�\n");
//			}else if ('O' == ret){
//				printf("����Ӯ�����������\n");
//			}else if('Q' == ret){
//				printf("��Ӯ�ߣ�ƽ�֣�\n");
//			}
//			Print(chessBoard);
//		}else if(0 == choice){
//			printf("�˳���\n");
//			break;
//		}else{
//			printf("�����������������������ѡ��\n");
//		}
//	}
//	
//	system("pause");
//	return 0;
//}
//
//
//
//// д����֮ǰ�����������ֽ������������д���������֮���ٴ���
//
//// ������
//// 1������Ҫ��ӡһ������
//// 2��������Ҫ������г�ʼ��
//// 3����ʾ�������
//// 4���ж��Ƿ�ʤ��
//// 5����������
//// 6���жϵ����Ƿ�ʤ��
//// 7����3ѭ��