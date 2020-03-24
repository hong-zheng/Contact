#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main(){
//
//
//	system("pause");
//	return 0;
//}

/*

void left_move(char* s, int n){
	int i = 0;
	for (i = 0; i < n; i++){
		char c = s[0];
		int j;
		// 此处的s不可写成s++，不可改变
		// 例如 for ： (j=0; s;s++,j++)
		for ( j = 0; j<strlen(s);j++){
			s[j] = s[j + 1];
		}
		s[j - 1] = c;
	}
	printf("%s\n", s);
}
int main()
{
	char p[] = "";
	printf("请输入左移字符串:>");
	scanf("%s", p);
	int n = 0;
	printf("请输入左移字符串需移动的位数:>");
	scanf("%d", &n);
	left_move(p,n);
	system("pause");
	return 0;
}
*/