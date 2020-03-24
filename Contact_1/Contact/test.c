#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <windows.h>


// 
// 时间复杂度 O(3)->O(1)
// O(12)->O(1)
void al(){
	int sum = 0,n = 100;
	sum = (1 + n)*n / 2;
	printf("%d\n",sum);
}
//O(n)
void all(int n){
	int i = 0;
	for (i = 0; i < n;i++){
		printf("%D\n",i);
	}
}

/*
	 count*2*2
	 2^x=n
	 x=logaN => O(logN)
	 logaN = logcN/logca
	 如果算法复杂度最大高次项的乘数
	 如果不是1 直接舍去
	 logN
*/
void alk(int n){
	int count = 0;
	while (count < n){
		count *= 2;
	}
}

// 算法复杂度为O(2^n)
// n + (n-1) + (n-2) + (n-3) + ... 1
// (n+1)*n/2 取其最高项
void ff(int n,int m){
	int i = 0, j = 0;
	for (i = 0; i < n;i++){
		for (j = 0; j < m;j++){
			printf("%d ",i+j);
		}
		printf("\n");
	}
}

// 1+n+n^2+(n+1)*n/2 = O(n^2)


// 数据结构中用O来计算时间复杂度
int madin(){

	system("pause");
	return 0;
}


//其声明在stdlib.h文件中，是根据二分法写的，其时间复杂度为n*log(n)
/*
	　功能： 使用快速排序例程进行排序
　　头文件：stdlib.h
　　用法：  void qsort(void* base,size_t num,size_t width,
  int(__cdecl*compare)(const void*,const void*)); 
　　参数： 1 待排序数组，排序之后的结果仍放在这个数组中
　　　　　 2 数组中待排序元素数量
　　　　   3 各元素的占用空间大小（单位为字节）
　　       4 指向函数的指针，用于确定排序的顺序（需要用户自定义一个比较函数）
*/
//void print(int* arr, int sz){
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		printf("%d ", *(arr + i));
//	}
//}
//int cmp_int(const void* _a, const void* _b){
//	int* a = (int*)_a;    //强制类型转换
//	int* b = (int*)_b;
//	return *a - *b;
//}
//typedef struct Student{
//	char stuId[20];
//	char stuName[20];
//	int stuAge;
//	char addr[100];
//}Student;
//void print_stu(Student* S,int sz){
//	int i = 0;
//	for (i = 0; i < sz;i++){
//		printf("%-20s\t%-20s\t%-20d\t%-20s\n",S[i].stuId,S[i].stuName,S[i].stuAge,S[i].addr);
//	}
//}
//int compare_stu(Student* s1,Student* s2){
//	if ((*s1).stuAge != (*s2).stuAge){
//		return (*s1).stuAge - (*s2).stuAge;
//	}
//	else if ((*s1).stuId != (*s2).stuId){
//		return (*s1).stuId - (*s2).stuId;
//	}
//	return 0;
//}
//int main(){
//	//int num[10] = {25,8,62,153,937,28,623,91,638,7560};
//	//qsort(num, 10, sizeof(num[0]), cmp_int);
//	//print(num,10);
//	Student student[] = {
//			{"123442123","王五",21,"美国"},
//			{ "12332144", "李四", 23, "日本" },
//			{ "42123424", "张三", 51, "xiao重庆" },
//			{ "43123442", "z洪", 31, "English" }
//	};
//	print_stu(student,4);
//	qsort(student,4,sizeof(Student),compare_stu);
//	printf("\n\n\n");
//	print_stu(student, 4);
//
//	//printf("%d\n",sizeof(Student)); //144
//	//printf("end\n");
//	system("pause");
//	return 0;
//}

