#define _CRT_SECURE_NO_WARNINGS 1
// 微软搞事情，printf_s也不见得安全，本方版本 认为安全，事实上并非如此
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
////union 主要用来压缩空间。如果一些数据
////	不可能在同一时间同时被用到，则可以使用 union。
//// 用union 验证电脑系统是大端还是小端
// union S 
//{
//	int i;
//	char c;
//};
//int main(){
//	union S s;
//	s.i = 1;
//	if ( 1 == s.c){
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	system("pause");
//	exit(0);
//}
	//printf("%d\n",sizeof(s));
	//sizeof 返回的这种结构大小不包括柔性数组的内存。
	//const int num = 10; // 此时并未将num放置内存中，而是放于符号列表 当中
	//// const只读，不可以改变,const常量只有在定义的时候初始化，不可以在后期再做赋值或者改变
	//// const 只读变量分配存储空间，而是将它们保存在符号表中，这使
	////得它成为一个编译期间的值，没有了存储与读内存的操作，使得它的效率也很高

	//volatile int k = 10;  // 
	////译器对访问该变量的代码就不再进行优化，从而可以提供对特殊地址的稳定访问


	////char k = 'a';
	////int arr[Max];
	//const int i = 10;
	//extern const int i; // 此处的extern const i 是声明，并非定义 

// 局部变量位于栈中，在函数结束之后就会被释放，所以返回str将会导致错误
//return 语句不可返回指向“栈内存”的“指针”，因为该内存在函数体结束时
//被自动销毁。
//char * Func(void)
//{
//	char str[30];
//	…
//		return str;
//}
//str 属于局部变量，位于栈内存中，在 Func 结束的时候被释放，所以返回 str 将导致错误。


//const 修饰符也可以修饰函数的参数，当不希望这个参数值被函数体内意外改变时使
//用。例如：
//void Fun(const int i);
//告诉编译器 i 在函数体中的不能改变，从而防止了使用者的一些无意的或错误的修改。

//const int *p; // p 可变，p 指向的对象不可变
//int const *p; // p 可变，p 指向的对象不可变
//int *const p; // p 不可变，p 指向的对象可变
//const int *const p; //指针 p 和 p 指向的对象都不可变
#define Max 100  // 定义的是一个立即数
//#define 宏是在预编译阶段进行替换，而 const 修饰的只读变量是在编译的时候确定其值。
// #define 宏是在预编译阶段进行替换，而const修饰的只读变量是在编译时期确定其值
// #define 没有类型，然而const有类型

// 定义分配了内存，声明没有分配内存
// 
// 宏是一种预处理指令，它提供了一种机制，可以用来替换源代码中的字符串

//#define MAX( X, Y) X>Y?X:Y
//
//#define f(x) (x-1)

// 宏定义中就是符号的代换，因此最好每一个参数都带上括号,定义中最好所有都用括号括起来，不至于再另外的表达式中出更大的问题
//#define ABS(x) (((x)>0)?(x):(-(x)))
//int main(int args,	char* arsdr[]){ //很多人都认为main函数里面没有参数，实际上是有参数的，一个是整形，一个是字符指针数组
//	// 如果一个函数不定义返回类型，则返回int型数值
//
//	int num = 10;
//	void* pnum = &num;
//	((char*)pnum)++;
//
//	int IntArray_a[100];
//	memset(IntArray_a, 0, 100 * sizeof(int)); //将 IntArray_a 清 0
//
//	char arr[123];
//	memset(arr,'a',sizeof(char)*123);
//	for (size_t i = 0; i < 123;i++){
//		printf("%c\n",arr[i]);
//	}
	//  浮点数不能直接相减
	// 浮点数不能直接比较
	// 浮点数太大不能与太小进行相加

	//float f = 0.0000000000000000000000000000000001f;
	//if (f == 0.0000000000000000000000000000000001f){
		//printf("f == 0.0000000000000000000000000000000001f");
	//}


	// 指针变量在定义的时候一定要初始化
	// 


	// 自动跳转
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




	// 当i等于0时，a[0] =-1；
	//        255  a[255] = -256?
	// -256 此时已经越界针对8位的char类型数组
	// 因此进位之后后面8位皆为0
	// 所以第256位 a[255]=0;
	// strlen(a) , 从地址a开始记录，直到遇到'\0'就停止，'\0'不算入字符串长度中
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
	// 由于sizeof是关键字，因此()可以省略，但是在求类型时不可以省略,因为类型也是关键字，例如sizeof int 并非类型转换，也非关键字使用
	//printf("%d\n",sizeof i);
	//auto int num = 122;
	//printf("%d\n",ABS(6-9));
	//printf("%d\n",f(3));
	//printf("\n");
	//printf("%d", MAX(1, 2));

