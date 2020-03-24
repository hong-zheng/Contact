#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


void print_arr(int* arr,int sz){
	int i = 0;
	for (i = 0; i < sz;i++){
		printf("%d ", *(arr + i));
	}
}
int maasdin()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//在这里完成代码
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr,sz);
	return 0;
}
/*
	救生船从大本营出发，营救若干屋顶上的人回到大本营，
	屋顶数目以及每个屋顶的坐标和人数都将由输入决定，求出所有人都到达大本营并登陆所用的时间。

在直角坐标系的原点是大本营，救生船每次从大本营出发，
救了人之后将人送回大本营。坐标系中的点代表屋顶，每个屋顶由其位置坐标和其上的人数表示。

救生船每次从大本营出发，以速度 505050 米/分钟驶向下一个屋顶。
达到一个屋顶后，救下其上的所有人，每人上船 111 分钟。然后船原路返回，
回到大本营，每人下船 0.50.50.5 分钟。假设原点与任意一个屋顶的连线不穿过其它屋顶。
输入格式

第一行，一个整数，表示屋顶数 n (1≤n≤100)n\ (1\le n\le 100)n (1≤n≤100)。

接下来依次有 nnn 行输入，每一行前两个实数表示屋顶相对于大本营的平面坐标位置 
(xi,yi)(x_i,y_i)(xi​,yi​)（单位是米）、然后一个表示人数的整数 rir_iri​，数之间以一个空格分开。
0≤xi,yi≤1000\le x_i,y_i \le 1000≤xi​,yi​≤100，1≤ri≤1001\le r_i \le 1001≤ri​≤100。
输出格式

一行，救援需要的总时间，精确到分钟 (向上取整)。

	
*/
typedef struct roof{
	// (x,y) 每一个屋顶对应的坐标	
	int x;
	int y;
	// num : 每一个屋顶对应的人数
	int num;
	// 每个屋顶上救人需要的时间长短
	// 时间计算公式 ceil(2*sqrt(x ^ 2 + y ^ 2) / 50.0 + 1.5*num);
	int time; 
}roof;
int masdin(){


	// n : 屋顶数
	// (x,y) 每一个屋顶对应的坐标
	// num : 每一个屋顶对应的人数
	int n = 0;
	printf("输入屋顶数:>\n");
	scanf("%d",&n);
	roof roofs[100];
	int time = 0;
	for (int i = 0; i < n;i++){
		printf("输入屋顶所在位置以及人数:>\n");
		scanf("%d %d %d", &roofs[i].x,&roofs[i].y,&roofs[i].num);
		// roofs[i].time = ceil(sqrt(roofs[i].x ^ 2 + roofs[i].y^ 2) / 50.0 + 1.5*roofs[i].num);
		time += (int)ceil(sqrt(roofs[i].x ^ 2 + roofs[i].y ^ 2) / 50.0 + 1.5*roofs[i].num);
	}
	printf("%d\n",time);

	// 每一个人上船需要1分钟，下船需要0.5分钟

	// 求出救人需要多长时间
	// 向上取整数
	system("pause");
	return 0;
}
