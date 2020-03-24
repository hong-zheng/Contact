#define _CRT_SECURE_NO_WARNINGS 1
// 微软搞事情，printf_s也不见得安全，本方版本 认为安全，事实上并非如此
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<sys/timeb.h>
#include<assert.h>
#include<limits.h>
#include<math.h>
#include<stddef.h>


//1.递归和非递归分别实现求第n个斐波那契数。
//int FFbnq(int num){
//	if ( num == 1 || num==2){
//		return 1;
//	}
//	return FFbnq(num - 2) + FFbnq(num - 1);
//}
//int FFFbnq(int num){
//	int x=1,y=1,cur=0;
//	//  1 1 2 3 5 8 13 21 
//	for (size_t i = 2; i < num;i++){
//		cur = x + y;
//		x = y;
//		y = cur;
//	}
//	return cur;
//}
//
//2.编写一个函数实现n^k，使用递归实现
//int n_k(int n,int k){
//	if (0==k){
//		return 1;
//	}
//	return n*n_k(n,k-1);
//}
//
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//int DigitSum(size_t  num){
//	int ret = 0;
//	while (num){
//		ret += num % 10;
//		num = num / 10;
//	}
//	return ret;
//}
//
//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//void reverse_string(char * string){
//	// wei ren min fu wu
//	assert( NULL != string);
//	char* pstr = string + strlen(string) - 1;
//	for (size_t i = 0;i<strlen(string);i++){
//		printf("%c",*pstr--);
//	}
//	printf("\n");
//}
// 反向打印出来
//void  reverse_string(char *string){
//	if (*string != '\0')
//		reverse_string(string + 1);
//	printf("%c", *(string));
//}
//
//5.递归和非递归分别实现strlen
//size_t SSStrlen(const char* src){
//	assert( NULL != src);
//	int sum = 0;
//	while (NULL != *src){
//		src++;
//		sum++;
//	}
//	return sum;
//}
//size_t SSStrlen(const char* src){
//	if ('\0' == *src){
//		return 0;
//	}
//	return SSStrlen(src+1)+1;
//}
//6.递归和非递归分别实现求n的阶乘
//size_t jiecheng(int num){
//	if (1 == num){
//		return 1;
//	}
//	return num*jiecheng(num-1);
//}
//int jiecheng(int num){
//	int ret = 1;
//	for (; num>0;num--){
//		ret *= num;
//	}
//	return ret;
//}
//7.递归方式实现打印一个整数的每一位

// 逆向打印
//int print_int(int num){
//	if (num<10){
//		printf("%d",num);
//		return;
//	}
//	printf("%d", num%10);
//	return print_int(num/10);
//}
// 正向打印
//void print(int n)
//{
//	if (n < 10)
//	{
//		printf("%d ", n);
//	}
//	else
//	{
//		// 123  12 1
//		print(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//
//int print_int(int num){
//	if (num<10){
//		printf("%d",num);
//		return;
//	}
//	printf("%d", num%10);
//	return print_int(num/10);
//}

//void rotate(int* nums, int numsSize, int k){
//	if (NULL == nums || 0 == k){
//		return;
//	}
//	for (size_t i = 0; i <= k; i++){
//		int cur = nums[0];
//		for (size_t j = 0; j < numsSize - 1; j++){
//			nums[j] = nums[j + 1];
//		}
//		nums[numsSize - 1] = cur;
//	}
//	for (size_t i = 0; i < numsSize; i++){
//		printf("%d ", nums[i]);
//	}
//}

//void rotate(int* nums, int numsSize, int k){
//	if (NULL == nums || 0 == k){
//		return;
//	}
//	for (size_t i = 0; i< k; i++){
//		int cur = nums[numsSize - 1];
//		for (size_t j = numsSize - 1; j>0; j--){
//			nums[j] = nums[j - 1];
//		}
//		nums[0] = cur;
//	}
//	for (size_t i = 0; i < numsSize; i++){
//		printf("%d ", nums[i]);
//	}
//}

