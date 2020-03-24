#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<sys/timeb.h>


//int main(){
//
//	char arr[] = "abcdef";
//	system("pause");
//	return 0;
//}
//char arr[] = "abcdef";
	//printf("%d\n",strlen(&arr)); // 警告:“const char *”与“char (*)[7]”的间接级别不同,C是弱类型语言，因此就强制类型转换为char* 去执行	
	//printf("%d\n",strlen(arr+0)); // arr 为char[7] , arr+0 转换为char* 型，从arr+0开始的直到'\0'的字符个数
	//printf("%d\n",strlen(arr)); // 6 因为所求为从arr开始的直到'\0'的字符个数
	//printf("%d\n", sizeof(&arr)); // 4 此处取整个数组，char(*)[7]
	//printf("%p\n", &arr); // 4 此处取整个数组，char(*)[7]
	//printf("%p\n", &arr+1); // 4 此处取整个数组，char(*)[7],&arr+1与&arr相差7个元素
	//printf("%d\n", sizeof(&arr+1)); // 4 此处取整个数组+1，类型不变，char(*)[7]

	//printf("%d\n",sizeof(*arr)); // 1 对隐式转换为指针解引用，char类型-->'a'，因此为一个字节
	//printf("%d\n",sizeof(arr+0)); // 4 此处的arr隐式转换为指针,因此4个字节
	//printf("%d\n",sizeof(&arr)); //4 取地址，为指针，4个字节，类型为char(*)[7]
	//printf("%d\n",sizeof(arr));// 7 此处的arr表示整个数组，此处数组中是一个字符串，因此该数组中应该加上'\0'

	//char arr[] = {'a','b','c','d','e','f'};
	// char 区别于 char* 类型
	// char 表示一个字符，通过整数的形式表示一个字符，
	// char* 是一个指针类型，存的是整数，变量中存的是一个地址，4个字节
	// 由于C是弱类型语言，因此会存在隐式转换问题，
	//printf("%d\n",strlen(*arr)); // UB 此处的程序崩溃，原因是由于strlen函数中的参数是char*型，结果传一个char型参数，在C中将其隐式转换为char*型(*arr-->97),将其强转为地址，然后访问内存中该地址，然而大概率该地址是错误的
	//printf("%d\n",strlen(arr)); // strlen需要一个char* 作为参数用于求当前字符串的长度，此处为UB
	//printf("%x",123); // %x 以16进制输出当前数据
	//printf("%d\n",sizeof(&arr+1)); // 指针+1，跳过一个和指针类型一样大小的空间，此处跳过一个数组，仍然为char(*)[6]类型 
	//printf("%d\n",sizeof(&arr)); // 4 取地址，为指针，类型为char(*)[6]
	//printf("%d\n",sizeof(*arr)); // 1 此处的arr隐式转换为指针，指向数组中的第一个元素，对其进行解引用，得到第一个元素'a',char类型
	//printf("%d\n",sizeof(arr+1)); // 4 数组名隐式转换为指针，凡是指针类型win32必为4个字节
	//printf("%d\n",sizeof(arr)); // 6 求整个数组的字节数
	//printf("%d\n",strlen(arr+0)); // 未定义行为ub,数组名隐式转为指针 char* 
	//printf("%d\n",strlen(arr)); // 未定义行为(ub),arr 为字符数组，与字符串没有关系，因此与'\0'也没有关系

//1.递归和非递归分别实现求第n个斐波那契数。
//
//2.编写一个函数实现n^k，使用递归实现
//
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//
//5.递归和非递归分别实现strlen
//6.递归和非递归分别实现求n的阶乘
//7.递归方式实现打印一个整数的每一位

////1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
////输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//
//void Multiplication_table(){
//	int n = 0;
//	printf("输入打印行:>\n");
//	scanf("%d",&n);
//	for (int i = 1; i <= n;i++){
//		for (int j = 1; j <= i;j++){
//			printf("%3d*%d =%3d   ",j,i,i*j);
//		}
//		printf("\n");
//	}
//}
////2.使用函数实现两个数的交换。
//void change(int* a, int* b){
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
////
////3.实现一个函数判断year是不是润年。
//int leap_year(int year){
//	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))){
//		return 1;
//	}
//	return 0;
//}
//4.
//创建一个数组，
//实现函数init（）初始化数组、