// Memcpy 用于拷贝字符串的指针
void* Memcpy(void* dest,const void* src,size_t num){
	// 先断言x
	assert(dest != NULL && src!=NULL);

	for (size_t i = 0; i < num;i++){
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return dest;
}


//// 相对于memcpy而言，会去考略向前复制或者向后复制
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
//	}
//	else{
//		Memcpy(dest, src, num);
//	}
//	return dest;
//}

// 比较两个字符串的大小
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
	// 如果是这三个其中一个原因跳出循环就做判断
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
// strcpy 拷贝的是字符串
// memcpy 拷贝内存（存啥数据都可以）
// 和字符串没关系，但是却放在string.h里面(bug)
// 考略到现有代码的兼容性，因此只能将错就错
// void* 是一种特殊的指针类型，通常指针变量包含两方面的信息
// void* 只包含地址没有内存空间大小的信息
// 导致coid* 不能解引用也不能进行运算操作(+/-)
// void* 是为了兼容各种类型不同的指针
// void* 是一种非常简陋的"泛型编程"
// C++:template

//void* Memcpy(void* dest,const void* src,size_t num){
//	// 与字符串没有关系，那就和'\0'没有关系
//	assert( dest!= NULL && src!=NULL);
//	char* ret = dest;
//	for (size_t i = 0; i < num;i++){
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}


// 当dest 和src缓冲区重合的时候拷贝会出现问题
// memmove 如果不重叠就Memcpy
// 如果重叠就Memmove