int removeElement(int* nums, int numsSize, int val){
	if (NULL == nums){
		return;
	}
	//[0,1,2,2,3,0,4,2]
	// 2
	//[0,1,2,2,3,0,4,2]  8
	//[0,1,2,2,3,0,4,2]  8
	//[0,1,2,3,0,4,2]  7


	//[3,3] 2
	//3
	//[3,3] 2
	int flag = 0;
	for (size_t i = 0; i<numsSize; i++){
		if (flag){
			i--;
			flag = 0;
		}
		if (val == nums[i]){
			for (size_t j = i; j<numsSize - 1 + !flag; j++){
				nums[j] = nums[j + 1];
			}
			numsSize--;
			flag = 1;
		}
	}
	return numsSize;
}
int masddin(){

	//int arr[] = {5,2 ,3,4,5,6,5};
	//removeElement(arr, 7,5);
	//for (size_t i = 0; i < 7;i++){
	//	printf("%d ",arr[i]);
	//}
	
	printf("%d\n",sizeof("洪"));

	//print_int(11221323);
	//printf("%d\n", jiecheng(5));
	system("pause");
	return 0;
}


//char* SStrstr(const char* dest,const char* src){
//	assert( NULL!=dest && NULL!=src);
//	char* black = dest;
//	while ('\0' != *black){
//		char* sub = src;
//		char* red = black;
//		while (*red != '\0' && *sub!='\0' && *sub==*red){
//			red++;
//			sub++;
//		}
//		if ('\0' == *sub){
//			return black;
//		}
//		if ('\0' == *red){
//			return NULL;
//		}
//		black++;
//	}
//	return NULL;
//}
//int main(){
//
//	char* dest = "zheng  dfhkjadj";
//	char* src = "dfhk";
//	printf("%s\n", SStrstr(dest,src));
//	system("pause");
//	return 0;
//}


//// 存货记录的声明
//
//// 包含零件专用信息的结构
//typedef struct{
//	int cost; 
//	int supplier;
//}Partinfo;
//// 存储装配件专用信息的结构
//typedef struct{
//	int n_parts;
//	struct SUBAASSYPART{
//		char partno[10];
//		short quan;
//	}*part;
//} Subassyinfo;
//
//// 存货实体结构，它是一个变体记录
//typedef struct{
//	char partno[10];
//	int quan;
//	// enum变量存储方式 和int类型一样
//	enum{
//		PART,
//		SUBASSY
//	}type;
//	union {
//		Partinfo* part;
//		Subassyinfo* subassy;
//	};
//}Invrec;
//
//#define loop \
//	for(size_t i = 0;i<10;i++){\
//		printf("%d ",i);\
//	}
//
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Para1 : 2;
//	unsigned char state;
//	unsigned char avail : 1;
//}*Env_Alarm_Record;
//
//
//struct p{
//	unsigned char i : 2;
//	unsigned char j : 7;
//	char k;
//
//};
//struct tagPIM
//{
//	unsigned char ucPim1;
//	unsigned char ucData0 : 1;
//	unsigned char ucData1 : 2;
//	unsigned char ucData2 : 3;
//}*pstPimData;
//
//// memmove
//// shkfka
//// sdfalkd
//void* MMemcpy(void* dest, const void* src, size_t num){
//	assert( NULL!=dest && NULL!=src);
//	char* cdest = (char*)dest;
//	char* csrc = (char*)src;
//	for (size_t i = 0; i < num;i++){
//		*cdest = *csrc;
//		cdest++;
//		csrc++;
//	}
//	return dest;
//}
//
//// memmove 内存移除，前后方向拷贝
//void* MMemmove(void* dest,const void* src,size_t num){
//	assert( NULL!=dest && NULL!=src);
//	char* cdest = (char*)dest;
//	char* csrc = (char*)src;
//
//	// 判断是从左向右拷贝还是从右向左拷贝
//	if (csrc < cdest && (csrc + num)>cdest){
//		// 此处用指针定义长度及其大小，通过指针的大小判断出处
//		char* pcdest = cdest + num - 1;
//		char* pcsrc = csrc + num - 1;
//		for(size_t i = 0; i < num;i++){
//			*pcdest = *csrc;
//			pcdest--;
//			pcsrc--;
//		}
//		*(pcdest + num) = '\0';
//	}
//	else
//	{
//		MMemcpy(dest,src,num);
//	}
//	return dest;
//}
//
//void* mem_move(void* dest, void* src, size_t num){
//	assert(dest != NULL && src != NULL);
//
//	// 判断是否有内存重叠，如果有就自后向前移
//	char* cdest = (char*)dest;
//	char* csrc = (char*)src;
//	if (csrc < cdest && (csrc + num>cdest)){
//		char* psrc = csrc + num - 1;
//		char* pdest = cdest + num - 1;
//		for (size_t i = 0; i < num; i++){
//			*pdest = *psrc;
//			pdest--;
//			psrc--;
//		}
//		*(cdest + num) = '\0';
//	}
//	else{
//		MMemcpy(dest, src, num);
//	}
//	return dest;
//}
//
//
//const int SSStrcmp(const char* dest,const char* src){
//	assert( NULL!=dest && NULL!=src);
//	while ( '\0'!=*dest && '\0'!=*src){
//		if (*dest>*src){
//			return 1;
//		}else if(*dest<*src){
//			return -1;
//		}else{
//			src++;
//			dest++;
//		}
//	}
//	// 跳出循环
//	if (*dest>*src){
//		return -1;
//	}else if(*dest < *src){
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}



