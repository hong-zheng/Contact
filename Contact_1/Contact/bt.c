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
	//printf("%d\n",strlen(&arr)); // ����:��const char *���롰char (*)[7]���ļ�Ӽ���ͬ,C�����������ԣ���˾�ǿ������ת��Ϊchar* ȥִ��	
	//printf("%d\n",strlen(arr+0)); // arr Ϊchar[7] , arr+0 ת��Ϊchar* �ͣ���arr+0��ʼ��ֱ��'\0'���ַ�����
	//printf("%d\n",strlen(arr)); // 6 ��Ϊ����Ϊ��arr��ʼ��ֱ��'\0'���ַ�����
	//printf("%d\n", sizeof(&arr)); // 4 �˴�ȡ�������飬char(*)[7]
	//printf("%p\n", &arr); // 4 �˴�ȡ�������飬char(*)[7]
	//printf("%p\n", &arr+1); // 4 �˴�ȡ�������飬char(*)[7],&arr+1��&arr���7��Ԫ��
	//printf("%d\n", sizeof(&arr+1)); // 4 �˴�ȡ��������+1�����Ͳ��䣬char(*)[7]

	//printf("%d\n",sizeof(*arr)); // 1 ����ʽת��Ϊָ������ã�char����-->'a'�����Ϊһ���ֽ�
	//printf("%d\n",sizeof(arr+0)); // 4 �˴���arr��ʽת��Ϊָ��,���4���ֽ�
	//printf("%d\n",sizeof(&arr)); //4 ȡ��ַ��Ϊָ�룬4���ֽڣ�����Ϊchar(*)[7]
	//printf("%d\n",sizeof(arr));// 7 �˴���arr��ʾ�������飬�˴���������һ���ַ�������˸�������Ӧ�ü���'\0'

	//char arr[] = {'a','b','c','d','e','f'};
	// char ������ char* ����
	// char ��ʾһ���ַ���ͨ����������ʽ��ʾһ���ַ���
	// char* ��һ��ָ�����ͣ�����������������д����һ����ַ��4���ֽ�
	// ����C�����������ԣ���˻������ʽת�����⣬
	//printf("%d\n",strlen(*arr)); // UB �˴��ĳ��������ԭ��������strlen�����еĲ�����char*�ͣ������һ��char�Ͳ�������C�н�����ʽת��Ϊchar*��(*arr-->97),����ǿתΪ��ַ��Ȼ������ڴ��иõ�ַ��Ȼ������ʸõ�ַ�Ǵ����
	//printf("%d\n",strlen(arr)); // strlen��Ҫһ��char* ��Ϊ����������ǰ�ַ����ĳ��ȣ��˴�ΪUB
	//printf("%x",123); // %x ��16���������ǰ����
	//printf("%d\n",sizeof(&arr+1)); // ָ��+1������һ����ָ������һ����С�Ŀռ䣬�˴�����һ�����飬��ȻΪchar(*)[6]���� 
	//printf("%d\n",sizeof(&arr)); // 4 ȡ��ַ��Ϊָ�룬����Ϊchar(*)[6]
	//printf("%d\n",sizeof(*arr)); // 1 �˴���arr��ʽת��Ϊָ�룬ָ�������еĵ�һ��Ԫ�أ�������н����ã��õ���һ��Ԫ��'a',char����
	//printf("%d\n",sizeof(arr+1)); // 4 ��������ʽת��Ϊָ�룬����ָ������win32��Ϊ4���ֽ�
	//printf("%d\n",sizeof(arr)); // 6 ������������ֽ���
	//printf("%d\n",strlen(arr+0)); // δ������Ϊub,��������ʽתΪָ�� char* 
	//printf("%d\n",strlen(arr)); // δ������Ϊ(ub),arr Ϊ�ַ����飬���ַ���û�й�ϵ�������'\0'Ҳû�й�ϵ

//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
//
//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
//
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

////1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
////����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
//
//void Multiplication_table(){
//	int n = 0;
//	printf("�����ӡ��:>\n");
//	scanf("%d",&n);
//	for (int i = 1; i <= n;i++){
//		for (int j = 1; j <= i;j++){
//			printf("%3d*%d =%3d   ",j,i,i*j);
//		}
//		printf("\n");
//	}
//}
////2.ʹ�ú���ʵ���������Ľ�����
//void change(int* a, int* b){
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
////
////3.ʵ��һ�������ж�year�ǲ������ꡣ
//int leap_year(int year){
//	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))){
//		return 1;
//	}
//	return 0;
//}
//4.
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢




