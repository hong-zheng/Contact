#define _CRT_SECURE_NO_WARNINGS 1
// ΢������飬printf_sҲ�����ð�ȫ�������汾 ��Ϊ��ȫ����ʵ�ϲ������
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<sys/timeb.h>
#define MAX 20
#include<assert.h>
#include<limits.h>
#include<math.h>
#include<stddef.h>

// ��������������
struct A{
	struct B* b;
};
struct B{
	struct A* a;
};

// �������η�ֹ�ں������޸Ĳ��������Ϳ�����ǰ��+const
// �ṹ�崫ֵ��ָ�뿽��һ�� 
// C�����У����еĲ�����ֵ����
// ��������ǲ�����ģ���ΪCC ��û�ж��壬Ȼ�Ѿ�����
//typedef struct 
//{
//	 CC* c;
//}CC;

struct people{
	int num;
	char name;
	int kk;
};
size_t OffSetOf(){
	return &((struct people*)0)->kk;
}

// λ��
struct F{
	unsigned ch : 2;
	unsigned c : 4;
};

int maisln(){
	struct F f = {0};
	f.ch = 123;
	printf("%d\n",sizeof(struct F));
	//printf("%d\n",sizeof(f.ch)); // UB sizeof֮������λ��
	//printf("%d\n", OffkSetOf());
	struct people* p=NULL;
	int* pnum = &(p->num); // �˴����Բ������ţ���Ϊ->�����ȼ�����&

	system("pause");
	return 0;
}











//#define sec (24*60*60*365)
//
//// ��һ�������������ַ����飬�������ַ�ָ�봫��ʱ�������������
//char* Strzcpy(char* dest, const char* src){
//	if ((dest == NULL) || (src == NULL)){
//		return NULL;
//	}
//	// ���������dest
//	char*  ret = dest;
//	while (*src != '\0')
//	{
//		*dest  =  *src;
//		dest++;
//		src++;
//	}
//	// ����'\0'ҲҪ����
//	*dest = '\0';
//	return ret;
//}
//
//char* SStrcat(char* dest, const char* src){
//	assert( NULL!=dest && NULL!=src);
//	char* ret = dest;
//	while ( '\0' != *dest)
//	{
//		dest++;
//	}
//	while ('\0' != *src)
//	{
//		*dest++ = *src++;
//	}
//	*dest = '\0';
//	return ret;
//}
//
//int SStrcmp(const char* dest, const char* src){
//	assert(NULL!=dest && NULL!=src);
//	while ('\0' != *dest && '\0' != *src){
//		if ( *dest > *src){
//			return 1;
//		}else if (*dest < *src)
//		{
//			return -1;
//		}else{
//			dest++;
//			src++;
//		}
//	}
//	if (*dest > *src){
//		return 1;
//	}else if(*dest < *src){
//		return -1;
//	}else{
//		return 0;
//	}
//}
////// ����һ���ַ���һ���ַ�����
////char* strchr(const char* src,int ch){
////	assert( NULL!=src);
////	while ( ch != *src){
////		src++;
////	}
////	return src;
////}
////
////// ����һ���Ӵ���һ���ַ����г��ֵĵ�һ��λ��
////char* Strstr(const char* dest,const char* src){
////	assert(NULL!=dest && NULL!=src);
////	// �ж�*src���Ƿ�ֻ��һ��'\0'
//	if ( '\0' == *src){
//		return NULL;
//	}
//	char* black = dest;
//	while ('\0' != black){
//		char* red = black;
//		char* sub = src;
//		while (*red!='\0' && *sub!='\0' && *sub==*red){
//			red++;
//			sub++;
//		}
//		if ( '\0' == *sub ){
//			return black;
//		}
//		if ( '\0' == *red){
//			return NULL;
//		}
//		black++;
//	}
//	return NULL;
//}
//
//
//void* Medmcpy(void* dest, const void* src, size_t num){
//	assert(NULL != dest && NULL != src);
//	char* cdest = (char*)dest;
//	char* csrc = (char*)src;
//	for (int i = 0; i < num;i++){
////		*cdest = *csrc;
////		cdest++;
////		csrc++;
////	}
////	return dest;
////}
//
//struct student1{
//	char id[1024];
//	char name[1024];
//	struct student* s;
//};
//
//struct A
//{
//	struct B* b;
//};
//struct B
//{
//	struct A* a;
//};
//int main(){
//
//	char* dest = "wei ren min"; // SStrcmp������������Էų������������ɸĶ�
//
//	char* src = "ren";
//	printf("%s\n", Medmcpy(dest, src,5));
//	//printf("%s\n", Strstr(dest,src));
//	//printf("%p\n", strchr(dest,'i'));
//	system("pause");
//	return 0;
//}
//// дһ�������壬������ʵ���ô�
//// ��ip��ʮ��������ʮ����֮�����ת��
//// ip��ַ�����ĸ��ֽڣ�ÿ���ֽ��޷����ַ�������0-255��
//union 
//{
//	unsigned int data;
//	struct 
//	{
//		unsigned char a;
//		unsigned char b;
//		unsigned char c;
//		unsigned char d;
//	}sip;
//}uip;
//// ˫�ر�֤double check�������ȫ��-->��ȫ��ʻ
//// ���������ߣ�����ʵ���߶��Բ������кϷ���У��


// 192.168.43.137
//uip.sip.a = 192;
//uip.sip.b = 168;
//uip.sip.c = 43;
//uip.sip.d = 137;

//printf("%u\n",uip.data);

//int my_strlen(const char* strDest)
//{
//	assert(NULL != strDest);
//	return ('\0' != *strDest) ? (1 + my_strlen(strDest + 1)) : 0;
//}
// ��������ÿ⺯����Ҳ������ʹ���κ�ȫ�ֻ�
////�ֲ�������д int my_strlen (char *strDest);
//int my_strlen(const char* strDest)
//{
//	assert(NULL != strDest);
//	if ('\0' == *strDest)
//	{
//		return 0;
//	}
//	else
//	{
//		return (1 + my_strlen(++strDest));
//	}
//}
//
//// ����İ취��Ϊ name ָ�� malloc һ��ռ䡣
//struct student
//{
//	char* name;
//	int age;
//};
//#define true 1
//#define false 0
//int find_char(char** strings,char key){
//	assert( NULL != *strings );
//	char* string = NULL;
//	// ��ѭ��
//	while (NULL != (string = *strings++)){
//
//		while ('\0' != *string)
//		{
//			if (key == *string++){
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
///// ʹ�ö���ָ��������ƻ�������
//// �÷����Ѿ���ԭ�����������
//int find_c(char** strings,char key)
//{
//	assert( NULL != *strings);
//
//	while ( NULL != *strings)
//	{
//		while ('\0' != *(*strings))
//		{
//			if ( key == *(*strings))
//			{
//				return true;
//			}
//			(*strings)++;
//		}
//		strings++;
//	}
//	return false;
//}
//
//// ��������Ѱ��һ�����������ҷ��ظ�������λ��
//int* find_int(int key,int arr[],int len){
//	assert(NULL != arr);
//	for (int i = 0; i < len;i++){
//		if ( key == arr[i] ){
//			return &arr[i];
//		}
//	}
//	return NULL;
//}
//kk(){
//	printf("wei ren min fu wu \n");
//}
//
//// value Ϊ������ֵ��n_bits Ϊ������λ��
//int even_parity(int value ){
//	int parity = 0;
//
//	while ( value > 0)
//	{
//		parity += value & 1;
//		value >>= 1;
//	}
//	return parity % 2;
//}
//void s(int* a,int* b){
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
////ADT: Abstract Data Type
//
//// ��һ���������ַ����ʹ�ӡ
//void char_print(int num){
//	if (num < 10){
//		printf("%c \n",num+'0');
//		return;
//	}
//	char_print(num/10);
//	printf("%c\n",num%10+'0');
//}
//
//// �ֱ��õݹ�͵���ʵ�ֽ׳�(n!)��쳲���������(1,1,2,3,5,8,13,21,34,...)
//// �ݹ�׳�
//int jiecheng(int num){
//	if (1==num){
//		return 1;
//	}
//	return num*jiecheng(num-1);
//}
//// �����׳�
//int jc(int num){
//	int ret = 1;
//	while (num>0)
//	{
//		ret *= num;
//		num--;
//	}
//	return ret;
//}
//
//// �ݹ�쳲���������
//// 1 1 2 3 5 8 13 21 34...
//int fbnq(int i){
//	if ((1 == i) || (2 == i)){
//		return 1;
//	}
//	return fbnq(i - 1) + fbnq(i - 2);
//}
//
//// ����ʵ��쳲���������
//int fbnqq(int i){
//	int ret = 1,x=1,y=1;
//	while (i>2)// x y ret
//	{
//		// һλһλ�ƶ�����
//		ret = x + y;
//		x = y;
//		y = ret;
//		i--;
//	}
//	return ret;
//}
//// size_t�Ƕ�����stddef.h�е����ͣ��޷�������
//// typedef _W64 unsigned int   size_t;
//// typedef _W64 unsigned int size_t
//
//// �⺯����strlen�ķ���ֵ��size_t���ͣ��޷������Σ�����Ǹ�Ϊint,���һ�������׳���
//size_t Strlen(const char* str){
//	assert( NULL != str);
//	int sum = 0;
//	while ('\0' != *str++){
//		sum++;
//	}
//	return sum;
//}
//int ma(){
//	printf("%d\n", Strlen("zbi s"));
//	//char_print(1258982533);
//	//printf("%c \n",'0');
//	//printf("%d\n", even_parity(5234235));
//
//	//int a[] = {1,2,3,
//	//	4,5,6,7};
//	//s(&a[0],&a[1]);
//	//printf("%d %d",a[0],a[1]);
//	//printf("%p\n", a);
//	//printf("%p\n", find_int(3, a, 7));
//	//printf("%d\n",&a[5]-&a[0]);
//
//	// �ڸ��ַ�����Ѱ���Ƿ���һ���ַ�d
//	//char* strings[] = {"there","is","ak","car",0};
//	//printf("%d\n", find_c(strings, 'k'));
//
//	//malloc ����0���ֽ�
//	//���� 0 �ֽ��ڴ棬������
//	//	������ NULL�����Ƿ���һ���������ڴ��ַ��������ȴ�޷�ʹ������СΪ 0 ���ڴ档��
//	//	�ó����ϵ�ĳ���̶ȣ��̶ȱ���û�г��ȣ�ֻ��ĳ�����̶�һ������������ȡ�������
//	//	һ��һ��ҪС�ģ���Ϊ��ʱ�� if��NULL �� = p�����У�齫�������á�
//	char* n = "zheng";
//	struct student s = {0};
//	s.name = (char*)malloc(20); // Ҫ�ýṹ���ָ�룬�ȸ���mallocһƬ�ռ�
//	strcpy(s.name,n);
//	s.age = 21;
//
//	//printf("%s %d\n",s.name,s.age);
//	free(s.name);
//	s.name = NULL;
//
//	//��̬���������Զ�ȫ�ֱ����� static ���������� static ȫ�ֺ;ֲ�����������̬��������
//	//	���ܸ���������������ڶ����ڣ��ɱ������ڱ����ʱ����䡣
//	//	ջ������ֲ�������ջ�ϵ�����ֻ�ں����ķ�Χ�ڴ��ڣ����������н�������Щ����
//	//	Ҳ���Զ������١����ص���Ч�ʸߣ����ռ��С���ޡ�
//	//	�ѣ��� malloc ϵ�к����� new ������������ڴ档������������ free �� delete ������
//	//	��û���ͷ�֮ǰһֱ���ڣ�ֱ��������������ص���ʹ�����ռ�Ƚϴ󣬵����׳���
//
//	// ����ָ��һ��Ҫ��ʼ����û�г�ʼ�������ͳ�ʼ��ΪNULL������Ұָ��
//	system("pause");
//	return 0;
//}
//	//int ch = getchar(); // getchar()�����ķ���ֵ��һ��int����
//	// ����һ���Ϸ��ڴ棬Ȼ���ٶԺϷ��ڴ���и�ֵ
//	//int i = 10;
//	//*((int*)0x006ff97) = 10;
//	//int i = 10;
//	//int* p = (int*)0x0099fe3c;
	//*p = NULL;
	//p = NULL;

	//int b[3];
	//int a[] = {1,2,3};
	//b = a; // �˴��ı��ʽ��a��b��ֵ������һ�����޸ĵ���ֵ
	//printf("%d\n",sizeof(void*)); // 4
	//int arr[] = {
	//	1,2,3,4,
	//	5,6,7,8,
	//}; // C����������������һ��','
	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++){
	//	printf("%d ", *(arr + i));
	//}


// Lunix 
// pwd print work dir
// ת����Ŀ¼ cd /
// ls list �г���ǰĿ¼�µ��ļ�/�ļ���
// cd change directory
// mkdir �����ļ���
// rm -rf code �����ļ���code

// 
// vim-->�༭��
// ��ͨģʽ-->i-->����ģʽ(д�����)-->ESC-->��ͨģʽ-->:-->������ģʽ
// vim test.c  ����һ��.c�ı��ڵ�ǰ�ļ�
// esc
// shift+:
// wq��write + quuit��
// gcc -->������
// . -->��ǰĿ¼
// .. -->��һ��Ŀ¼
// -E Ԥ����
// > test.i �ض��� Ԥ����֮����ļ�Ϊ .i
// G : ֱ���������һ��
// usr/inlcude/stdio.h //�ļ�Ŀ¼
// gcc test.c > -E test.i // �����ض�����test.i
// ���룺 
//Ԥ���루Ԥ�����׶�->: ����#inlcude + ע��+#define������ŵ��滻
// +#define����ĺ��滻Ҳ��������滻
// ���е�Ԥ����ָ��
// #pragma ���е�Ԥ����

// ����Ϊ������(��ͬƽ̨�����Ļ�����Բ�ͬ)
// gcc test.i -S
// ����һ��test.s����ļ�
// ��C����ת��Ϊ������� 
//�﷨����+�ʷ�����+�������+���Ż��ܣ����﷨�޴������²���ת���������޷�ת����
// ������Ԥ����׶ξͲ�����ͱ����﷨����ֻ���ڵ�ǰ����׶βŻ���ּ��
// readelf ��ȡelf�ļ�
// readelf a.out -s
// �˴���û�е��ֲ���������˲�û�л��ֲܾ�����

// ���
//gcc test.s -c
// ���� .o�ļ�
// �ѻ�����ת��Ϊ�����ƴ���
// �γɷ��ű�







// fscanf ��ʽ������ʽ��������ļ�����
// fprintf stdout

// Ĭ�ϴ򿪵�������
// stderr ��׼����-��Ļ FILE*
// stdin ��׼����-���� FILE*
// stdout ��׼���-��Ļ FILE*


// ���ļ�����
//struct S
//{
//	char name[20];
//	int age;
//};
////int main(){
//	
//	struct S s = {"wei ren min fu wu",21};
//
//	FILE* pf = fopen("student.txt","wb");
//
//	if ( pf == NULL){
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	int i = fwrite(&s,sizeof(struct S),1,pf);
//	if (i>0){
//		printf("ִ��д�����ɹ���");
//	}
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	exit(0);
//}

// 6������
// malloc free �ɶ�д������Ҳ�г�������ģ���Ϊ��;���ܻ�ֱ�ӷ���
// ��������
// ��̬�ڴ�ռ俪��֮��һ��Ҫ�����ж�
// ����ڴ治��û���жϣ���û���ٳ����ͳ���
// ��̬�ڴ��ʼָ�����ƶ�*p++,ֻ�ͷ�һ����Ҳ�Ǵ���
//const size_t Strlen(const char* str){
//	
//	assert( str != NULL);
//	
//	int len = 0;
//	while (*str++ != 0){
//		len++;
//	}
//	return len;
//}

	//��Ϊע������Ԥ����ָ�����, �������б�չ����//����
	//	/*��*/ʱ, ע���Ѵ������, ��ʱ�ٳ���//����/*��*/��Ȼ����.���,��ͼ�ú꿪ʼ�����һ��
	//	ע���ǲ��еġ�

	//����һ��Ҫע�� const
	//	���εĲ��ǳ������� readonly �ı�����const ���ε�ֻ����������������Ϊ���������ά����
	//	Ҳ���ܷ��� case �ؼ��ֺ��档
// const���εĲ��ǳ�������ֻ������
	// ��������Ϊ�����ά��
	// Ҳ��������Ϊcase֮���ѡ��

	//int i ;
	//i = 1, 2; // �˴���ֵ���ȼ�Ҫ����,���������������������е�����������ȼ���ͣ����Ӧ��ʱ�ȸ�ֵ����,����
	//printf("%d\n",i); // 11
	// *p.f   .����������ȼ�����*һ��һ��дΪ*(p.f)
	// *ap[]  [] ����*
	// *fp()  () ����*


	// ������������Ǵ��ҵ���
	//-��������� - ���ʽ
	//	�ҵ���
	//	��Ŀ�����
	//	(����) ǿ������ת��(��������)���ʽ
	//	++ ��������� ++������ / ������++ ��Ŀ�����
	//	-- �Լ������ --������ / ������-- ��Ŀ�����
	//	* ȡֵ����� *ָ����� ��Ŀ�����
	//	& ȡ��ַ����� &������ ��Ŀ�����
	//	!�߼�������� !���ʽ ��Ŀ�����
	//	~��λȡ������� ~���ʽ ��Ŀ�����
	//? : ��������� ���ʽ 1 ? ���ʽ 2 :
	//	���ʽ 3 �ҵ���
	// q = a/b;
	// r = a%b;
	// a,bΪ����
	// qΪ�̣�rΪ����

	// ��Ҫ������������򣬾����ܵ�ȥ����
    // ��������1��a = b*q +r
	// 2��r<b,����ı�a�������ţ�ϣ��qҲ��֮�ı䣬��q�þ���ֵ����ı�
	// 3����b>0ʱ��ϣ����֤r>=0,ͬʱr<b
// ���������������ͬʱ����
	// ������(-3)/2

	//printf("%d\n", 2 / (-2));
	//printf("%d\n", 2 % (-2));

	//char* str = "sc c \0svxx";
	//printf("len=%d\n", strlen(str));

	//int i = 0;
	//i++ + ++i; // UB δ������Ϊ
	//int arr[] = {1,2,3,4,5,6};
	//printf("arr= %5p\n", arr);
	//int* p = arr;
	//printf("p=   %5p\n", p);

	//printf("(*p)++=   %5d\n", (*p)++); //1
	//printf("*p=%d\n",*p); // 2
	//printf("*(p++)=   %5d\n", *(p++)); //1
	//printf("*(++p)=   %5d\n", *(++p)); // 3
	
	// *p++ : ==> *(p++)����++��*�����ȼ�ͬ�����������˳�����������������ִ��p++��ִ��*,����Ϊ\
	p++������p�������ִ��*p����ִ��p++
	//printf("*p++=   %5d\n", *p++);
	//printf("p=   %5p\n", p);

	//int num = 10;
	//int* pnum = &num;
	//printf("%p\n",pnum);
	//printf("%d\n", *pnum++); // �Ƚ���*�����ٽ���++����
	//printf("%p\n", pnum);
	//*pnum++ = 23;
	//printf("%d\n", *pnum);
	//printf("%p\n", pnum);


	//int num = 10;
	//*&num = 20;
	//printf("%d\n",num);
	// ʹ��ָ�����ʱһ��Ҫ��������жϻ��߶��ԣ�������������
	//int* p=null;
	//if ( 0 == p){
		//printf("\ksj");
	//}


	//�ڴ��е�ÿ��λ���ɶ�һ�޶��ĵ�ַ��ʶ
	// �ڴ��е�ÿ��λ�ö�����һ��ֵ

	// �������ڴ�λ��֮��Ĺ���������Ӳ�����ṩ�ģ������ɱ�����Ϊ����ʵ�ֵ�
	// Ӳ����Ȼͨ���ڴ��ַ�����ڴ�λ��
	//printf("%d\n",INT_MAX);






//char a[10] = { "abcdefg" }; // ������д���Ͳ���{}����˼��һ���ģ�{}�������ǽ�������
//int sz = sizeof(a) / sizeof(a[0]);
//for (int i = 0; i < sz; i++){
//	printf("%c  ", a[i]);
//}
//union ��Ҫ����ѹ���ռ䡣���һЩ����
//	��������ͬһʱ��ͬʱ���õ��������ʹ�� union��
// ��union ��֤����ϵͳ�Ǵ�˻���С��
//union S
//{
//	int i;
//	char c;
//};

// ö�ٿ���һ�ζ��������������Ǻ�һ�ξ�ֻ��һ��
// ��ȴ����Ԥ���������򵥵��滻
// ö�����ڱ�����ȷ����ֵ�����ҿ��Ե���
//enum weeks
//{
//	MON=9,
//	TUES,
//	WED,
//	THUR,
//	FRI,
//	STAR=12,
//	SUN
//};
////typedef static int int32 // ��������������
//#define string char*
//
//typedef char* pchar;
//
//
//#define toupper(c) (c+'A'-'a')
//#define tolower(c) (c+'a'-'A')

	//int num = 1;
	//char cnum = '1';
	//char* strnum = "1";
	//printf("%d\n", num);
	//printf("%c\n", cnum);
	//printf("%s\n", strnum);


	//0x01 << 2 + 30; // ��λ������Ҫע��Խ�� ��+�������ȼ�����<<������

	// C�������ж�·��˵����ͬʱҲ���Խ����·���� | & 
	//int i = 0;
	//int j = 0;
	//if ((++i>0) |  (++j>0))
	//{
	//	printf("i=%d,j=%d\n",i,j);
	//	//��ӡ�� i �� j ��ֵ��
	//}

	//char s=~1;
	//printf("%d\n", s);
	// \ddd 1-3λ�˽�������������ַ�
	// \xhh 1-2λʮ��������������ַ�
	//printf("%c\n", '\x22');
	//int x = 10;
	//int num = 2;
	//int* pnum = &num;
	//int y = x/ *pnum; // ��ҪдΪ(x/*pnum) ��'/'��'*'д��һ�����������������������Ϊע�ͣ�ֱ���ҵ�ע�͵���һ�����ƥ�� 

	

  

//#define IDD replacement list  //����һ���Ϸ���Ԥ����ָ��

	////int /* ������*/ // ����ע�ͺ����ע�ͣ����������Ǽ򵥽���ɾ���������ÿո�����滻
	//in/* ������*/t i=10; // ����ע�Ͳ�����ǰ��˵��ע�ͻᱻ�ո��滻��������ע�Ͳ���ȷ�ͺܺ�����ˡ�
	//char* s = "abcdefgh   //hijk"; // ����֪��\
˫�����������Ķ����ַ�����������˫б��Ҳ����

// ��������ע�ͺϷ�����Ϊʹ����'\'���ӷ���'\'�����治���Լ��κ��ַ���ֻ��ֱ�ӻ���\
��ע�⣺/*��*/������ʽ��ע�Ͳ���Ƕ�ף��磺
///*����/*�Ƿ���*/* /\
��Ϊ/*���������������*/ƥ�䡣

 

	//printf("");

	//int a, x,n,m;
	//a = (-10) / 3;
	//x = (-10) % 3;
	//printf("%c\n", tolower('Q'));
	//printf("%c\n", toupper('g'));
	//printf("a=%d\n", a);
	//printf("RAND_MAX=%d\n", RAND_MAX);


	//a = 1;
	//x = (n = ++a) + (m = ++a);
	//int a = 1, x;
	//x =  ++a +  ++a; // δ������Ϊ
	//printf("n=%d\n", n);
	//printf("m=%d\n", m);
	//printf("a=%d\n", a);
	//printf("x=%d\n", x);

	//int y;
	//a = 1;
	//y = a++ + ++a;
	//printf("a=%d\n", a);
	//printf("y=%d\n", y);


	//int  arr[] = {1,2,3,4,5,6,7,8,9,10};
	//string s = "ndskal";
	//printf("%s\n",s);

	//printf("%s\n",sizeof());

	//char* p;
	//p = 0x11223344; // �Ƿ��ģ�����p = NULL ����0��ַҲ�ǷǷ���
	//printf("%d\n",*p);


	//PCHAR p3, p4; /// �˴���p4����ָ�룬��һ���ַ�
	//p4 = 'a';

	//printf("%d\n",SUN);


	// ԭ��  1 1111111 
	// ����  1 0000000
	// ����  1 0000001
	//char c = -65;
	//printf("%d\n",c);


	//union S s;
	//s.i = 1;
	//if (1 == s.c){
		//printf("С��");
	//}
	//else
	//{
		//printf("���");
	//}
