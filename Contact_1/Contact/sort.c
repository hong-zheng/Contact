#define _CRT_SECURE_NO_WARNINGS 1
// ΢������飬printf_sҲ�����ð�ȫ�������汾 ��Ϊ��ȫ����ʵ�ϲ������
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<sys/timeb.h>
#include<assert.h>
#include<limits.h>
#include<math.h>
#include<stddef.h>


//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
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
//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
//int n_k(int n,int k){
//	if (0==k){
//		return 1;
//	}
//	return n*n_k(n,k-1);
//}
//
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//int DigitSum(size_t  num){
//	int ret = 0;
//	while (num){
//		ret += num % 10;
//		num = num / 10;
//	}
//	return ret;
//}
//
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//void reverse_string(char * string){
//	// wei ren min fu wu
//	assert( NULL != string);
//	char* pstr = string + strlen(string) - 1;
//	for (size_t i = 0;i<strlen(string);i++){
//		printf("%c",*pstr--);
//	}
//	printf("\n");
//}
// �����ӡ����
//void  reverse_string(char *string){
//	if (*string != '\0')
//		reverse_string(string + 1);
//	printf("%c", *(string));
//}
//
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
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
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
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
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

// �����ӡ
//int print_int(int num){
//	if (num<10){
//		printf("%d",num);
//		return;
//	}
//	printf("%d", num%10);
//	return print_int(num/10);
//}
// �����ӡ
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
	
	printf("%d\n",sizeof("��"));

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


//// �����¼������
//
//// �������ר����Ϣ�Ľṹ
//typedef struct{
//	int cost; 
//	int supplier;
//}Partinfo;
//// �洢װ���ר����Ϣ�Ľṹ
//typedef struct{
//	int n_parts;
//	struct SUBAASSYPART{
//		char partno[10];
//		short quan;
//	}*part;
//} Subassyinfo;
//
//// ���ʵ��ṹ������һ�������¼
//typedef struct{
//	char partno[10];
//	int quan;
//	// enum�����洢��ʽ ��int����һ��
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
//// memmove �ڴ��Ƴ���ǰ���򿽱�
//void* MMemmove(void* dest,const void* src,size_t num){
//	assert( NULL!=dest && NULL!=src);
//	char* cdest = (char*)dest;
//	char* csrc = (char*)src;
//
//	// �ж��Ǵ������ҿ������Ǵ������󿽱�
//	if (csrc < cdest && (csrc + num)>cdest){
//		// �˴���ָ�붨�峤�ȼ����С��ͨ��ָ��Ĵ�С�жϳ���
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
//	// �ж��Ƿ����ڴ��ص�������о��Ժ���ǰ��
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
//	// ����ѭ��
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
//	// boost ��C++�е�һ���ǳ�֪���Ŀ⣬"׼��׼��"
//	char* str1 = "This is a simple string!";
//	// strstok ��ٻ�ԭ�ַ��� ��" "��Ϊ'\0',���һ��'\0'�����滻ֱ�Ӵ�ӡ
//	char* pch = strstok(str1, " ");
//	while (pch != NULL){
//		// û�ҵ��ָ����ͷ���NULL
//		printf("%s\n", pch);
//		// ����һ���з�λ������'\0'Ȼ���ٸ�
//
//		// ֮���Դ�NULL������Ϊ���涨�����static����
//		// static ���ξֲ���������ʱ����������������ھͱ��ȫ���ˣ������������ж��ᱣ��
//		// �������ַ�ʽ�ر𲻺ã�����C���Կ��кܶຯ����������д��
//		// ����strstok  �̲߳���ȫ
//		// ���߳�֮��ִ�о�����ռʽִ�е�
//		// �ںܶ๫˾��ֹʹ��strstok����
//		pch = strstok(NULL, " ");
//
//	}
//
//	system("pause");
//	return 0;
//}
//int main(){
//	char* str = "wei ren min fu wu";
//	// ʵ��һ����̬�����ַ���
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

// ��������ռ���ʽ����
//const int cmp_int(const int* a,const int* b){
//	return *a > *b ? 1 : *a < *b ? -1 : 0;
//}
//int main(){
//	// ����һ��Ҫ����Ŀռ���
//	int num = 0;
//	// �洢����ռ�ĵ�ַ
//	int* arr = NULL;
//
//	printf("������Ҫ����ռ������:>");
//	scanf("%d",&num);
//	arr = (int*)malloc(num*sizeof(int));
//	if (NULL == arr){
//		printf("�����ڴ�ʧ�ܣ�");
//		return 0;
//	}
//	for (size_t i = 0; i < num;i++){
//		printf("�����%d����:>",i+1);
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