////要求：自己设计函数的参数，返回值。
//#define SIZE 10
////实现函数init（）初始化数组
//void init(int* arr){
//	for (int i = 0; i < SIZE; i++){
//		scanf("%d", &arr[i]);
//	}
//}
////实现empty（）清空数组、
//void empty(int* arr){
//	for (int i = 0; i < SIZE; i++){
//		arr[i] = 0;
//	}
//}
////实现reverse（）函数完成数组元素的逆置。
//void reverse(int* arr){
//	int tmp = 0;
//	for (int i = 0; i < SIZE / 2; i++){
//		tmp = arr[i];
//		arr[i] = arr[SIZE - i - 1];
//		arr[SIZE - i - 1] = tmp;
//	}
//}
//void pr(int* arr){
//	for (int i = 0; i < SIZE; i++){
//		printf("%d ", *(arr + i));
//	}
//}
////5.实现一个函数，判断一个数是不是素数。
//int isPrime(int n){
//	for (int i = 2; i <= n / 2; i++){
//		if (n%i == 0){
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main(){
//
//	printf("%d",isPrime(12));
//	//int arr[SIZE];
//	//init(arr);
//	//pr(arr);
//	//reverse(arr);
//	//pr(arr);
//	//empty(arr);
//	//pr(arr);
//	//printf("%d\n",leap_year(2100));
//	//int a = 10, b = 89;
//	//change(&a, &b);
//	//printf("%d%d", a, b);
//	//Multiplication_table();
//	system("pause");
//	return 0;
//}
////

//#define MAX 20
//

//

//
//// 转移表的应用，+-*/
//int Add(int a, int b){
//	return a + b;
//}
//int Sub(int a, int b){
//	return a - b;
//}
//int Mul(int a, int b){
//	return a * b;
//}
//int Div(int a, int b){
//	return a /b;
//}
//typedef int(*fun)(int ,int);
//int main(){
//	fun jjcc[] = {NULL,Add,Sub,Mul,Div};
//	int a=0, b = 0,input=0,ret=0;
//	scanf("%d,%d",&a,&b);
//	scanf("%d",&input);
//	ret = jjcc[input](a,b);
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}
//#define KEY 3
//#define SS 26
//void c_caesar(char M[],int sz){
//	for (int i = 0; i < sz;i++){   
//		M[i] = (M[i] + KEY)>='x' ? 
//	((M[i] + KEY-'a') % SS +'a') : (M[i] + KEY);
//	}
//}
//void d_caesar(char M[], int sz){
//	for (int i = 0; i < sz; i++){   
//		M[i] = (M[i] - KEY) < 'a' ? 
//			(M[i] + 'x'-'a') : (M[i] - KEY);
//	}
//}
//void scan(char M[100],int input){
//	if (1==input){
//		printf("输入明文:");
//	}else if (2 == input){
//		printf("输入密文:");
//	}
//	scanf("%s",M);
//}
//void output(char arr[100],int input){
//	if (1 == input)
//		printf("密文为:>");
//	else if (2 == input){
//		printf("明文为:>");
//	}
//	printf("%s\n",arr);
//}
//void menu(){
//	printf("0、退出\n");
//	printf("1、加密\n");
//	printf("2、解密\n");
//	printf(":>");
//}
//int main(){
//	char M[100] = {0};
//	int input = 0;
//	do{
//		menu();
//		scanf("%d",&input);
//		switch (input){
//		case 1:
//			scan(M, input);
//			c_caesar(M,strlen(M));
//			output(M,input);
//			break;
//		case 2:
//			scan(M, input);
//			d_caesar(M, strlen(M));
//			output(M,input);
//			break;
//		case 0:
//			input = 0;
//			printf("退出!");
//			break;
//		default:
//			printf("输入有误！\n");
//			break;
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}
//void printarr(int* arr,int sz){
//	for (int i = 0; i < sz;i++){
//		printf("%d ",arr[i]);
//	}
//}
//int maindd(){
//
//	int arr[MAX];
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < MAX;i++){
//		arr[i] = rand();
//	}
//	int index = 0;
//	int j = 0;
//	for (int i = 0; i < MAX-1;i++){
//		index = 0;
//		for (j = i+1; j < MAX-1;j++){
//			if (arr[j+1]>arr[j]){
//				index = j;
//			}
//		}
//		int tmp = arr[index];
//		arr[index] = arr[i];
//		arr[i] = tmp;
//	}
//	printarr(arr,MAX);
//	system("pause");
//	return 0;
//}

//typedef void(*ip)(char arr[],int);
// 4.编写一个加密解密程序实现凯撒密码。
//// 插入排序
//void insert_sort(int* arr,int sz){
//
//}

//int main(){
//	int arr[] = {1,2,4242,4,4,3,322,52,2,3,556,73,43,452};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int tmp = 0;
//	for (int i = 0; i < sz; i++){
//		tmp = arr[i];
//
//	}
//	system("pause");
//	return 0;
//}
//void swap_arr(int* a,int*b){
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int flag = 0;
//void bubble(int arr[],int sz){
//	int i = 0, j = 0;
//	for (i = 0; i < sz - 1 && flag==0;i++){
//		flag = 1;
//		for (j = 0; j < sz - i - 1;j++){
//			if (arr[j+1] < arr[j]){
//				swap_arr(&arr[j+1],&arr[j]);
//				flag = 0;
//			}
//		}
//	}
//}
//void printarr(int* arr,int sz){
//	for (int i = 0; i < sz;i++){
//		printf("%d ",arr[i]);
//	}
//}
//long getSystemTime(){
//	struct timeb tb;
//	ftime(&tb);
//	return (long)(tb.time * 1000 + tb.millitm);
//}
//int main(){
//
//	int arr[MAX];
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < MAX;i++){
//		arr[i] = rand();
//	}
//	long begin = getSystemTime();
//	printarr(arr, MAX);
//	printf("\n======================\n");
//	bubble(arr, MAX);
//	long end = getSystemTime();
//	printarr(arr, MAX);
//	//printf("\n\n\n\n%lf\n",end-begin);
//	system("pause");
//	return 0;
//}
// sizeof在编译期就已经运行完全，而strlen是函数是需要先编译再运行
// C语言中字符数组与字符串本是两个概念，但是字符串就是在字符数组上的末尾加上字符'\0'就成为了字符串
	//char arr[] = {'a','b','c','d','e','f'};

	// 针对普通数组，使用strlen都是未定义行为UB
	// 例如：
	//printf("%d\n",strlen(arr)); // UB , 该数组为一个普通的数组，并没有字符'\0',因此为UB
	//printf("%d\n",sizeof(arr+0)); // 4 隐式转换为地址
	//printf("%d\n",sizeof(&arr)); // 4 由于是取地址，所以为char(*)[6]类型，所以为4个字节
	//printf("%d\n",sizeof(*arr)); // *arr 隐式转换为指针再解引用得到'a'，所以为1个字节
	//printf("%d\n",sizeof(*(arr+1))); // 求出(arr+1)指向的元素,*(arr+1)再将其解引用取出
	//printf("%d\n",sizeof(arr+1)); // 隐式转换为指针，为char*型，因此是4个字节
	//printf("%d\n",sizeof(arr)); // 此处的arr代表一个数组，所以是求整个数组的sizeof


	//printf("%d\n",sizeof(arr));  // 6 直接sizeof(数组名)，表示整个数组的大小




//int strlen_self(const char* src){
//	int num = 0;
//	char* dest = src;
//	while (*dest++ != '\0'){
//		num++;
//	}
//	return  num;
//}



	//int arr[] = {1,2,3,4};
	//printf("%d\n",sizeof(arr+0)); // 数组名不可直接加减数字，否则会使其隐式转换为指针
	//printf("%d\n",sizeof(&arr+1)); // int(*)[4] 此处为数组指针，也是指针，4个字节
	//printf("%d\n", sizeof(&arr[0] + 1)); // &arr[0] 取地址+1，指向下一个地址，此处即是指向2的数据，类型为int*型
	//printf("%d\n", *(&arr[0] + 1));
	// &arr 取地址得到整个数组，对其解引用，得到整个数组int[4]
	//printf("%d\n", sizeof(*&arr)); // 此处的arr仍然代表整个数组，&arr是对整个数组取地址，*&arr解引用的是整个数组 类型为int[4]
	// &arr 与 &arr+1 相差一个数组
	//printf("%x\n", &arr); // 此处数组名+1仍然为一个地址，因此为4个字节，int(*)[4]
	//printf("%x\n", &arr + 1); // 此处数组名+1仍然为一个地址，因此为4个字节，int(*)[4]
	//printf("%d\n",sizeof(&arr)); // 取地址&arr,是一个指针，类型为int(*)[4],因此为4个字节
	//int a = *arr;
	//printf("%d\n",sizeof(*arr)); // arr隐式转换为指针，指向数组中的首元素，对首元素进行解析得到第一个元素，的类型
	//printf("%d\n", sizeof(arr[0])); // 此处是一个int类型的数字，因此为4个字节
	//printf("%d\n",sizeof(*(arr+1))); // 此处的*(arr+1)为一个int类型，因此是4个字节
	//printf("%d\n",sizeof(arr+1)); // 4 此处的arr+1中的arr隐式装换为指针，为int*类型，arr+1指向数组中的第二个元素
	//printf("%d\n",sizeof(arr)); // 16 此处的sizeof(arr)中的arr表示的是整个数组，因此为16


	//char arr[7] = {'a','b','c','d','e','f','\0'};
	//printf("%d\n", strlen_self(arr));
	//printf("%d\n",strlen(arr)); // 6 strlen(char* ) 接受一个char* 参数，从当前地址开始查询，直到'\0'结束，'\0'并不算如字符串内容，只是字符串结束的一个标志
	// 如果说传入的参数等不合法可能会出现强转或者UB（Undefined behavior：未定义行为）
	//printf("%d\n",sizeof(&arr)); // 取出整个数组，取地址因此为一个指针
	//printf("%d\n",&arr); // 取出整个数组，取地址因此为一个指针
	//printf("%d\n",&arr+1); // 取出整个数组，取地址因此为一个指针
	//printf("%d\n", sizeof(&arr + 1)); // 取出整个数组，取地址因此为一个指针，再加1就跳过整个数组
	//printf("%d\n",sizeof(arr+1)); // arr+1 已将数组名隐形转为指针，因此为4个字节，同时指向数组的第二个元素
	//printf("%d\n",sizeof(arr)); // arr为int[7]类型，因此应该为7

	//int a[] = {1,2,3,4};
	// a :int[4]型
	// a+1: int*型
	// &a :int(*)[4]型

	// 所谓二维数组 本质就是一维数组
	// 只是里面的每一个元素又是一个一维数组
	// 这是一个长度为3个元素的一维数组，里面的每个元素又是长度为 4 的一维数组
	//int arr[3][4] = {
	//		{1,2,3,4},
	//		{5,6,7,8},
	//		{9,10,11,12}
	//};
	
	//printf("%d\n",sizeof(&arr[0]+1)); // arr[0] 为 int[4] 取地址为int(*)[4] 再加1仍然为int(*)[4] ，因此为4个字节
	//printf("%d\n", sizeof(*(arr + 1))); // 16  *(arr+1)表示arr中的第二个元素，为int[4]类型
	//printf("%d\n", sizeof(*(arr + 1) + 1)); // 16  *(arr+1)表示arr中的第二个元素，为int[4]类型，再加1就变为int*类型
	//printf("%d\n", sizeof(*(*(arr + 1) + 1))); // 16  *(arr+1)表示arr中的第二个元素，为int[4]类型，再加1就变为int*类型,再解引用就是int型的数据，还可以求出对应的数据
	//printf("%d\n", sizeof(arr[1])); // 16
	//printf("%x\n", arr);  //b8fe7c
	//printf("%d\n", sizeof(arr)); //48 直接取数组名求sizeof就代表整个数组的大小，如果取地址加1就代表跳过整个数组
	//printf("%x\n", &arr + 1); // // b8feac
	//printf("%d\n", sizeof(&arr + 1)); // 4
	//printf("%d\n", sizeof(arr[0] + 1)); // arr[0]为int[4]型，+1就为int*型，指针类型为4个字节
	//printf("%d\n", *(arr[0] + 1)); // arr[0]为int[4]型，+1就为int*型，指针类型为4个字节,arr[0]+1指向arr[0][1]，即*(arr[0]+1) == arr[0][1]
	//printf("%d\n", sizeof(arr[0])); // 16=4*4 这表示二维数组中的第一个元素 int[4]类型


	//char* p = "abcdef";
	//printf("%d\n",sizeof(*p));// 1k  
	//printf("%d\n",strlen(p)); // 求字符串的长度，遇到'\0'就会停下，'\0'不会算入其中，最多会算入数组中的成员
	//printf("%x\n", p); // p指向字符串的第一个字符，因此p为第一个字符'a'的地址
	//printf("%x\n", &*p); // p
	//printf("%x\n", &p); //char* *pp=&p; 取出p的地址并不代表整个字符串(数组就是代表整个数组，若加1就会跳过整个数组)，
	//// 因此&p+1，为char* * 型，因此只会增加4个字节
	//printf("%x\n", &p+1);
	//printf("%d\n",sizeof(&p+1)); // p取地址为char* *型，再加一仍然为char* *型，为四个字节
	//printf("%d\n", sizeof(*(p + 1))); // 一个字节
	//printf("%c\n", *(p + 1)); // 一个字节,char*类型+1之后移向下一个字节所指向的内容，即为'b'
	//printf("%d\n",sizeof(p+1));  // 4个字节 p为char* ,再加一也是char*型，因此为四个字节
	//printf("%d\n",sizeof(*p)); // *p 只有一个字节，因为对p进行解析得到的是一个字符'a'
	//char** pp = &p;// char** 型 &p也是四个字节
	//printf("%d\n", sizeof(&p));
	//printf("%d\n",sizeof(p)); // p 是一个指针，因此为4个字节


// 交换指针变量里面的值，交换原变量的值
//void swapij(int* pi,int* pj){
//	int tmp = *pi;
//	*pi = *pj;
//	*pj = tmp;
//}
//
//// 交换指针指向
//void swapijp(int** pi, int** pj){
//	int* tmp = pi;
//	pi =  pj;
//	pj = tmp;
//}
//int main(){
//
//	int i, j;
//	scanf("%d,%d",&i,&j); 
//	int* pi = &i;
//	int* pj = &j;
//	if (i < j){
//		swapij(pi, pj);
//	}
//	printf("%d,%d", i,j);
//	swapij(pi, pj);
//	printf("\n\n\n\n");
//	if (i < j){
//		swapijp(&pi, &pj);
//	}
//	printf("%d,%d", *pi, *pj);
//	system("pause");
//	return 0;
//}
//1.在屏幕上输出以下图案：
//*
//***
//*****
//*******
//*********
//***********
//*************
//***********
//*********
//*******
//*****
//***
////*
//void print_star(){
//	int i = 0, j = 0;
//	for (i = 0; i < 7; i++){
//		for (j = 0; j < 2 * (i + 1) - 1; j++){
//			if (j == 0){
//				printf("%s", "   ");
//			}
//			printf("%c", '*');
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 6; i++){
//		for (j = 0; j < 11 - 2 * i; j++){
//			if (j == 0){
//				printf("%s", "   ");
//			}
//			printf("%c", '*');
//		}
//		printf("\n");
//	}
//}
//
//int sum_a(int a){
//	int sum = 0, key = 1 + 11 + 111 + 1111 + 11111;
//	sum = a*key;
//	return sum;
//}
//int main(){
//	for (int i = 0; i<1000; i++){
//		// 153 
//		int num_0 = i % 10; // 3
//		int num_1 = i / 10 % 10; // 5
//		int num_2 = i / 10 / 10 % 10; // 1
//		if (i == (num_0*num_0*num_0 + num_1*num_1*num_1 + num_2*num_2*num_2))
//			printf("%d\t", i);
//	}
//	system("pause");
//	return 0;
//}
///*
//在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
//例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
//153 = 1^3 + 5^3 + 3^3。
//370 = 3^3 + 7^3 + 0^3。
//371 = 3^3 + 7^3 + 1^3。
//407 = 4^3 + 0^3 + 7^3。
//*/
//
//
//3.
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222



//int maain(){
//	printf("%d\n", sum_a(2));
//	system("pause");
//	return 0;
//}


////4.编写一个程序，可以一直接收键盘字符，
////如果是小写字符就输出对应的大写字符，
////如果接收的是大写字符，就输出对应的小写字符，
////如果是数字不输出
//
//void change(){
//	// 改变字符串大小
//	printf("请输入一个字符串:>");
//	char str[1024] = {0};
//	scanf("%s",str);
//	int sz = 1024,i=0;
//	for (i = 0; i < sz;i++){
//		if (str[i] >= 'a' && str[i] <= 'z'){
//			str[i] = str[i] - 32;
//		}else if (str[i] >= 'A' && str[i] <= 'Z' ){
//			str[i] = str[i] + 32;
//		}else if (str[i] >= 0 && str[i] <= 9){
//			continue;
//		}
//	}
//	printf("%s",str);
//}
//int main(){
//	change();
//
//	system("pause");
//	return 0;
//}
//////3.编写代码模拟三次密码输入的场景。
//////最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//////可以重新输入，最多输入三次。三次均错，则提示退出程序。
////
////void log_in(){
////	int count = 0;
////	char* src = "123";
////	char dest[100] = {0};
////	printf("请输入密码:>");
////	scanf("%s", dest);
////	do{
////		if (0 == strcmp(dest, src)){
////			printf("登陆成功！");
////			break;
////		}
////		else{
////			if (2 == count){
////				printf("密码输入错误三次，加锁！\n");
////				break;
////			}
////			printf("登陆失败，重新输入密码:>");
////			scanf("%s", dest);
////		}
////		count++;
////	} while (count<3);
////}
////int main(){
////	log_in();
////
////	system("pause");
////	return 0;
////}
////1.完成猜数字游戏。
////
////void caishuzi(){
////	srand(time(NULL));
////	int input = 0;
////	do{
////		int rdata = rand();
////		int data = 0;
////		printf("%d\n", rdata);
////		printf("输入你所猜数字:>");
////		scanf("%d", &data);
////		while (data != rdata){
////			if (data > rdata){
////				printf("你所猜数据较大，请重猜！:>");
////				scanf("%d", &data);
////			}
////			else{
////				printf("你所猜数据较小，请重猜！:>");
////				scanf("%d", &data);
////			}
////		}
////		printf("成功！");
////		printf("是否继续玩游戏(0/1):>");
////		scanf("%d", &input);
////	} while (input);
////}
////2.写代码 
//// 可以在整型有序数组中查找想要的数字，
////找到了返回下标，找不到返回 - 1.（折半查找,二分法）
//int bin_search(int* arr,int key,int size){
//	int index = -1, begin = 0,end = size - 1;
//	int search = (begin + end) / 2;
//	while (begin < end){
//		if (arr[search] > key){
//			end = search;
//			search = (begin + end) / 2;
//		}
//		if (arr[search] < key){
//			begin = search;
//			search = (begin + end) / 2;
//		}
//		if (arr[search] == key){
//			index = search;
//			break;
//		}
//	}
//	return index;
//}
//
//int masin(){
//	int arr[] = {2,43,45,66,76,76,77,78,6543,32222};
//	int s=bin_search(arr,76,sizeof(arr)/sizeof(arr[0]));
//	printf("%d\n",s);
//	system("pause");
//	return 0;
//}
////
//
////void log_in(){
////	char* str = "123";
////	char* s = "";
////	printf("请输入密码:>");
////	scanf("%s", s);
////	int i = 0;
////	while (i<3){
////		if (*s == *str){
////			printf("成功登陆");
////		}
////		else
////		{
////			printf("登陆失败，请重新输入密码:>");
////			scanf("%s", s);
////		}
////		i++;
////	}
////}
////int main(){
////	log_in();
////	system("pause");
////	return 0;
////}
////
////4.编写一个程序，可以一直接收键盘字符，
////如果是小写字符就输出对应的大写字符，
////如果接收的是大写字符，就输出对应的小写字符，
////如果是数字不输出。
//
//int maain(){
//	//caishuzi();
//	system("pause");
//	return 0;
//}

//
////1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//// size 为每一个元素的大小
//void change_arr(int* arr1,int* arr2){
//	int i = 0;
//	for (i = 0; arr1[i];i++){
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = arr1[i];
//	}
//}
//int mazin(){
//	int arr1[] = {2,2,3,34,1,12};
//	int arr2[] = {42,44,42,2,22,12};
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	change_arr(arr1,arr2);
//	for (int i = 0; i < sz - 1; i++) {
//		printf("%d ",arr1[i]);
//	}
//	system("pause");
//	return 0;
//}
////2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
//double jisuan(){
//	int i = 1;
//	double sum = 0;
//	do{
//		sum += (i % 2) ? (1.0 / i) : (-1.0 / i);
//		i++;
//	} while (i<=100);
//	return sum;
//}
////3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
//
//int Appear9(){
//	int count = 0,i=1;
//	while (i<=100){
//		printf("%d\n",i);
//		int j = i;
//		do{ // 39%10 9
//			// 39/10 3
//
//			if (j == 9){
//				count++;
//				break;
//			}
//			if (9 == j / 10){
//				count++;
//			}
//			j = j % 10;
//		} while (j>=9);
//		i++;
//	}
//	return count;
//}
//void print_array(int* arr, int sz){
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	printf("%d\n", Appear9());
//	printf("%lf\n", jisuan());
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//在这里完成代码
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_array(arr, sz);
//	//printf("%d\n",sizeof(short));
//	system("pause");
//	return 0;
//}