////Ҫ���Լ���ƺ����Ĳ���������ֵ��
//#define SIZE 10
////ʵ�ֺ���init������ʼ������
//void init(int* arr){
//	for (int i = 0; i < SIZE; i++){
//		scanf("%d", &arr[i]);
//	}
//}
////ʵ��empty����������顢
//void empty(int* arr){
//	for (int i = 0; i < SIZE; i++){
//		arr[i] = 0;
//	}
//}
////ʵ��reverse���������������Ԫ�ص����á�
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
////5.ʵ��һ���������ж�һ�����ǲ���������
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
//// ת�Ʊ��Ӧ�ã�+-*/
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
//		printf("��������:");
//	}else if (2 == input){
//		printf("��������:");
//	}
//	scanf("%s",M);
//}
//void output(char arr[100],int input){
//	if (1 == input)
//		printf("����Ϊ:>");
//	else if (2 == input){
//		printf("����Ϊ:>");
//	}
//	printf("%s\n",arr);
//}
//void menu(){
//	printf("0���˳�\n");
//	printf("1������\n");
//	printf("2������\n");
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
//			printf("�˳�!");
//			break;
//		default:
//			printf("��������\n");
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
// 4.��дһ�����ܽ��ܳ���ʵ�ֿ������롣
//// ��������
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
// sizeof�ڱ����ھ��Ѿ�������ȫ����strlen�Ǻ�������Ҫ�ȱ���������
// C�������ַ��������ַ�������������������ַ����������ַ������ϵ�ĩβ�����ַ�'\0'�ͳ�Ϊ���ַ���
	//char arr[] = {'a','b','c','d','e','f'};

	// �����ͨ���飬ʹ��strlen����δ������ΪUB
	// ���磺
	//printf("%d\n",strlen(arr)); // UB , ������Ϊһ����ͨ�����飬��û���ַ�'\0',���ΪUB
	//printf("%d\n",sizeof(arr+0)); // 4 ��ʽת��Ϊ��ַ
	//printf("%d\n",sizeof(&arr)); // 4 ������ȡ��ַ������Ϊchar(*)[6]���ͣ�����Ϊ4���ֽ�
	//printf("%d\n",sizeof(*arr)); // *arr ��ʽת��Ϊָ���ٽ����õõ�'a'������Ϊ1���ֽ�
	//printf("%d\n",sizeof(*(arr+1))); // ���(arr+1)ָ���Ԫ��,*(arr+1)�ٽ��������ȡ��
	//printf("%d\n",sizeof(arr+1)); // ��ʽת��Ϊָ�룬Ϊchar*�ͣ������4���ֽ�
	//printf("%d\n",sizeof(arr)); // �˴���arr����һ�����飬�����������������sizeof


	//printf("%d\n",sizeof(arr));  // 6 ֱ��sizeof(������)����ʾ��������Ĵ�С