//int main(){
//	char arr[] = "heehjjehe";
//	char* src = "heehjjehe";
//	printf("%d\n", SSStrcmp(arr,src));
//
//	//char* p = (char*)mem_move(arr, src, strlen(src));
//	//for (size_t i = 0; i < strlen(src);i++){
//	//	printf("%c");
//	//}
//	
//	//union
//	//{
//	//	short k;
//	//	char i[2];
//	//}*s, a;
//	//s = &a;
//	//s->i[0] = 0x39;
//	//s->i[1] = 0x38;
//	//printf("%x\n", a.k);
//	//printf("%d \n", sizeof(struct tagPIM));
//	//printf("%d \n", sizeof(struct _Record_Struct));
//	//loop;
//	system("pause");
//	return 0;
//}

//int main(){
//
//
//	// boost 是C++中的一个非常知名的库，"准标准库"
//	char* str1 = "This is a simple string!";
//	// strstok 会毁坏原字符串 将" "改为'\0',最后一个'\0'不必替换直接打印
//	char* pch = strstok(str1, " ");
//	while (pch != NULL){
//		// 没找到分隔符就返回NULL
//		printf("%s\n", pch);
//		// 从上一个切分位置再找'\0'然后再改
//
//		// 之所以传NULL，是因为里面定义的是static变量
//		// static 修饰局部变量，此时这个变量的生命周期就变成全局了，在整个程序中都会保存
//		// 但是这种方式特别不好，但在C语言库中很多函数都是这样写的
//		// 导致strstok  线程不安全
//		// 多线程之间执行就是抢占式执行的
//		// 在很多公司禁止使用strstok函数
//		pch = strstok(NULL, " ");
//
//	}
//
//	system("pause");
//	return 0;
//}
//int main(){
//	char* str = "wei ren min fu wu";
//	// 实现一个动态复制字符串
//	int sz = strlen(str);
//	char* pstr = malloc(sizeof(char)*sz);
//	if (NULL == pstr)
//		return 0;
//	for (size_t i = 0; i < sz;i++){
//		*(pstr + i) = *str++;
//	}
//	size_t i = 0;
//	for (i = 0; i < sz; i++){
//		printf("%c ", *(pstr + i));
//	}
//	*(pstr + i) = '\0';
//	printf("\n");
//	free(pstr);
//	pstr = NULL;
//	system("pause");
//	return 0;
//}

// 利用申请空间形式排序
//const int cmp_int(const int* a,const int* b){
//	return *a > *b ? 1 : *a < *b ? -1 : 0;
//}
//int main(){
//	// 定义一个要申请的空间数
//	int num = 0;
//	// 存储申请空间的地址
//	int* arr = NULL;
//
//	printf("输入需要申请空间的数量:>");
//	scanf("%d",&num);
//	arr = (int*)malloc(num*sizeof(int));
//	if (NULL == arr){
//		printf("申请内存失败！");
//		return 0;
//	}
//	for (size_t i = 0; i < num;i++){
//		printf("输入第%d个数:>",i+1);
//		scanf("%d",&arr[i]);
//	}
//	qsort(arr,num,sizeof(int),cmp_int);
//	for (size_t i = 0; i < num;i++){
//		printf("%d ",arr[i]);
//	}
//	free(arr);
//	arr = NULL;
//	system("pause");
//	return 0;
//}