// 练习使用库函数，qsort排序各种类型的数据
// 写一个不知道数据类型的排序算法，冒泡排序
//typedef int (*fun)(void*,void*);
//// size 为每个数据的字节数
//// sz 为每一组数据的个数
//// pfun 排序规则
//void bubble(void* data, int size,int sz, fun pfun){
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1;i++){
//		for (j = 0; j < sz - i - 1;j++){
//			if (1 == pfun(data + j*size, data + (j+1)*size)){
//
//			}
//		}
//	}
//}


//
//// 转移表解决多功能问题
//// 
//
//void print(int* arr,int sz){
//	int i = 0;
//	for (i = 0; i < sz;i++){
//		printf("%d ", *(arr + i));
//	}
//}
//
////void bubble_sort(int* arr,int sz,int isAsc){
////	int i = 0;
////	int j = 0;
////	for (i = 0; i < sz-1;i++){
////		if (1 == isAsc){
////			for (j = 0; j < sz - i - 1; j++){
////				if (*(arr + j)> *(arr + j + 1)){
////					int tmp = *(arr + j);
////					*(arr + j) = *(arr + j + 1);
////					*(arr + j + 1) = tmp;
////				}
////			}
////		}else if( 0 == isAsc){
////			for (j = 0; j < sz - i - 1; j++){
////				if (*(arr + j)< *(arr + j + 1)){
////					int tmp = *(arr + j);
////					*(arr + j) = *(arr + j + 1);
////					*(arr + j + 1) = tmp;
////				}
////			}
////		}
////		
////	}
////}
//
//// 定义回调函数
//typedef int (*Fun)(int*,int*);
//void Asc(int* i, int* j){
//	if (*i > *j){
//		int k = *i;
//		*i = *j;
//		*j = k;
//	}
//}
//void Less(int* i, int* j){
//	if (*i < *j){
//		int k = *i;
//		*i = *j;
//		*j = k;
//	}
//}
//// 回调函数的使用
////void bubble_sort(int* arr, int sz, Fun pfun){
////	int i = 0;
////	int j = 0;
////	for (i = 0; i < sz - 1; i++){
////		for (j = 0; j < sz - i - 1; j++){
////			if (1 == pfun((arr + j), (arr + j + 1))){
////				int tmp = *(arr + j);
////				*(arr + j) = *(arr + j + 1);
////				*(arr + j + 1) = tmp;
////			}
////		}
////	}
////}
//int maxsin(){
//	
//	int arr[] = {33,24,5,6,21,45,13,3,3};
//	// sizeof(arr) 此处的arr指的是一个数组，整个数组的字节大小，并非指首元素地址
//	// &arr 此处的取地址也是指取整个数组，并非指取首元素地址，当&arr+1时是跳过整个数组
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, Less);
//	print(arr,sz);
//	system("pause");
//	return 0;
//}
//
//
//int check_circle(char* str1,char* str2){
//	int i = 0, j = 0;
//	int sz = strlen(str1);
//	for (i = 0; i < sz;i++){
//		char ch = str1[0];
//		for (j = 0; j < sz ;j++){
//			str1[j] = str1[j+1];
//		}
//		str1[j - 1] = ch;
//		if (1 == strcmp(str1,str2)){
//			// 是旋转之后的字符串，返回1
//			return 1;
//		}
//	}
//	// 不是旋转之后的字符串，返回0
//	return 0;
//}
////int maswsain()
////{
////	char s1[10] = "abcd";
////	char s2[10] = "cdab";
////	printf("s1 = %s\n", s1);
////	printf("s2 = %s\n", s2);
////	if (1 == chefck(s1, s2))
////	{
////		printf("s1为s2旋转后的字符串!\n");
////	}
////	else
////	{
////		printf("s1不是s2旋转后的字符串!\n");
////	}
////	system("pause");
////	return 0;
////}
////int compare(char str1[], char str2[])
////{
////	int i = 0;
////	int j = 0;
////	int length = strlen(str1);
////	for (j = 1; j <= length; j++)
////	{
////		int tmp = str1[0];
////		for (i = 0; i < length - 1; i++)
////		{
////			str1[i] = str1[i + 1];
////		}
////		str1[length - 1] = tmp;
////		if (0 == strcmp(str1, str2))
////		{
////			return 1;
////		}
////	}
////	return 0;
////}
//
//
//
////int check(char* src, char* dest){
////	int i = 0, j = 0;
////	int sz = strlen(src);
////	for (i = 0; i < sz; i++){
////		int tmp = dest[0];
////		for (j = 0; j < sz - 1; j++){
////			dest[j] = dest[j + 1];
////		}
////		dest[j - 1] = tmp;
////		if (0 == strcmp(src, dest)){
////			return 1;
////		}
////	}
////	return 0;
////}
////int compare(char str1[], char str2[])
////{
////	int i = 0;
////	int j = 0;
////	int length = strlen(str1);
////	for (j = 1; j <= length; j++)
////	{
////		int tmp = str1[0];
////		for (i = 0; i < length - 1; i++)
////		{
////			str1[i] = str1[i + 1];
////		}
////		str1[length - 1] = tmp;
////		if (0 == strcmp(str1, str2))
////		{
////			return 1;
////		}
////	}
////	return 0;
////}
//
//int chewck(char src[], char dest[]){
//	int i = 0;
//	int j = 0;
//	int sz = strlen(src);
//	for (i = 0; i < sz - 1; i++){
//		char ch = src[0];
//		
//		for (j = 0; j < sz - 1; j++){
//			src[j] = src[j + 1];
//		}
//		src[j - 1] = ch;
//		// 如果两个字符串一致，则返回0
//		if (0 == strcmp(src, dest)){
//			return 1;
//		}
//	}
//	return 0;
//}
//
//
//
//int mafin(){
//	char* src = "abcd";
//	char* dest = "cdab";
//	int sz = sizeof(src);
//	//printf("%d\n", check(src, dest));
//	system("pause");
//	return 0;
//}
//int maasdin(){
//
//	char* str = "sjd";
//	char ff[] = { 's', 'j','d','\0' };
//	printf("%d\n", sizeof(ff));
//	printf("%d\n", strlen(ff));
//	printf("%d\n", sizeof(*&str));
//	printf("%d\n", strlen(str));
//
//	system("pause");
//	return 0;
//}
//
//void bubbleSort(int arr[],int sz){
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1;i++){
//		for (j = 0; j < sz - i - 1; j++){
//			if (arr[j]>arr[j+1]){
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int mawin(){
//	int arr[] = { 2, 4, 5, 3, 2, 45, 4, 32, 12 };
//	bubbleSort(arr, 9);
//
//	system("pause");
//	return 0;
//}
//void menu(){
//	printf("***********************************\n");
//	printf("*****   0、退出               *****\n");
//	printf("*****   1、顺时针旋转字符串   *****\n");
//	printf("*****   2、逆时针旋转字符串   *****\n");
//	printf("***********************************\n");
//}
//
////void nsz(char* src,int k){
////	int i = 0;
////	for (i = 0; i < k;i++){
////		char c = src[0];
////		int j = 0;
////		for (j = 0; j < strlen(src) - 1; j++){
////			src[j] = src[j + 1];
////		}
////		src[j-1] = c;
////	}
////	printf("%s\n",*src);
////}
//// 功能：左右旋转字符串
//void circle(){
//	int n = 0;
//	char* src = "";
//	int k = 0;
//	do{
//		menu();
//		printf("请选择旋转方向:>");
//		scanf("%d", &n);
//		switch (n){
//			case 1:
//				printf("输入字符串:>");
//				scanf("%s", src);
//				printf("输入旋转次数:>");
//				scanf("%d", &k);
//				//ssz(src,k);
//				break;
//			case 2:
//				printf("输入字符串:>");
//				scanf("%s", src);
//				printf("输入旋转次数:>");
//				scanf("%d", &k);
//				//nsz(src, k);
//				break;
//			case 0:
//				printf("退出！\n");
//				n = 0;
//				break;
//			default:
//				break;
//		}
//	} while (n);
//}
//int maasin(){
//
//	circle();
//	system("pause");
//	return 0;
//}
//
////	写一个函数，
////判断一个字符串是否为另外一个字符串旋转
////	之后的字符串。
//void fuzhi(char* a, char* b){
//	*a = *b; 
//}
//
//
//int mains(){
//	// %d 转换成 有符号 十进制 整数
//	// %u	     无符号 十进制 整数
//
//	int i = 20;
//	unsigned int j = 10;
//	unsigned int k = i + j;
//	printf("%d\n%d\n",i+j,k);
//	system("pause");
//	return 0;
//}
//
//
//// offsetof()的实现
//typedef struct Un{
//	int i;
//	char c;
//}Un;
//int offsetof(Un u,void* v){
//	return (size_t)&(((Un*)0)->i);
//}
//int msain(){
//	//printf("%d\n", check("abcd", "cdab"));
//	printf("%d\n", strcmp("asd","asd"));
//	system("pause");
//	return 0;
//}
//int find_key(int src[4][4],int h,int s,int key){
//	// row ++
//	// col --
//	int row = 0;
//	int col = s-1;
//	
//	while ((row <= h) & (col >= 0)){
//		if (src[row][col] > key){
//			col--;
//		}
//		if (src[row][col] < key){
//			row++;
//		}
//		if (src[row][col] == key){
//			return 1;
//		}
//	}
//	return 0;
//}
//int maisdn(){
//
//	int src[4][4] = { { 1, 2, 4, 5 }, { 3, 4, 6, 7 }, { 4, 5, 7, 8 }, { 7, 9, 10, 12 } };
//	printf("%d\n", find_key(src, 4,4,10));
//
//	system("pause");
//	return 0;
//}
////int check_circle( char src[], char dest[]){
////
////	int i = 0;
////	int len = strlen(src);
////	for (i = 0; i < len - 1; i++){
////		char ch = dest[0];
////		int j = 0;
////		for (j = 0; j < len - 1; j++){
////			dest[j] = dest[j + 1];
////		}
////		dest[j-1] = ch;
////		if (0 == strcmp(src, dest)){
////			return 1;
////		}
////	}
////	return 0;
////}
//
//
//
//int compsare(char str1[], char str2[])
//{
//	int i = 0;
//	int j = 0;
//	int length = strlen(str1);
//	for (j = 1; j <= length; j++)
//	{
//		int tmp = str1[0];
//		for (i = 0; i < length - 1; i++)
//		{
//			str1[i] = str1[i + 1];
//		}
//		str1[length - 1] = tmp;
//		if (0 == strcmp(str1, str2))
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int masdin(){
//
//	//printf("%d\n", compare("abcd", "cdab"));
//	system("pause");
//	return 0;
//}
//
//
////void print(int src[4][4], int row, int col){
////	int i = 0, j = 0;
////	for (i = 0; i < row; i++){
////		for (j = 0; j < col; j++){
////			printf("%-3d  ", src[i][j]);
////		}
////		printf("\n");
////	}
////}
//
//
//int Findnum(int arr[4][4], int row, int col, int key) {
//	int left = 0;
//	int right = col - 1;
//	while ((left >= 0) && (right < col)) {
//		//如果这个数字小于key，则向后移一位；
//		if (arr[left][right] < key) {
//			left++;
//		}
//		//如果这个数字大于key，则向前移一位；
//		if (arr[left][right] > key) {
//			right--;
//		}
//		//如果这个数字等于key，则返回1；
//		if (arr[left][right] == key) {
//			return 1;
//		}
//	}
//	//否则返回1；
//	return 0;
//}
//// int  (* (*p)[10] )  (int *)
//int mai3n(){
//
//	int src[4][4] = {{ 1, 2, 4, 5 }, { 3, 4, 6, 7 }, { 4, 5, 7, 8 }, {7,9,10,12}};
//	//print(src,4,4);
//	printf("%d\n", Findnum(src,4,4,7));
//	int sh = 0;
//	int row = sizeof(src) / sizeof(src[0]);
//	int col = sizeof(src[0]) / sizeof(src[0][0]);
//	printf("输入需查询的数据:>");
//	scanf("%d",&sh);
//	//首先判断该数是否在矩阵范围内
//	if ((sh >= src[0][0]) & (sh <= src[4][4])){
//		// 若在该矩阵中，找出具体位置将其打印出来
//
//
//		//先找出在正对角线所居范围
//		int i = 0;
//		for (i = 0; i < row;i++){
//
//		}
//	}else{
//		printf("该数不在该矩阵中!\n");
//	}
//
//	system("pause");
//	return 0;
//}
///*
//int main(){
//
//	char* src = "abcd";
//	char* dest = "cdab";
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 0; i < strlen(src) - 1;i++){
//		// abcd
//		// cdab
//		for (j = 0; j < strlen(dest) - 1;j++){
//			if (src[i] == dest[j]){
//				count++;
//				j++;
//				break;
//			}
//		}
//	}
//	//printf("%d\n", strlen(src));
//	int c = count;
//	for (i = 0; i < strlen(src) - c; i++){
//		if (src[i + count] == dest[i]){
//			count++;
//		}
//	}
//
//	printf("%d\n",count);
//	system("pause");
//	return 0;
//
//}
//*/
///*
//void left_move(char ch[], int k)
//{
//	for (int i = 0; i < k; i++)
//	{
//		char temp = ch[0];
//		for (int j = 0; j < strlen(ch) - 1; j++)
//		{
//			ch[j] = ch[j + 1];
//		}
//		ch[strlen(ch) - 1] = temp;
//	}
//}
//
//int main()
//{
//	//1.实现一个函数，可以左旋字符串中的k个字符。
//	//ABCD左旋一个字符得到BCDA
//	//ABCD左旋两个字符得到CDAB
//	char ch[] = "ABCD";
//	int k = 0;   //旋转k个字符
//	scanf("%d", &k);
//	left_move(ch, k);
//	printf("%s\n", ch);
//	system("pause");
//	return 0;
//}
//
//*/
//
///*
//void left_move(char ch[], int k)
//{
//	for (int i = 0; i < k; i++)
//	{
//		char temp = ch[0];
//		for (int j = 0; j < strlen(ch) - 1; j++)
//		{
//			ch[j] = ch[j + 1];
//		}
//		ch[strlen(ch) - 1] = temp;
//	}
//}
//
//void left_turn(char src[],int n){
//	int i = 0;
//	for (i = 0; i < n;i++){
//		char ch = src[0];
//		int j = 0;
//		for (j = 0; j < strlen(src) - 1; j++){
//			src[j] = src[j + 1];
//		}//hjk
//		src[j-1] = ch;
//	}
//	printf("%s\n", *src);
//}
//int main(){
//	char* ch = "zheng hong";
//	left_turn(ch, 2);
//	system("pause");
//	return 0;
//}
//*/
//
///*
//
//	3、有一个数字矩阵，矩阵的每行从左到右是递增的，
//	矩阵从上到下是递增的，
//	请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);
//答题
//
//
//int check_circle(char* src, char* dest){
//	
//		例如：给定s1 =AABCD和s2 = BCDAA，返回1
//		给定s1=abcd和s2=ACBD，返回0.
//	
//
//
//2、	实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//答题
//* /
//
//void left_turn(char* src, int n){
//	int i = 0;
//	for (i = 0; i < n; i++){
//		char temp = src[0];
//		int j = 0;
//		for (j = 0; src; j++, src++){
//			src[j] = src[j + 1];
//		}
//		src[j] = temp;
//	}
//}
//int main(){
//
//	char* p = "zheng hong";
//	left_turn(p,5);
//	printf("%s\n", *p);
//
//	//
//	//	写一个函数，
//	//	判断一个字符串是否为另外一个字符串旋转
//	//	之后的字符串。
//	//	
//	
//	//check_circle(char* src , char* dest);
//	system("pause");
//	return 0;
//}
//*/