//int strlen_self(const char* src){
//	int num = 0;
//	char* dest = src;
//	while (*dest++ != '\0'){
//		num++;
//	}
//	return  num;
//}



	//int arr[] = {1,2,3,4};
	//printf("%d\n",sizeof(arr+0)); // ����������ֱ�ӼӼ����֣������ʹ����ʽת��Ϊָ��
	//printf("%d\n",sizeof(&arr+1)); // int(*)[4] �˴�Ϊ����ָ�룬Ҳ��ָ�룬4���ֽ�
	//printf("%d\n", sizeof(&arr[0] + 1)); // &arr[0] ȡ��ַ+1��ָ����һ����ַ���˴�����ָ��2�����ݣ�����Ϊint*��
	//printf("%d\n", *(&arr[0] + 1));
	// &arr ȡ��ַ�õ��������飬��������ã��õ���������int[4]
	//printf("%d\n", sizeof(*&arr)); // �˴���arr��Ȼ�����������飬&arr�Ƕ���������ȡ��ַ��*&arr�����õ����������� ����Ϊint[4]
	// &arr �� &arr+1 ���һ������
	//printf("%x\n", &arr); // �˴�������+1��ȻΪһ����ַ�����Ϊ4���ֽڣ�int(*)[4]
	//printf("%x\n", &arr + 1); // �˴�������+1��ȻΪһ����ַ�����Ϊ4���ֽڣ�int(*)[4]
	//printf("%d\n",sizeof(&arr)); // ȡ��ַ&arr,��һ��ָ�룬����Ϊint(*)[4],���Ϊ4���ֽ�
	//int a = *arr;
	//printf("%d\n",sizeof(*arr)); // arr��ʽת��Ϊָ�룬ָ�������е���Ԫ�أ�����Ԫ�ؽ��н����õ���һ��Ԫ�أ�������
	//printf("%d\n", sizeof(arr[0])); // �˴���һ��int���͵����֣����Ϊ4���ֽ�
	//printf("%d\n",sizeof(*(arr+1))); // �˴���*(arr+1)Ϊһ��int���ͣ������4���ֽ�
	//printf("%d\n",sizeof(arr+1)); // 4 �˴���arr+1�е�arr��ʽװ��Ϊָ�룬Ϊint*���ͣ�arr+1ָ�������еĵڶ���Ԫ��
	//printf("%d\n",sizeof(arr)); // 16 �˴���sizeof(arr)�е�arr��ʾ�����������飬���Ϊ16


	//char arr[7] = {'a','b','c','d','e','f','\0'};
	//printf("%d\n", strlen_self(arr));
	//printf("%d\n",strlen(arr)); // 6 strlen(char* ) ����һ��char* �������ӵ�ǰ��ַ��ʼ��ѯ��ֱ��'\0'������'\0'���������ַ������ݣ�ֻ���ַ���������һ����־
	// ���˵����Ĳ����Ȳ��Ϸ����ܻ����ǿת����UB��Undefined behavior��δ������Ϊ��
	//printf("%d\n",sizeof(&arr)); // ȡ���������飬ȡ��ַ���Ϊһ��ָ��
	//printf("%d\n",&arr); // ȡ���������飬ȡ��ַ���Ϊһ��ָ��
	//printf("%d\n",&arr+1); // ȡ���������飬ȡ��ַ���Ϊһ��ָ��
	//printf("%d\n", sizeof(&arr + 1)); // ȡ���������飬ȡ��ַ���Ϊһ��ָ�룬�ټ�1��������������
	//printf("%d\n",sizeof(arr+1)); // arr+1 �ѽ�����������תΪָ�룬���Ϊ4���ֽڣ�ͬʱָ������ĵڶ���Ԫ��
	//printf("%d\n",sizeof(arr)); // arrΪint[7]���ͣ����Ӧ��Ϊ7

	//int a[] = {1,2,3,4};
	// a :int[4]��
	// a+1: int*��
	// &a :int(*)[4]��

	// ��ν��ά���� ���ʾ���һά����
	// ֻ�������ÿһ��Ԫ������һ��һά����
	// ����һ������Ϊ3��Ԫ�ص�һά���飬�����ÿ��Ԫ�����ǳ���Ϊ 4 ��һά����
	//int arr[3][4] = {
	//		{1,2,3,4},
	//		{5,6,7,8},
	//		{9,10,11,12}
	//};
	
	//printf("%d\n",sizeof(&arr[0]+1)); // arr[0] Ϊ int[4] ȡ��ַΪint(*)[4] �ټ�1��ȻΪint(*)[4] �����Ϊ4���ֽ�
	//printf("%d\n", sizeof(*(arr + 1))); // 16  *(arr+1)��ʾarr�еĵڶ���Ԫ�أ�Ϊint[4]����
	//printf("%d\n", sizeof(*(arr + 1) + 1)); // 16  *(arr+1)��ʾarr�еĵڶ���Ԫ�أ�Ϊint[4]���ͣ��ټ�1�ͱ�Ϊint*����
	//printf("%d\n", sizeof(*(*(arr + 1) + 1))); // 16  *(arr+1)��ʾarr�еĵڶ���Ԫ�أ�Ϊint[4]���ͣ��ټ�1�ͱ�Ϊint*����,�ٽ����þ���int�͵����ݣ������������Ӧ������
	//printf("%d\n", sizeof(arr[1])); // 16
	//printf("%x\n", arr);  //b8fe7c
	//printf("%d\n", sizeof(arr)); //48 ֱ��ȡ��������sizeof�ʹ�����������Ĵ�С�����ȡ��ַ��1�ʹ���������������
	//printf("%x\n", &arr + 1); // // b8feac
	//printf("%d\n", sizeof(&arr + 1)); // 4
	//printf("%d\n", sizeof(arr[0] + 1)); // arr[0]Ϊint[4]�ͣ�+1��Ϊint*�ͣ�ָ������Ϊ4���ֽ�
	//printf("%d\n", *(arr[0] + 1)); // arr[0]Ϊint[4]�ͣ�+1��Ϊint*�ͣ�ָ������Ϊ4���ֽ�,arr[0]+1ָ��arr[0][1]����*(arr[0]+1) == arr[0][1]
	//printf("%d\n", sizeof(arr[0])); // 16=4*4 ���ʾ��ά�����еĵ�һ��Ԫ�� int[4]����


	//char* p = "abcdef";
	//printf("%d\n",sizeof(*p));// 1k  
	//printf("%d\n",strlen(p)); // ���ַ����ĳ��ȣ�����'\0'�ͻ�ͣ�£�'\0'�����������У��������������еĳ�Ա
	//printf("%x\n", p); // pָ���ַ����ĵ�һ���ַ������pΪ��һ���ַ�'a'�ĵ�ַ
	//printf("%x\n", &*p); // p
	//printf("%x\n", &p); //char* *pp=&p; ȡ��p�ĵ�ַ�������������ַ���(������Ǵ����������飬����1�ͻ�������������)��
	//// ���&p+1��Ϊchar* * �ͣ����ֻ������4���ֽ�
	//printf("%x\n", &p+1);
	//printf("%d\n",sizeof(&p+1)); // pȡ��ַΪchar* *�ͣ��ټ�һ��ȻΪchar* *�ͣ�Ϊ�ĸ��ֽ�
	//printf("%d\n", sizeof(*(p + 1))); // һ���ֽ�
	//printf("%c\n", *(p + 1)); // һ���ֽ�,char*����+1֮��������һ���ֽ���ָ������ݣ���Ϊ'b'
	//printf("%d\n",sizeof(p+1));  // 4���ֽ� pΪchar* ,�ټ�һҲ��char*�ͣ����Ϊ�ĸ��ֽ�
	//printf("%d\n",sizeof(*p)); // *p ֻ��һ���ֽڣ���Ϊ��p���н����õ�����һ���ַ�'a'
	//char** pp = &p;// char** �� &pҲ���ĸ��ֽ�
	//printf("%d\n", sizeof(&p));
	//printf("%d\n",sizeof(p)); // p ��һ��ָ�룬���Ϊ4���ֽ�


// ����ָ����������ֵ������ԭ������ֵ
//void swapij(int* pi,int* pj){
//	int tmp = *pi;
//	*pi = *pj;
//	*pj = tmp;
//}
//
//// ����ָ��ָ��
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
//1.����Ļ���������ͼ����
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
//�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ�����
//����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
//153 = 1^3 + 5^3 + 3^3��
//370 = 3^3 + 7^3 + 0^3��
//371 = 3^3 + 7^3 + 1^3��
//407 = 4^3 + 0^3 + 7^3��
//*/
//
//
//3.
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222



//int maain(){
//	printf("%d\n", sum_a(2));
//	system("pause");
//	return 0;
//}


////4.��дһ�����򣬿���һֱ���ռ����ַ���
////�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
////������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
////��������ֲ����
//
//void change(){
//	// �ı��ַ�����С
//	printf("������һ���ַ���:>");
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
//////3.��д����ģ��������������ĳ�����
//////����������������룬������ȷ����ʾ����¼�ɹ���, �������
//////�����������룬����������Ρ����ξ�������ʾ�˳�����
////
////void log_in(){
////	int count = 0;
////	char* src = "123";
////	char dest[100] = {0};
////	printf("����������:>");
////	scanf("%s", dest);
////	do{
////		if (0 == strcmp(dest, src)){
////			printf("��½�ɹ���");
////			break;
////		}
////		else{
////			if (2 == count){
////				printf("��������������Σ�������\n");
////				break;
////			}
////			printf("��½ʧ�ܣ�������������:>");
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
////1.��ɲ�������Ϸ��
////
////void caishuzi(){
////	srand(time(NULL));
////	int input = 0;
////	do{
////		int rdata = rand();
////		int data = 0;
////		printf("%d\n", rdata);
////		printf("��������������:>");
////		scanf("%d", &data);
////		while (data != rdata){
////			if (data > rdata){
////				printf("���������ݽϴ����ز£�:>");
////				scanf("%d", &data);
////			}
////			else{
////				printf("���������ݽ�С�����ز£�:>");
////				scanf("%d", &data);
////			}
////		}
////		printf("�ɹ���");
////		printf("�Ƿ��������Ϸ(0/1):>");
////		scanf("%d", &input);
////	} while (input);
////}
////2.д���� 
//// �������������������в�����Ҫ�����֣�
////�ҵ��˷����±꣬�Ҳ������� - 1.���۰����,���ַ���
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
////	printf("����������:>");
////	scanf("%s", s);
////	int i = 0;
////	while (i<3){
////		if (*s == *str){
////			printf("�ɹ���½");
////		}
////		else
////		{
////			printf("��½ʧ�ܣ���������������:>");
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
////4.��дһ�����򣬿���һֱ���ռ����ַ���
////�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
////������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
////��������ֲ������
//
//int maain(){
//	//caishuzi();
//	system("pause");
//	return 0;
//}

//
////1. ������A�е����ݺ�����B�е����ݽ��н�����������һ����
//// size Ϊÿһ��Ԫ�صĴ�С
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
////2. ����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ��
//double jisuan(){
//	int i = 1;
//	double sum = 0;
//	do{
//		sum += (i % 2) ? (1.0 / i) : (-1.0 / i);
//		i++;
//	} while (i<=100);
//	return sum;
//}
////3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
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
//	//��������ɴ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_array(arr, sz);
//	//printf("%d\n",sizeof(short));
//	system("pause");
//	return 0;
//}