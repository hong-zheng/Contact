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



//void f(){}
//
//struct S{
//	char a;
//}s;
//
////union ��Ҫ����ѹ���ռ䡣���һЩ����
////	��������ͬһʱ��ͬʱ���õ��������ʹ�� union��
//// ��union ��֤����ϵͳ�Ǵ�˻���С��
// union S 
//{
//	int i;
//	char c;
//};
//int main(){
//	union S s;
//	s.i = 1;
//	if ( 1 == s.c){
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//	system("pause");
//	exit(0);
//}
	//printf("%d\n",sizeof(s));
	//sizeof ���ص����ֽṹ��С����������������ڴ档
	//const int num = 10; // ��ʱ��δ��num�����ڴ��У����Ƿ��ڷ����б� ����
	//// constֻ���������Ըı�,const����ֻ���ڶ����ʱ���ʼ�����������ں���������ֵ���߸ı�
	//// const ֻ����������洢�ռ䣬���ǽ����Ǳ����ڷ��ű��У���ʹ
	////������Ϊһ�������ڼ��ֵ��û���˴洢����ڴ�Ĳ�����ʹ������Ч��Ҳ�ܸ�

	//volatile int k = 10;  // 
	////�����Է��ʸñ����Ĵ���Ͳ��ٽ����Ż����Ӷ������ṩ�������ַ���ȶ�����


	////char k = 'a';
	////int arr[Max];
	//const int i = 10;
	//extern const int i; // �˴���extern const i �����������Ƕ��� 

// �ֲ�����λ��ջ�У��ں�������֮��ͻᱻ�ͷţ����Է���str���ᵼ�´���
//return ��䲻�ɷ���ָ��ջ�ڴ桱�ġ�ָ�롱����Ϊ���ڴ��ں��������ʱ
//���Զ����١�
//char * Func(void)
//{
//	char str[30];
//	��
//		return str;
//}
//str ���ھֲ�������λ��ջ�ڴ��У��� Func ������ʱ���ͷţ����Է��� str �����´���


//const ���η�Ҳ�������κ����Ĳ���������ϣ���������ֵ��������������ı�ʱʹ
//�á����磺
//void Fun(const int i);
//���߱����� i �ں������еĲ��ܸı䣬�Ӷ���ֹ��ʹ���ߵ�һЩ����Ļ������޸ġ�

//const int *p; // p �ɱ䣬p ָ��Ķ��󲻿ɱ�
//int const *p; // p �ɱ䣬p ָ��Ķ��󲻿ɱ�
//int *const p; // p ���ɱ䣬p ָ��Ķ���ɱ�
//const int *const p; //ָ�� p �� p ָ��Ķ��󶼲��ɱ�
#define Max 100  // �������һ��������
//#define ������Ԥ����׶ν����滻���� const ���ε�ֻ���������ڱ����ʱ��ȷ����ֵ��
// #define ������Ԥ����׶ν����滻����const���ε�ֻ���������ڱ���ʱ��ȷ����ֵ
// #define û�����ͣ�Ȼ��const������

// ����������ڴ棬����û�з����ڴ�
// 
// ����һ��Ԥ����ָ����ṩ��һ�ֻ��ƣ����������滻Դ�����е��ַ���

//#define MAX( X, Y) X>Y?X:Y
//
//#define f(x) (x-1)

// �궨���о��Ƿ��ŵĴ�����������ÿһ����������������,������������ж���������������������������ı��ʽ�г����������
//#define ABS(x) (((x)>0)?(x):(-(x)))
//int main(int args,	char* arsdr[]){ //�ܶ��˶���Ϊmain��������û�в�����ʵ�������в����ģ�һ�������Σ�һ�����ַ�ָ������
//	// ���һ�����������巵�����ͣ��򷵻�int����ֵ
//
//	int num = 10;
//	void* pnum = &num;
//	((char*)pnum)++;
//
//	int IntArray_a[100];
//	memset(IntArray_a, 0, 100 * sizeof(int)); //�� IntArray_a �� 0
//
//	char arr[123];
//	memset(arr,'a',sizeof(char)*123);
//	for (size_t i = 0; i < 123;i++){
//		printf("%c\n",arr[i]);
//	}
	//  ����������ֱ�����
	// ����������ֱ�ӱȽ�
	// ������̫������̫С�������

	//float f = 0.0000000000000000000000000000000001f;
	//if (f == 0.0000000000000000000000000000000001f){
		//printf("f == 0.0000000000000000000000000000000001f");
	//}


	// ָ������ڶ����ʱ��һ��Ҫ��ʼ��
	// 


	// �Զ���ת