//void* Memmove(void* dest,const char* src,size_t num){
//	assert(dest!=NULL&&src!=NULL);
//	//先判断是否重叠
//	// 如果dest在src与src+size之间就算重叠
//	// 正常情况下，任何一个字符串受破坏就算Bug
//	char* cdest = (char*)dest;
//	char* csrc = (char*)src;
//	if ( csrc < cdest && csrc+num>cdest){
//		// 需要从后向前拷贝
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
//	// 先断言
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
//	// strncpy 最主要的意义是为了避免内存访问越界(dest内存不够用maybe)
//	// 但是并不一定能避免，没办法避免，num这个参数写错就无法避免
//	// 并不能很好的解决问题
//	// 类似于strcat也会才出现类似的问题
//	// 要想解决内存问题，自动扩容（但是C语言无法自动扩容）
//	//strncpy(str1,str2,sizeof(str1) -1); // -1  ==>  -'\0'
//	//printf(str1);
//
//	//printf("%c\n",'\07'); // 响铃 
//	//strncmp (只比较前n个字符)，效果并不是很明显，
//	// 在任何时候对字符串的操作都要小心
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



	//int* p = Test();
	//printf("hehe\n");
	//printf("%d\n",*p); //此时*p就不等于10
	// 根据初始字符位置比较
	//char* str1 = "abcdef";
	//char* str2 = "cde";
	//int ret = Strcmp(str1,str2);
	//printf("%d\n",ret);

	// 内存消耗过大 strcmp 考点(改错题)
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
////	// 先断言判断，判断指针是否为空
////	assert( str1 != NULL && str2 != NULL);
////	// 依次比较两个字符串对应的字符是否相等
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
////	// 看是哪一个字符串先到达'\0'就更小
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
//// 由于先指针指向的内容是不需要改变的，因此const char* str,此处允许指针发生改变
//int Strcmp(const char* str1,const char* str2){
//	// 首先判断str1与str2是否为空
//	assert(str1 != NULL && str2 != NULL );
//	 
//	// 循环一个一个判断字符串中得字符
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
//	// 跳出循环，原因是str1或者str2指向了'\0'
//	// 字符之间的比较，也就是没有结束字符与'\0'之间的比较
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
//// 食之无味，弃之可惜
//// 查找字符串中的子字符串中的位置
//// str1  "abcdef"
//// str2  "cde"
//// str1包含str2，str2是str1的字串
////// 返回值是一个指针，指向str1中第一次出现str2的位置
////const char* Strstr(const char* str1,const char* str2){
////	// 简单粗暴，穷举法,枚举法
////	// KMP 算法理论更快
////	
////
////	// balck指针只是记录当前进度的指针(做记录用的标记)，red指针才是真正作比较的指针
////	// str1 h    e    l    l   o    ''   w    o    r    l   d    \0
////	//                                   black
////	//                                                           red
////	// str2 w    o    r    l   d    \0
////	//                              sub
////
////	// 如果发现sub先遇到'\0'就说明已经找到字串 子串的起始位置就是black的指向位置
////
////	assert(str1 != NULL &&str2 != NULL);
////
////	if ( *str2 == '\0'){
////		// 此时说明str2为空字符串
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
////		// 上面循环结束有三种情况
////		// red -> '\0'
////		// sub -> '\0'
////		// *sub != *red
////		if (*sub == '\0'){
////			// 最好处理的
////			// 找到字串位置，black
////			return black;
////		}
////		
////		
////		// 这两个if不可以交换，下面一个if是在上面那个if不满足的情况下才有
////		if (*red == '\0'){
////		// 此时str1不可能包括str2
////			return NULL;
////		}
////		// 继续处理下次的情况
////		black++;
////	}
////	return NULL;
////}
//
//// 判断str1中是否包括str2子串,如果包含则返回第一个所包含的字符位置
////const char* Strstr(const char* str1,const char* str2){
////	// 先断言，判断指针是否为空指针
////	assert( str1 != NULL&&str2!=NULL);
////	// 将str1留下标记
////	char* black = str1;
////	// 判断当str2不为NULL时，指向str2的第一个元素是否为'\0'
////	if (*str2 == '\0'){
////		return NULL;
////	}
////	// 大循环，对str1每一个字符串进行循环
////	while ( *black != '\0' ){
////		// 定义一个red指针对str2与指定str1中的子串相比较
////		char* red = black; // 每一次循环都要更新red,使之与black在同一进度上
////		char* sub = str2; // 定义sub字串，每一个循环之后都更新到str2的初始位置
////
////		// 对当前字符串位置和sub进行比较，每一次比较之后都可以得到一次的结果
////		while (*red != '\0' && *sub != '\0' && (*red == *sub)){
////			red++;
////			sub++;
////		}
////
////		// 跳出循环则是不满足其中三个条件之一
////		
////		// 先判断字串是否到达'\0'
////		if (*sub == '\0'){
////			// 若是子串到达最后表明找到
////			return black;
////		}
////		//其次判断*red是否为'\0'
////		if ( *red == '\0'){
////			// 若果在*sub不为'\0'，同时*red为'\0'表明str1中无str2子串
////			return NULL;
////		}
////		// 最后一种情况就是black需要移动
////		black++;
////	}
////	// 如果以上情况都没有返回则表明没有包含关系
////	return NULL;
////}
//
//// 局部变量和形参放在栈上
//
////int* Test(){
////	int a = 10;
////	return &a;
////}
//
//
//// strstok
//// 找出字符串中的标记，其实把字符串切割成若干个字符
//// sequence 系列,需要一系列反复调用
//
////char* strstok(const char* str1 , const char* str2){
////	return NULL;
////}
//
//
//
//
//
////// 找字串在源串中的位置
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
////int a; // 全局变量连接器默认为0
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
////	static int b = 0; // 只会在一个源文件中被使用
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
////	char arr[0]; // 柔性数组。还可以写为char arr[]
////};
////int main(){
////
////	char* str1 = "hdhe";
////	char* str2 = "hahe";
////	printf("%d\n",strcmp(str1,str2));
////	// 柔性数组
////	//struct S* ps = malloc(sizeof(struct S)+100*sizeof(char));// 结构体指针用指针接受
////	//ps->a = 23;
////	//strcpy(ps->arr,"wei ren min fu wu!");
////	//printf("%d\n", ps->a);
////	//printf("%s\n", ps->arr);
////	//realloc(ps, sizeof(struct S) + 200 * sizeof(char)); // 扩展空间
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
//// 指针变量必须初始化再使用，不可直接使用
////void i(){
////	char* p; // 此处p的空间随机
////	*p = 12;
////
////	int num = 10;
////	char* pp = (char*)malloc(40);
////	free(pp); // 释放之后就为非法内存，类似于野指针，不可再访问
////}
//
//// 柔性数组
////struct S{
////	int a;
////	char arr[0]; // char arr[]; 都是合法的 C99最后一个元素维数组，大小可以不确定
////	// sizeof不包括柔性数组中的成员大小
////	// 柔性数组前必须要有成员
////};
////int main(void){
////	char* p = "wei ren min fu wu";
////	//*p = 'a';
////	system("pause");
////	return 0;
////}
//
////// 由于static是静态变量标识符，因此即使是整个函数运行完成，static定义的变量仍然是保存在内存中的
////// 静态局部变量的效果跟全局变量有一拼，但是位于函数体内部，就极有利于程序的模块化
////printf("%d\n", ret());  // 101
////printf("%d\n", ret()); // 102
////printf("%d\n", ret()); // 103  
//
//// lint编译器
////与大多数C语言编译器相比，
////lint可以对程序进行更加广泛的错误分析，
////是一种更加严密的编译工具。
////最初，lint这个工具用来扫描C源文件并对源程序中 不可移植的代码 提出警告。
////但是现在大多数lint实用程序已经变得更加严密，
////它不但可以检查出  可移植性问题，
////而且可以检查出那些虽然   可移植   并且 完全合乎语法 但却很 可能是错误 的特性。
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
//typedef void(*pfun)(); // 调用时(*pfun)() 一定要写(*pfun) 中的括号，由于()的优先级高于*，pfun()是一种简写形式
//
////(*(pfun)0)();
// // 赋值运算符(=)与比较运算符(==)一定要严格区分
//// 
//
//float dd(){
//	return 43;
//}
//
//// 
////void fuzhi(){
////	char* r, *malloc(),*s="zheng",*t="ada";
////	r = malloc(strlen(s)+strlen(t)+1); // 由于每一个字符串都是由'\0'结束的，然而strlen求的量并不包括'\0'，因此+1
////	strcpy(r,s);
////	strcat(r,t);
////	printf(r);
////	free(r); // 由于r是动态内存分配的空间，因此要及时释放
////	r = NULL;
////}
//
//#define FULL 1
////faf(){ // 如果并没有声明函数类型，则系统将其默认为整形
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
//	// 不可以访问0(NULL)空间,此为未定义行为UB
//
//	//int l = FULL;
//	//printf("%d\n",l);
//	//int* p = (int*)0x11223344;
//	//printf("%p\n", *(p + 1)); // 此处访问了不合法的内存，因此程序会崩溃
//	// 复制指针并不复制指针所指向的内容
//	//fuzhi();
//	//int arr[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
//	// int(*parr)[4] = arr; // 二维数组指针定义
//	//printf("%d\n", *(*(parr + 2) + 0));
//
//	///*int (*parr[3])[4] = &arr;*/
//	//printf("%d\n", *(*(parr + 1) + 1));
//	// C语言中数组列表中最后可以多一个逗号？
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
//	//printf("%o",dd); // 0，
//	//if (4 > 1); // 在while、if等语句后面直接+';'编译器不会报错，但是与你的语义有所相悖
//	//printf("sc\n"); 
//	// ';'多写或者少写都可能会引起错误
//	// 例如少写:
//	//int s = 0;
//	//if (2 > 1)
//		//return // 少写';'将会把s=6作为return 的操作数
//		//s = 6;
//	//int flag = 101010;
//	//int flags = 0256;
//	//if (flag & flags){
//		//printf("asd\n");
//	//}
//	//float (*h)(); // h指向返回值为浮点类型的函数的指针
//	//(float(*ph)()); // (float (*h)()) 表示指向返回值为浮点类型的函数的指针的类型转换符
//
//
//	//float *g(); // ()的优先级高于*，因此可以写为*(g()) g()是一个指向float的函数 
//	//char* pa, *pb, a, b; // 此处的char* 类型指针有pa、pb，然而a、b为char类型
//	//printf("%d\n", sizeof(pa)); //4
//	//printf("%d\n", sizeof(pb)); //1
//	//printf("%d\n", sizeof(a));  //1
//	//printf("%d\n", sizeof(b));  //1
//
//	//char* pa, pb, a, b; // 此处的定义只有pa是指针类型char*，pb、a、b都是char类型
//	//printf("%d\n", sizeof(pa)); 4
//	//printf("%d\n", sizeof(pb)); 1
//	//printf("%d\n", sizeof(a));  1
//	//printf("%d\n", sizeof(b));  1
//	// 声明符与表达式类似，因此可以加括号，以下((f))类型为浮点型，因此可以推得(f)也为浮点型，f仍然为浮点型
//	//int((f))=3;
//	//printf("%d\n",f);
//	// 此处是一个被调用的函数，该函数的指针为0 类型为void(*)()返回的类型
//	//(*(void(*)())0)();
//	//int x = 10, y = 12;
//	//int z = x+++ +x;
//	//printf("%d\n",z);
//
//	
//
//	//printf("/*");
//	//char* ch = "*/";
//	//用双引号引起来表示的是首字符指针，单引号引起来对应的是ASCII码表里面的整数
//	//char* c = "a"; //“char”与“char [2]”的间接级别不同
//
//	// '\n'是int 类型，而p是char* 类型是不可以相互赋值的
//	//char* p = '\n';
//	//printf("asdd");
//	//int aa = 010;
//	// C中打印八进制数用"%o" 十六进制用"%x"
//	// 012代表八进制
//	// 0x表示十六进制
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
//	//	;//此法分析
//	//printf("%d",a);
//
////1.递归和非递归分别实现求第n个斐波那契数。
////
////2.编写一个函数实现n^k，使用递归实现
////
////3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
////例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
////
////4. 编写一个函数 reverse_string(char * string)（递归实现）
////实现：将参数字符串中的字符反向排列。
////要求：不能使用C函数库中的字符串操作函数。
////
////5.递归和非递归分别实现strlen
////6.递归和非递归分别实现求n的阶乘
////7.递归方式实现打印一个整数的每一位
//
////1.
////5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
////A选手说：B第二，我第三；
////B选手说：我第二，E第四；
////C选手说：我第一，D第二；
////D选手说：C最后，我第三；
////E选手说：我第四，A第一；
////比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
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
//// 搜索类问题
//// 树型结构，直接“剪枝”
//void GuessRank(){
//	// 穷举 所有选手可能的所有情况
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++){
//		for (b = 1; a <= 5; b++){
//			for (c = 1; c < 5; c++){
//				for (d = 1; d < 5; d++){
//					for (e = 1; e <= 5; e++){
//						printf("%d\n", a + b + c + d + e);
//						if (e == 3){
//							printf("暂停\n");
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
////日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
////嫌疑犯的一个。以下为4个嫌疑犯的供词。
////A说：不是我。
////B说：是C。
////C说：是D。
////D说：C在胡说
////已知3个人说了真话，1个人说的是假话。
////现在请根据这些信息，写一个程序来确定到底谁是凶手。
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
////3.在屏幕上打印杨辉三角。
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
//// 自动实现字符串复制
//char* Strcpy(char* dest,const char* src){
//	// 先做指针合法校验
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
//	//printf_s 不建议用，并非标准库中的函数
//	//char str[5] = {0};
//	//Strcpy_new(str, "haha");
//
//	// 第一个参数传进去的不应该为常量类型以及指针类型，应该为数组类型的字符串
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
//	// malloc 动态开辟内存块
//   // malloc(size) size为需要开辟的字节数
//	// 类型为void* 返回本块内容
//	//int* p = (int*)malloc(40); // malloc为void* 因此需要强转
//	//if ( p == NULL){
//	//	printf("%s\n",strerror(errno));
//	//	return 0;
//	//}
//	// 内存泄漏 长时间挂机
//	//printf("%d\n", LONG_MIN);
//
//	// 动态开辟内存空间，free,p=NUUL 这三个连着使用
//	//int* p = (int*)malloc(40); // malloc为void* 因此需要强转
//	//free(p); // 对于动态内存空间进行释放，不是动态内存free是UB
//	//p = NULL;
//
//	// 2、void* calloc(size_t num,size_t size)
//	// malloc(40)
//	// calloc(10.sizeof(int)) // 10个元素，每个元素4个字节，初始化空间为0
//	// malloc 效率更高，干的事儿更少
//
//	//void* realloc(void* memblock,size_t size) // 对内存空间进行调整
//	// memblock 已经开辟了的内存空间
//	// size 开辟的大小 20*sizeof(int)
//	// 使用malloc，再用realloc时不可再用同一变量去接受指针
//	// 有可能连续追加，有可能全部重新开辟（拷贝），realloc自动释放，不需要手动释放
//	//malloc free成对写时也有可能内存泄漏
//	// 中途返回
//	// 垃圾回收
//	// 动态开辟内存空间不可以直接使用，对空指针解引用
//	// 动态开辟空间不可以越界
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
//	//// 鸽巢排序
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
//// malloc 全称为memory allocation,中文称为动态内存分配
//// 用于申请一块连续的指定大小的内存块区域，以void*类型为返回分配的内存区域的地址，
//// 当无法知道内存具体位置的时候，想要真正绑定内存空间，就要用到动态分配内存，且分配的大小就是程序要求的大小
//
//
//// 内存泄漏，只开辟空间，不释放很危险
////int main(){
////	//while (1){
////		//malloc(1);
////	//}
////	// 需要回收，否则会用完内存
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
//	// 问题一
//	// 勾搭起誓
//
//
//
//
//
//	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//printf("%d\n",strlen(arr)); // 针对普通数组的任何操作都是UB，除'\0'
//	//printf("%d\n",sizeof(*arr)); // 1 将arr隐式转换为数组的首地址，解引用得到首元素，char类型
//	//printf("%d\n",sizeof(arr+0)); // 4 arr+0 arr隐式转换为指针,char*类型
//	//printf("%d\n",sizeof(*&arr)); // 6 先取出整个数组，再解引用，得到整个数组的大小
//	//printf("%d\n",sizeof(&arr));  // 此处的arr也表示整个数组，取的是整个数组的地址，&arr表示的是整个数组的地址，类型为char(*)[6]，为4个字节
//	//printf("%d\n", sizeof(arr)); // 此处的arr表示整个数组，sizeof求出整个数组的大小
//	//printf("%d\n",strlen(arr+0)); // 未定义行为UB,数组名隐式转为指针 char* ，再找
//	//printf("%d\n",strlen(arr)); // 未定义行为(UB),arr 为字符数组，与字符串没有关系，因此与'\0'也没有关系,y因此即使求出一个数据和该数据也是没有关系的，简而言之就是一个接着一个字符找，直到找到'\0'就停，然后记录下这一个数据
//	system("pause");
//	return 0;
//}