//f:
//	goto f;
	///*char input = ' ';
	//switch (input)
	//{

	//case 'z':
	//	break;
	//default:
	//	break;
	//}
	//int num = 12;
	//int* pnum = &num;
	//pnum = NULL;
	//if (pnum){
	//	printf("asdkhf\n");
	//}*/




	// ��i����0ʱ��a[0] =-1��
	//        255  a[255] = -256?
	// -256 ��ʱ�Ѿ�Խ�����8λ��char��������
	// ��˽�λ֮�����8λ��Ϊ0
	// ���Ե�256λ a[255]=0;
	// strlen(a) , �ӵ�ַa��ʼ��¼��ֱ������'\0'��ֹͣ��'\0'�������ַ���������
//	char a[1000];
//	int i = 0;
//	for (i = 0; i < 1000;i++){
//		a[i] = -1 - i;
//	}
//	printf("%d\n",strlen(a));
//
//	system("pause");
//	return 0;
//}
	//int num = 10;
	//int* i = &num;
	//printf("%d\n", sizeof((int)*i));
	// ����sizeof�ǹؼ��֣����()����ʡ�ԣ�������������ʱ������ʡ��,��Ϊ����Ҳ�ǹؼ��֣�����sizeof int ��������ת����Ҳ�ǹؼ���ʹ��
	//printf("%d\n",sizeof i);
	//auto int num = 122;
	//printf("%d\n",ABS(6-9));
	//printf("%d\n",f(3));
	//printf("\n");
	//printf("%d", MAX(1, 2));

// Memcpy ���ڿ����ַ�����ָ��
void* Memcpy(void* dest,const void* src,size_t num){
	// �ȶ���x
	assert(dest != NULL && src!=NULL);

	for (size_t i = 0; i < num;i++){
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return dest;
}


//// �����memcpy���ԣ���ȥ������ǰ���ƻ��������
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
//	}
//	else{
//		Memcpy(dest, src, num);
//	}
//	return dest;
//}

// �Ƚ������ַ����Ĵ�С
int Strcmp(const char* str1,const char* str2){
	assert( str1!=NULL && str2 != NULL);

	const char* cstr1 = str1;
	const char* cstr2 = str2;
	while (*str1 != '\0' && *str2 != '\0'){
		if (*str1>*str2){
			return 1;
		}else if (*str1<*str2){
			return -1;
		}else{
			str1++;
			str2++;
		}
	}
	// ���������������һ��ԭ������ѭ�������ж�
	if (*str1 == '\0'){
		return -1;
	}
	else if(*str2 == '\0'){
		return 1;
	}
	else
	{
		return 0;
	}

}
//int main(){
//	char str1[] = "haha";
//	char str2[] = "hejfdhbkjlnlk";
//	int p = Strcmp(str2 + 4, str2);
//	printf("%d\n",p);
//	system("pause");
//	return 0;
//}
// strcpy ���������ַ���
// memcpy �����ڴ棨��ɶ���ݶ����ԣ�
// ���ַ���û��ϵ������ȴ����string.h����(bug)
// ���Ե����д���ļ����ԣ����ֻ�ܽ���ʹ�
// void* ��һ�������ָ�����ͣ�ͨ��ָ������������������Ϣ
// void* ֻ������ַû���ڴ�ռ��С����Ϣ
// ����coid* ���ܽ�����Ҳ���ܽ����������(+/-)
// void* ��Ϊ�˼��ݸ������Ͳ�ͬ��ָ��
// void* ��һ�ַǳ���ª��"���ͱ��"
// C++:template

//void* Memcpy(void* dest,const void* src,size_t num){
//	// ���ַ���û�й�ϵ���Ǿͺ�'\0'û�й�ϵ
//	assert( dest!= NULL && src!=NULL);
//	char* ret = dest;
//	for (size_t i = 0; i < num;i++){
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}


// ��dest ��src�������غϵ�ʱ�򿽱����������
// memmove ������ص���Memcpy
// ����ص���Memmove

//void* Memmove(void* dest,const char* src,size_t num){
//	assert(dest!=NULL&&src!=NULL);
//	//���ж��Ƿ��ص�
//	// ���dest��src��src+size֮������ص�
//	// ��������£��κ�һ���ַ������ƻ�����Bug
//	char* cdest = (char*)dest;
//	char* csrc = (char*)src;
//	if ( csrc < cdest && csrc+num>cdest){
//		// ��Ҫ�Ӻ���ǰ����
//		char* pdest = cdest + num - 1;
//		char* psrc = csrc + num - 1;
//		for (size_t i = 0; i < num;i++){
//			*pdest = *psrc;
//			pdest--;
//			psrc--;
//		}
//	}
//	else{
//		Memcpy(dest,src,num);
//	}
//	return dest;
//}
//void* Memcpy(char* dest,const char* src,size_t num){
//	// �ȶ���
//	assert( dest!=NULL && src != NULL);
//	char* ret = dest;
//	for (size_t i = 0; i < num;i++){
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main(void){
//
//	char str1[] = "haha";
//	char str2[] = "hehehehehehe";
//	Memcpy(str1, str2, 4);
//	printf(str1);
//
//	// strncpy ����Ҫ��������Ϊ�˱����ڴ����Խ��(dest�ڴ治����maybe)
//	// ���ǲ���һ���ܱ��⣬û�취���⣬num�������д����޷�����
//	// �����ܺܺõĽ������
//	// ������strcatҲ��ų������Ƶ�����
//	// Ҫ�����ڴ����⣬�Զ����ݣ�����C�����޷��Զ����ݣ�
//	//strncpy(str1,str2,sizeof(str1) -1); // -1  ==>  -'\0'
//	//printf(str1);
//
//	//printf("%c\n",'\07'); // ���� 
//	//strncmp (ֻ�Ƚ�ǰn���ַ�)��Ч�������Ǻ����ԣ�
//	// ���κ�ʱ����ַ����Ĳ�����ҪС��
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



	//int* p = Test();
	//printf("hehe\n");
	//printf("%d\n",*p); //��ʱ*p�Ͳ�����10
	// ���ݳ�ʼ�ַ�λ�ñȽ�
	//char* str1 = "abcdef";
	//char* str2 = "cde";
	//int ret = Strcmp(str1,str2);
	//printf("%d\n",ret);

	// �ڴ����Ĺ��� strcmp ����(�Ĵ���)
	//char* ret = Strstr(str1, str2);
	//printf("%p\n", str1);
	//printf("%s\n", ret);
	//if (ret < 0){
	//printf("str1 < str2");
	//}else if (ret > 0){
	//printf("str1 > str2");
	//}else{
	//printf("str1 == str2");
	//}


////int Strcmp(const char* str1,const char* str2){
////	// �ȶ����жϣ��ж�ָ���Ƿ�Ϊ��
////	assert( str1 != NULL && str2 != NULL);
////	// ���αȽ������ַ�����Ӧ���ַ��Ƿ����
////	while ( *str1 != '\0' && *str2 != '\0' ){
////		if (*str1 < *str2 ){
////			return -1;
////		} else if (*str1 > *str2){
////			return 1;
////		}else{
////			str1++;
////			str2++;
////		}
////	}
////	// ������һ���ַ����ȵ���'\0'�͸�С
////	if (*str1 < *str2){
////		return -1;
////	}
////	else if (*str1 > *str2){
////		return 1;
////	}else{
////		return 0;
////	}
////}
//
//
//// ������ָ��ָ��������ǲ���Ҫ�ı�ģ����const char* str,�˴�����ָ�뷢���ı�
//int Strcmp(const char* str1,const char* str2){
//	// �����ж�str1��str2�Ƿ�Ϊ��
//	assert(str1 != NULL && str2 != NULL );
//	 
//	// ѭ��һ��һ���ж��ַ����е��ַ�
//	while ( *str1 != '\0' && *str2 != '\0'){
//		if (*str1 > *str2){
//			return 1;
//		}else if (*str1 < *str2){
//			return -1;
//		}else{
//			str1++;
//			str2++;
//		}
//	}
//
//	// ����ѭ����ԭ����str1����str2ָ����'\0'
//	// �ַ�֮��ıȽϣ�Ҳ����û�н����ַ���'\0'֮��ıȽ�
//	if (*str1 > *str2){
//		return 1;
//	}
//	else if(*str1 < *str2){
//		return -1;
//	}
//	else{
//		return 0;
//	}
//}
//
//// ʳ֮��ζ����֮��ϧ
//// �����ַ����е����ַ����е�λ��
//// str1  "abcdef"
//// str2  "cde"
//// str1����str2��str2��str1���ִ�
////// ����ֵ��һ��ָ�룬ָ��str1�е�һ�γ���str2��λ��
////const char* Strstr(const char* str1,const char* str2){
////	// �򵥴ֱ�����ٷ�,ö�ٷ�
////	// KMP �㷨���۸���
////	
////
////	// balckָ��ֻ�Ǽ�¼��ǰ���ȵ�ָ��(����¼�õı��)��redָ������������Ƚϵ�ָ��
////	// str1 h    e    l    l   o    ''   w    o    r    l   d    \0
////	//                                   black
////	//                                                           red
////	// str2 w    o    r    l   d    \0
////	//                              sub
////
////	// �������sub������'\0'��˵���Ѿ��ҵ��ִ� �Ӵ�����ʼλ�þ���black��ָ��λ��
////
////	assert(str1 != NULL &&str2 != NULL);
////
////	if ( *str2 == '\0'){
////		// ��ʱ˵��str2Ϊ���ַ���
////		return NULL;
////	}
////	char* black = str1;
////
////	while ( *black != '\0'){
////		char* red = black;
////		char* sub = str2;
////
////		while ( *sub!='\0' && *red != '\0' && *red == *sub){
////			sub++;
////			red++;
////		}
////
////		// ����ѭ���������������
////		// red -> '\0'
////		// sub -> '\0'
////		// *sub != *red
////		if (*sub == '\0'){
////			// ��ô����
////			// �ҵ��ִ�λ�ã�black
////			return black;
////		}
////		
////		
////		// ������if�����Խ���������һ��if���������Ǹ�if�����������²���
////		if (*red == '\0'){
////		// ��ʱstr1�����ܰ���str2
////			return NULL;
////		}
////		// ���������´ε����
////		black++;
////	}
////	return NULL;
////}
//
//// �ж�str1���Ƿ����str2�Ӵ�,��������򷵻ص�һ�����������ַ�λ��
////const char* Strstr(const char* str1,const char* str2){
////	// �ȶ��ԣ��ж�ָ���Ƿ�Ϊ��ָ��
////	assert( str1 != NULL&&str2!=NULL);
////	// ��str1���±��
////	char* black = str1;
////	// �жϵ�str2��ΪNULLʱ��ָ��str2�ĵ�һ��Ԫ���Ƿ�Ϊ'\0'
////	if (*str2 == '\0'){
////		return NULL;
////	}
////	// ��ѭ������str1ÿһ���ַ�������ѭ��
////	while ( *black != '\0' ){
////		// ����һ��redָ���str2��ָ��str1�е��Ӵ���Ƚ�
////		char* red = black; // ÿһ��ѭ����Ҫ����red,ʹ֮��black��ͬһ������
////		char* sub = str2; // ����sub�ִ���ÿһ��ѭ��֮�󶼸��µ�str2�ĳ�ʼλ��
////
////		// �Ե�ǰ�ַ���λ�ú�sub���бȽϣ�ÿһ�αȽ�֮�󶼿��Եõ�һ�εĽ��
////		while (*red != '\0' && *sub != '\0' && (*red == *sub)){
////			red++;
////			sub++;
////		}
////
////		// ����ѭ�����ǲ�����������������֮һ
////		
////		// ���ж��ִ��Ƿ񵽴�'\0'
////		if (*sub == '\0'){
////			// �����Ӵ������������ҵ�
////			return black;
////		}
////		//����ж�*red�Ƿ�Ϊ'\0'
////		if ( *red == '\0'){
////			// ������*sub��Ϊ'\0'��ͬʱ*redΪ'\0'����str1����str2�Ӵ�
////			return NULL;
////		}
////		// ���һ���������black��Ҫ�ƶ�
////		black++;
////	}
////	// ������������û�з��������û�а�����ϵ
////	return NULL;
////}
//
//// �ֲ��������βη���ջ��
//
////int* Test(){
////	int a = 10;
////	return &a;
////}
//
//
//// strstok
//// �ҳ��ַ����еı�ǣ���ʵ���ַ����и�����ɸ��ַ�
//// sequence ϵ��,��Ҫһϵ�з�������
//
////char* strstok(const char* str1 , const char* str2){
////	return NULL;
////}
//
//
//
//
//
////// ���ִ���Դ���е�λ��
////const char* Strstr(const char* str1,const char* str2){
////	assert(str1 != NULL && str2 != NULL);
////	if (*str2 == '\0'){
////		return NULL;
////	}
////	char* black = str1;
////	while (*black != '\0'){
////		char* red = black;
////		char* sub = str2;
////		while (*red != '\0' && *sub != '\0' && (*red == *sub)){
////			red++;
////			sub++;
////		}
////		if (*red == '\0'){
////			return NULL;
////		}
////		if (*sub == '\0'){
////			return black;
////		}
////		if (*red != *sub){
////
////		}
////		black++;
////	}
////	return NULL;
////}
////int a; // ȫ�ֱ���������Ĭ��Ϊ0
////double _square(double x);
////
////int main(){
////
////	int i;
////	char c;
////	for (i = 0; i < 5;i++){
////		scanf("%d",&c);
////		printf("%d ",i);
////	}
////	printf("\n");
////	//printf("%g\n",_square(0.3));
////	//extern int a;
////
////	static int b = 0; // ֻ����һ��Դ�ļ��б�ʹ��
////
////	//char* str1 = "sddabc def";
////	//char* str2 = "abc ";
////	//char* n=strstr(str1,str2);
////	//printf("%s\n",n);
////	system("pause");
////	exit(0);
////}
////double _square(double x){
////	return x*x;
////}
//
////struct S{
////	int a;
////	char arr[0]; // �������顣������дΪchar arr[]
////};
////int main(){
////
////	char* str1 = "hdhe";
////	char* str2 = "hahe";
////	printf("%d\n",strcmp(str1,str2));
////	// ��������
////	//struct S* ps = malloc(sizeof(struct S)+100*sizeof(char));// �ṹ��ָ����ָ�����
////	//ps->a = 23;
////	//strcpy(ps->arr,"wei ren min fu wu!");
////	//printf("%d\n", ps->a);
////	//printf("%s\n", ps->arr);
////	//realloc(ps, sizeof(struct S) + 200 * sizeof(char)); // ��չ�ռ�
////	//free(ps);
////	//ps = NULL;
////	system("pause");
////	exit(0);
////}
////int* getint(){
////	int a = 10;
////	int a = *getint();
////	int b = 122;
////	printf("%d\n", a);
////	return &a;
////}
//// ָ����������ʼ����ʹ�ã�����ֱ��ʹ��
////void i(){
////	char* p; // �˴�p�Ŀռ����
////	*p = 12;
////
////	int num = 10;
////	char* pp = (char*)malloc(40);
////	free(pp); // �ͷ�֮���Ϊ�Ƿ��ڴ棬������Ұָ�룬�����ٷ���
////}
//
//// ��������
////struct S{
////	int a;
////	char arr[0]; // char arr[]; ���ǺϷ��� C99���һ��Ԫ��ά���飬��С���Բ�ȷ��
////	// sizeof���������������еĳ�Ա��С
////	// ��������ǰ����Ҫ�г�Ա
////};
////int main(void){
////	char* p = "wei ren min fu wu";
////	//*p = 'a';
////	system("pause");
////	return 0;
////}
//
////// ����static�Ǿ�̬������ʶ������˼�ʹ����������������ɣ�static����ı�����Ȼ�Ǳ������ڴ��е�
////// ��̬�ֲ�������Ч����ȫ�ֱ�����һƴ������λ�ں������ڲ����ͼ������ڳ����ģ�黯
////printf("%d\n", ret());  // 101
////printf("%d\n", ret()); // 102
////printf("%d\n", ret()); // 103  
//
//// lint������
////������C���Ա�������ȣ�
////lint���ԶԳ�����и��ӹ㷺�Ĵ��������
////��һ�ָ������ܵı��빤�ߡ�
////�����lint�����������ɨ��CԴ�ļ�����Դ������ ������ֲ�Ĵ��� ������档
////�������ڴ����lintʵ�ó����Ѿ���ø������ܣ�
////���������Լ���  ����ֲ�����⣬
////���ҿ��Լ�����Щ��Ȼ   ����ֲ   ���� ��ȫ�Ϻ��﷨ ��ȴ�� �����Ǵ��� �����ԡ�
//int a = 10;
//
//void fn(void)
//{
//	int n = 10;
//
//	printf("n=%d\n", n);
//	n++;
//	printf("n++=%d\n", n);
//}
//
//void fn_static(void)
//{
//	static int n = 10;
//
//	printf("static n=%d\n", n);
//	n++;
//	printf("n++=%d\n", n);
//}
//
//int ret(void){
//	static int a = 100;
//	a++;
//	return a;
//}
//
////int main(){
////	extern int a;
////	printf("%d\n",a);
////	//printf("%d\n", INT_MAX); // 21 4748 3647
////	//printf("%d\n", LLONG_MAX+1); // 21 4748 3647
////	//printf("%d\n", sizeof(short)); // 21 4748 3647
////	//char a = 2;
////	//char b = 256;
////	//char c = (char)(a + b);
////	//printf("%d\n",c);
////	//if (a+b<0){
////		//printf("s");
////	//}else{
////		//printf("f");
////	//}
////	system("pause");
////	exit(0);
////}
//
//void (*signal(int,void(*)(int)))(int);
//typedef void(*pf)(int);
//pf sig(int,pf);
////typedef (*ff(int,pf))(int);
//
////(*((void (*)())0))();
//typedef void(*pfun)(); // ����ʱ(*pfun)() һ��Ҫд(*pfun) �е����ţ�����()�����ȼ�����*��pfun()��һ�ּ�д��ʽ
//
////(*(pfun)0)();
// // ��ֵ�����(=)��Ƚ������(==)һ��Ҫ�ϸ�����
//// 
//
//float dd(){
//	return 43;
//}
//
//// 
////void fuzhi(){
////	char* r, *malloc(),*s="zheng",*t="ada";
////	r = malloc(strlen(s)+strlen(t)+1); // ����ÿһ���ַ���������'\0'�����ģ�Ȼ��strlen�������������'\0'�����+1
////	strcpy(r,s);
////	strcat(r,t);
////	printf(r);
////	free(r); // ����r�Ƕ�̬�ڴ����Ŀռ䣬���Ҫ��ʱ�ͷ�
////	r = NULL;
////}
//
//#define FULL 1
////faf(){ // �����û�������������ͣ���ϵͳ����Ĭ��Ϊ����
//	//printf("asdfg\n");
////}
//
//	 //faf();
//	//int n = 10;
//	//while (n-- >0){
//		//printf("%d\n",n);
//	//}
//	//int dd[10], i;
//	//for (i = 1; i <= 10;i++){
//		//dd[i] = 0;
//	//}
//	// �����Է���0(NULL)�ռ�,��Ϊδ������ΪUB
//
//	//int l = FULL;
//	//printf("%d\n",l);
//	//int* p = (int*)0x11223344;
//	//printf("%p\n", *(p + 1)); // �˴������˲��Ϸ����ڴ棬��˳�������
//	// ����ָ�벢������ָ����ָ�������
//	//fuzhi();
//	//int arr[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
//	// int(*parr)[4] = arr; // ��ά����ָ�붨��
//	//printf("%d\n", *(*(parr + 2) + 0));
//
//	///*int (*parr[3])[4] = &arr;*/
//	//printf("%d\n", *(*(parr + 1) + 1));
//	// C�����������б��������Զ�һ�����ţ�
//	//int arr[] = { 24,3,4,632,5,4,7,6, };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//printf("%d\n",sz);
//	//if (2 <= 1)
//	//	if (1)
//	//		printf("1");
//	//	else{
//	//		printf("2");
//	//	}
//
//	//printf("%o",dd); // 0��
//	//if (4 > 1); // ��while��if��������ֱ��+';'���������ᱨ����������������������
//	//printf("sc\n"); 
//	// ';'��д������д�����ܻ��������
//	// ������д:
//	//int s = 0;
//	//if (2 > 1)
//		//return // ��д';'�����s=6��Ϊreturn �Ĳ�����
//		//s = 6;
//	//int flag = 101010;
//	//int flags = 0256;
//	//if (flag & flags){
//		//printf("asd\n");
//	//}
//	//float (*h)(); // hָ�򷵻�ֵΪ�������͵ĺ�����ָ��
//	//(float(*ph)()); // (float (*h)()) ��ʾָ�򷵻�ֵΪ�������͵ĺ�����ָ�������ת����
//
//
//	//float *g(); // ()�����ȼ�����*����˿���дΪ*(g()) g()��һ��ָ��float�ĺ��� 
//	//char* pa, *pb, a, b; // �˴���char* ����ָ����pa��pb��Ȼ��a��bΪchar����
//	//printf("%d\n", sizeof(pa)); //4
//	//printf("%d\n", sizeof(pb)); //1
//	//printf("%d\n", sizeof(a));  //1
//	//printf("%d\n", sizeof(b));  //1
//
//	//char* pa, pb, a, b; // �˴��Ķ���ֻ��pa��ָ������char*��pb��a��b����char����
//	//printf("%d\n", sizeof(pa)); 4
//	//printf("%d\n", sizeof(pb)); 1
//	//printf("%d\n", sizeof(a));  1
//	//printf("%d\n", sizeof(b));  1
//	// ����������ʽ���ƣ���˿��Լ����ţ�����((f))����Ϊ�����ͣ���˿����Ƶ�(f)ҲΪ�����ͣ�f��ȻΪ������
//	//int((f))=3;
//	//printf("%d\n",f);
//	// �˴���һ�������õĺ������ú�����ָ��Ϊ0 ����Ϊvoid(*)()���ص�����
//	//(*(void(*)())0)();
//	//int x = 10, y = 12;
//	//int z = x+++ +x;
//	//printf("%d\n",z);
//
//	
//
//	//printf("/*");
//	//char* ch = "*/";
//	//��˫������������ʾ�������ַ�ָ�룬��������������Ӧ����ASCII������������
//	//char* c = "a"; //��char���롰char [2]���ļ�Ӽ���ͬ
//
//	// '\n'��int ���ͣ���p��char* �����ǲ������໥��ֵ��
//	//char* p = '\n';
//	//printf("asdd");
//	//int aa = 010;
//	// C�д�ӡ�˽�������"%o" ʮ��������"%x"
//	// 012����˽���
//	// 0x��ʾʮ������
//	//printf("%o",aa);
//	//int i = 9;
//	//i >>= 1;
//	//printf("%d", i);
//	//int bool = 1,b,k;
//	//b = k = bool;
//	//if ((k=bool) != 0){
//	//	//printf("success");
//	//}
//	//printf("%d %d %d",b,k,bool);
//	//int
//	//	a
//	//	=
//	//	10
//	//	;//�˷�����
//	//printf("%d",a);
//
////1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
////
////2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
////
////3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
////���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
////
////4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
////ʵ�֣��������ַ����е��ַ��������С�
////Ҫ�󣺲���ʹ��C�������е��ַ�������������
////
////5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
////6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
////7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//
////1.
////5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
////Aѡ��˵��B�ڶ����ҵ�����
////Bѡ��˵���ҵڶ���E���ģ�
////Cѡ��˵���ҵ�һ��D�ڶ���
////Dѡ��˵��C����ҵ�����
////Eѡ��˵���ҵ��ģ�A��һ��
////����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//void ranXk(){
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++){
//		for (b = 1; b <= 5;b++){
//			for (c = 1; c <= 5;c++){
//				for (d = 1; d <= 5;d++){
//					for (e = 1; e <= 5;e++){
//						if ((((b == 2) + (a == 3)) == 1) &&
//							(((b == 2) + (e == 4)) == 1) &&
//							(((c == 1) + (d == 2)) == 1) &&
//							(((c == 5) + (d == 3)) == 1) &&
//							(((e == 4) + (a == 1)) == 1)
//							) {
//							if ((a * b * c * d * e) == 120){
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//}
//
//// ����������
//// ���ͽṹ��ֱ�ӡ���֦��
//void GuessRank(){
//	// ��� ����ѡ�ֿ��ܵ��������
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++){
//		for (b = 1; a <= 5; b++){
//			for (c = 1; c < 5; c++){
//				for (d = 1; d < 5; d++){
//					for (e = 1; e <= 5; e++){
//						printf("%d\n", a + b + c + d + e);
//						if (e == 3){
//							printf("��ͣ\n");
//							system("pause");
//						}
//						
//					}
//				}
//			}
//		}
//	}
//}
//
////
////2.
////�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
////���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
////A˵�������ҡ�
////B˵����C��
////C˵����D��
////D˵��C�ں�˵
////��֪3����˵���滰��1����˵���Ǽٻ���
////�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
////
//void findMurdur(){
//	char killer = ' ';
//	for (killer = 'A'; killer <= 'D'; killer++){
//		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3){
//			printf("%c\n",killer);
//		}
//	}
//
//}
//
////3.����Ļ�ϴ�ӡ������ǡ�
////1
////1 1
////1 2 1
////1 3 3 1
//
//#define ROW 10
//#define COL 10
//void Yang_Hui_triangle(){
//	void pri(int arr[ROW][COL]);
//	int arr[ROW][COL] = {0};
//	for (int i = 0; i < ROW;i++){
//		for (int j = 0; j <= i;j++){
//			if (0 == j || j == i){
//				arr[i][j] = 1;
//				continue;
//			}
//			arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
//		}
//	}
//	pri(arr);
//}
//void pri(int arr[ROW][COL]){
//	for (int i = 0; i < ROW;i++){
//		for (int j = 0; j <= i;j++){
//			printf("%-3d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////int main(){
////	Yang_Hui_triangle();
////	system("pause");
////	return 0;
////}
//
//// �Զ�ʵ���ַ�������
//char* Strcpy(char* dest,const char* src){
//	// ����ָ��Ϸ�У��
//	if (dest == NULL || src == NULL){
//		return NULL;
//	}
//	char * ret = dest;
//	while (*src != '\0'){
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//	return ret;
//}
//
//char* Strcpy_new(char* dest,char* src){
//	if (src == NULL || dest == NULL){
//		return NULL;
//	}
//	int cur = 0;
//	while (src[cur] != '\0'){
//		dest[cur] = src[cur];
//		cur++;
//	}
//	dest[cur] = '\0';
//	return dest;
//}
//
//char* strcat_z(char* dest,const char* src){
//	if (dest==NULL || src==NULL){
//		return NULL;
//	}
//	int count = 0;
//	while (dest[count] != '\0'){
//		count++;
//	}
//	while (*src != '\0'){
//		dest[count] = *src;
//		src++;
//		count++;
//	}
//	dest[count] = '\0';
//	return dest;
//}
//
//char* _strcat(char* dest, const char* src){
//
//	if (dest == NULL || src == NULL){
//
//		return NULL;
//
//	}
//
//	int count = 0;
//
//	while (dest[count] != '\0'){
//
//		count++;
//
//	}
//
//	while (*src != '\0'){
//
//		dest[count++] = *src++;
//
//	}
//
//	dest[count] = '\0';
//
//	return dest;
//
//}
//char* _strcpy(char* dest, const char* src){
//	if (dest == NULL || src == NULL){
//		return NULL;
//	}
//	char* ret = dest;
//	while (*src != '\0'){
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//	return ret;
//}
//int _strlen(const char* src){
//
//	if (src == NULL){
//
//		return -1;
//
//	}
//
//	int count = 0; // "zheng"
//
//	while (*src != '\0'){
//
//		src++;
//
//		count++;
//
//	}
//
//	return count;
//
//}
//int mains(){
//
//	//printf_s �������ã����Ǳ�׼���еĺ���
//	//char str[5] = {0};
//	//Strcpy_new(str, "haha");
//
//	// ��һ����������ȥ�Ĳ�Ӧ��Ϊ���������Լ�ָ�����ͣ�Ӧ��Ϊ�������͵��ַ���
//	char dest[] = "zheng";
//	char src[] = "hong";
//	//_strcpy(dest, src);
//	printf("%d\n", _strlen("zheng hong"));
//	system("pause");
//	return 0;
//}
//enum weeks{
//	MON,
//	TUES,
//	WED,
//	TUR,
//	FRI,
//	SAT,
//	SUN
//};
//
//#include<errno.h>
//
//void FindMurder(){
//	char murder = 'A';
//	for (; murder < 'D';murder++){
//		if (3 == ((murder != 'A') + (murder == 'C') + (murder == 'D') + (murder != 'D'))){
//			printf("%c\n",murder);
//		}
//	}
//}
//
//
////int main(){
////	//GuessRank();
////	system("pause");
////	return 0;
////}
//	//FindMurder();
//	// malloc ��̬�����ڴ��
//   // malloc(size) sizeΪ��Ҫ���ٵ��ֽ���
//	// ����Ϊvoid* ���ر�������
//	//int* p = (int*)malloc(40); // mallocΪvoid* �����Ҫǿת
//	//if ( p == NULL){
//	//	printf("%s\n",strerror(errno));
//	//	return 0;
//	//}
//	// �ڴ�й© ��ʱ��һ�
//	//printf("%d\n", LONG_MIN);
//
//	// ��̬�����ڴ�ռ䣬free,p=NUUL ����������ʹ��
//	//int* p = (int*)malloc(40); // mallocΪvoid* �����Ҫǿת
//	//free(p); // ���ڶ�̬�ڴ�ռ�����ͷţ����Ƕ�̬�ڴ�free��UB
//	//p = NULL;
//
//	// 2��void* calloc(size_t num,size_t size)
//	// malloc(40)
//	// calloc(10.sizeof(int)) // 10��Ԫ�أ�ÿ��Ԫ��4���ֽڣ���ʼ���ռ�Ϊ0
//	// malloc Ч�ʸ��ߣ��ɵ��¶�����
//
//	//void* realloc(void* memblock,size_t size) // ���ڴ�ռ���е���
//	// memblock �Ѿ������˵��ڴ�ռ�
//	// size ���ٵĴ�С 20*sizeof(int)
//	// ʹ��malloc������reallocʱ��������ͬһ����ȥ����ָ��
//	// �п�������׷�ӣ��п���ȫ�����¿��٣���������realloc�Զ��ͷţ�����Ҫ�ֶ��ͷ�
//	//malloc free�ɶ�дʱҲ�п����ڴ�й©
//	// ��;����
//	// ��������
//	// ��̬�����ڴ�ռ䲻����ֱ��ʹ�ã��Կ�ָ�������
//	// ��̬���ٿռ䲻����Խ��
//
//
//
//
//
//
//
//
//
//
//
//
//	//// �볲����
//	//int arr[] = {37,2,89,23,68,7,1,23,63,10,14,5,7};
//	//int sz = sizeof(arr)/sizeof(arr[0]);
//	//printf("%d\n",sz);
//	//int max = 0;
//	//for (int i = 0; i < sz;i++){
//	//	if ( max < arr[i] ){
//	//		max = arr[i];
//	//	}
//	//}
//
//
//
//
//
//
//// malloc ȫ��Ϊmemory allocation,���ĳ�Ϊ��̬�ڴ����
//// ��������һ��������ָ����С���ڴ��������void*����Ϊ���ط�����ڴ�����ĵ�ַ��
//// ���޷�֪���ڴ����λ�õ�ʱ����Ҫ�������ڴ�ռ䣬��Ҫ�õ���̬�����ڴ棬�ҷ���Ĵ�С���ǳ���Ҫ��Ĵ�С
//
//
//// �ڴ�й©��ֻ���ٿռ䣬���ͷź�Σ��
////int main(){
////	//while (1){
////		//malloc(1);
////	//}
////	// ��Ҫ���գ�����������ڴ�
////	void* p = malloc(INT_MAX);
////	int* pint = (int*)p;
////	assert(pint != NULL);
////	int i = 0;
////	for (i = 0; i < 10;i++){
////		*(pint + i) = i;
////	}
////	for (i = 0; i < 10; i++){
////		printf("%d ", *(pint+i));
////	}
////	free(p);
////	system("pause");
////	return 0;
////}
//
//int maisdn(){
//   
//	// ����һ
//	// ��������
//
//
//
//
//
//	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//printf("%d\n",strlen(arr)); // �����ͨ������κβ�������UB����'\0'
//	//printf("%d\n",sizeof(*arr)); // 1 ��arr��ʽת��Ϊ������׵�ַ�������õõ���Ԫ�أ�char����
//	//printf("%d\n",sizeof(arr+0)); // 4 arr+0 arr��ʽת��Ϊָ��,char*����
//	//printf("%d\n",sizeof(*&arr)); // 6 ��ȡ���������飬�ٽ����ã��õ���������Ĵ�С
//	//printf("%d\n",sizeof(&arr));  // �˴���arrҲ��ʾ�������飬ȡ������������ĵ�ַ��&arr��ʾ������������ĵ�ַ������Ϊchar(*)[6]��Ϊ4���ֽ�
//	//printf("%d\n", sizeof(arr)); // �˴���arr��ʾ�������飬sizeof�����������Ĵ�С
//	//printf("%d\n",strlen(arr+0)); // δ������ΪUB,��������ʽתΪָ�� char* ������
//	//printf("%d\n",strlen(arr)); // δ������Ϊ(UB),arr Ϊ�ַ����飬���ַ���û�й�ϵ�������'\0'Ҳû�й�ϵ,y��˼�ʹ���һ�����ݺ͸�����Ҳ��û�й�ϵ�ģ������֮����һ������һ���ַ��ң�ֱ���ҵ�'\0'��ͣ��Ȼ���¼����һ������
//	system("pause");
//	return 0;
//}