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
#include<stddef.h>

// 此种情况是允许的
struct A{
	struct B* b;
};
struct B{
	struct A* a;
};

// 函数传参防止在函数中修改参数变量就可以在前面+const
// 结构体传值用指针拷贝一份 
// C语言中，所有的参数传值都是
// 此种情况是不允许的，因为CC 并没有定义，然已经用了
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

// 位段
struct F{
	unsigned ch : 2;
	unsigned c : 4;
};

int maisln(){
	struct F f = {0};
	f.ch = 123;
	printf("%d\n",sizeof(struct F));
	//printf("%d\n",sizeof(f.ch)); // UB sizeof之后不能是位域
	//printf("%d\n", OffkSetOf());
	struct people* p=NULL;
	int* pnum = &(p->num); // 此处可以不用括号，因为->的优先级高于&

	system("pause");
	return 0;
}











//#define sec (24*60*60*365)
//
//// 第一个参数必须是字符数组，不能是字符指针传参时，否则程序会崩溃
//char* Strzcpy(char* dest, const char* src){
//	if ((dest == NULL) || (src == NULL)){
//		return NULL;
//	}
//	// 返回最初的dest
//	char*  ret = dest;
//	while (*src != '\0')
//	{
//		*dest  =  *src;
//		dest++;
//		src++;
//	}
//	// 最后的'\0'也要拷贝
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
////// 查找一个字符在一个字符串中
////char* strchr(const char* src,int ch){
////	assert( NULL!=src);
////	while ( ch != *src){
////		src++;
////	}
////	return src;
////}
////
////// 查找一个子串在一个字符串中出现的第一次位置
////char* Strstr(const char* dest,const char* src){
////	assert(NULL!=dest && NULL!=src);
////	// 判断*src中是否只有一个'\0'
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
//	char* dest = "wei ren min"; // SStrcmp这个参数不可以放常数，常量不可改动
//
//	char* src = "ren";
//	printf("%s\n", Medmcpy(dest, src,5));
//	//printf("%s\n", Strstr(dest,src));
//	//printf("%p\n", strchr(dest,'i'));
//	system("pause");
//	return 0;
//}
//// 写一个联合体，表明其实际用处
//// 在ip的十进制与点分十进制之间进行转换
//// ip地址就是四个字节，每个字节无符号字符数都在0-255，
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
//// 双重保证double check《代码大全》-->安全驾驶
//// 函数调用者，函数实现者都对参数进行合法性校验


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
// 不允许调用库函数，也不允许使用任何全局或
////局部变量编写 int my_strlen (char *strDest);
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
//// 解决的办法是为 name 指针 malloc 一块空间。
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
//	// 外循环
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
///// 使用二重指针解引用破坏数组找
//// 该方法已经对原数组造成了损坏
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
//// 在数组中寻找一个整数，并且返回该数所在位置
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
//// value 为传进数值，n_bits 为二进制位数
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
//// 将一个整数以字符类型打印
//void char_print(int num){
//	if (num < 10){
//		printf("%c \n",num+'0');
//		return;
//	}
//	char_print(num/10);
//	printf("%c\n",num%10+'0');
//}
//
//// 分别用递归和迭代实现阶乘(n!)和斐波那契数列(1,1,2,3,5,8,13,21,34,...)
//// 递归阶乘
//int jiecheng(int num){
//	if (1==num){
//		return 1;
//	}
//	return num*jiecheng(num-1);
//}
//// 迭代阶乘
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
//// 递归斐波那契数列
//// 1 1 2 3 5 8 13 21 34...
//int fbnq(int i){
//	if ((1 == i) || (2 == i)){
//		return 1;
//	}
//	return fbnq(i - 1) + fbnq(i - 2);
//}
//
//// 迭代实现斐波那契数列
//int fbnqq(int i){
//	int ret = 1,x=1,y=1;
//	while (i>2)// x y ret
//	{
//		// 一位一位移动数据
//		ret = x + y;
//		x = y;
//		y = ret;
//		i--;
//	}
//	return ret;
//}
//// size_t是定义在stddef.h中的类型，无符号整形
//// typedef _W64 unsigned int   size_t;
//// typedef _W64 unsigned int size_t
//
//// 库函数中strlen的返回值是size_t类型，无符号整形，最好是改为int,如此一来不容易出错
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
//	// 在该字符串中寻找是否有一个字符d
//	//char* strings[] = {"there","is","ak","car",0};
//	//printf("%d\n", find_c(strings, 'k'));
//
//	//malloc 申请0个字节
//	//申请 0 字节内存，函数并
//	//	不返回 NULL，而是返回一个正常的内存地址。但是你却无法使用这块大小为 0 的内存。这
//	//	好尺子上的某个刻度，刻度本身并没有长度，只有某两个刻度一起才能量出长度。对于这
//	//	一点一定要小心，因为这时候 if（NULL ！ = p）语句校验将不起作用。
//	char* n = "zheng";
//	struct student s = {0};
//	s.name = (char*)malloc(20); // 要用结构体的指针，先给其malloc一片空间
//	strcpy(s.name,n);
//	s.age = 21;
//
//	//printf("%s %d\n",s.name,s.age);
//	free(s.name);
//	s.name = NULL;
//
//	//静态区：保存自动全局变量和 static 变量（包括 static 全局和局部变量）。静态区的内容
//	//	在总个程序的生命周期内都存在，由编译器在编译的时候分配。
//	//	栈：保存局部变量。栈上的内容只在函数的范围内存在，当函数运行结束，这些内容
//	//	也会自动被销毁。其特点是效率高，但空间大小有限。
//	//	堆：由 malloc 系列函数或 new 操作符分配的内存。其生命周期由 free 或 delete 决定。
//	//	在没有释放之前一直存在，直到程序结束。其特点是使用灵活，空间比较大，但容易出错。
//
//	// 定义指针一定要初始化，没有初始化参数就初始化为NULL，避免野指针
//	system("pause");
//	return 0;
//}
//	//int ch = getchar(); // getchar()函数的返回值是一个int类型
//	// 先找一个合法内存，然后再对合法内存进行赋值
//	//int i = 10;
//	//*((int*)0x006ff97) = 10;
//	//int i = 10;
//	//int* p = (int*)0x0099fe3c;
	//*p = NULL;
	//p = NULL;

	//int b[3];
	//int a[] = {1,2,3};
	//b = a; // 此处的表达式用a给b赋值，并非一个可修改的左值
	//printf("%d\n",sizeof(void*)); // 4
	//int arr[] = {
	//	1,2,3,4,
	//	5,6,7,8,
	//}; // C语言中允许最后面多一个','
	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++){
	//	printf("%d ", *(arr + i));
	//}


// Lunix 
// pwd print work dir
// 转到根目录 cd /
// ls list 列出当前目录下的文件/文件夹
// cd change directory
// mkdir 创建文件夹
// rm -rf code 创建文件夹code

// 
// vim-->编辑器
// 普通模式-->i-->插入模式(写入代码)-->ESC-->普通模式-->:-->命令行模式
// vim test.c  创建一个.c文本在当前文件
// esc
// shift+:
// wq（write + quuit）
// gcc -->编译器
// . -->当前目录
// .. -->上一级目录
// -E 预处理
// > test.i 重定向 预编译之后的文件为 .i
// G : 直接来到最后一行
// usr/inlcude/stdio.h //文件目录
// gcc test.c > -E test.i // 编译重定向至test.i
// 编译： 
//预编译（预处理）阶段->: 处理#inlcude + 注释+#define定义符号的替换
// +#define定义的宏替换也是在这儿替换
// 所有的预处理指令
// #pragma 所有的预处理

// 编译为汇编代码(不同平台产生的汇编语言不同)
// gcc test.i -S
// 产生一个test.s汇编文件
// 把C语言转化为汇编语言 
//语法分析+词法分析+语义分析+符号汇总（在语法无措的情况下才能转换，否则无法转换）
// 但是在预处理阶段就不会解释报错语法错误，只有在当前编译阶段才会出现检测
// readelf 读取elf文件
// readelf a.out -s
// 此处还没有到局部变量，因此并没有汇总局部变量

// 汇编
//gcc test.s -c
// 生成 .o文件
// 把汇编代码转换为二进制代码
// 形成符号表







// fscanf 格式化的形式输入输出文件或者
// fprintf stdout

// 默认打开的三个流
// stderr 标准错误-屏幕 FILE*
// stdin 标准输入-键盘 FILE*
// stdout 标准输出-屏幕 FILE*


// 简单文件操作
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
//		printf("执行写操作成功！");
//	}
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	exit(0);
//}

// 6个错误
// malloc free 成对写，但是也有出现问题的，因为中途可能会直接返回
// 垃圾回收
// 动态内存空间开辟之后一定要进行判断
// 如果内存不够没有判断，又没开辟出来就出错
// 动态内存初始指针有移动*p++,只释放一部分也是错误
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

	//因为注释先于预处理指令被处理, 当这两行被展开成//…或
	//	/*…*/时, 注释已处理完毕, 此时再出现//…或/*…*/自然错误.因此,试图用宏开始或结束一段
	//	注释是不行的。

	//。但一定要注意 const
	//	修饰的不是常量而是 readonly 的变量，const 修饰的只读变量不能用来作为定义数组的维数，
	//	也不能放在 case 关键字后面。
// const修饰的不是常量而是只读变量
	// 不可以作为数组的维数
	// 也不可以作为case之后的选项

	//int i ;
	//i = 1, 2; // 此处赋值优先级要高于,运算符，逗号运算符在所有的运算符中优先级最低，因此应该时先赋值，再,运算
	//printf("%d\n",i); // 11
	// *p.f   .的运算符优先级大于*一次一般写为*(p.f)
	// *ap[]  [] 高于*
	// *fp()  () 高于*


	// 以下运算符都是从右到左
	//-负号运算符 - 表达式
	//	右到左
	//	单目运算符
	//	(类型) 强制类型转换(数据类型)表达式
	//	++ 自增运算符 ++变量名 / 变量名++ 单目运算符
	//	-- 自减运算符 --变量名 / 变量名-- 单目运算符
	//	* 取值运算符 *指针变量 单目运算符
	//	& 取地址运算符 &变量名 单目运算符
	//	!逻辑非运算符 !表达式 单目运算符
	//	~按位取反运算符 ~表达式 单目运算符
	//? : 条件运算符 表达式 1 ? 表达式 2 :
	//	表达式 3 右到左
	// q = a/b;
	// r = a%b;
	// a,b为整数
	// q为商，r为余数

	// 需要满足的三条规则，尽可能的去满足
    // 必须满足1、a = b*q +r
	// 2、r<b,如果改变a的正负号，希望q也随之改变，但q得绝对值不会改变
	// 3、当b>0时，希望保证r>=0,同时r<b
// 因此上面三条不可同时满足
	// 举例：(-3)/2

	//printf("%d\n", 2 / (-2));
	//printf("%d\n", 2 % (-2));

	//char* str = "sc c \0svxx";
	//printf("len=%d\n", strlen(str));

	//int i = 0;
	//i++ + ++i; // UB 未定义行为
	//int arr[] = {1,2,3,4,5,6};
	//printf("arr= %5p\n", arr);
	//int* p = arr;
	//printf("p=   %5p\n", p);

	//printf("(*p)++=   %5d\n", (*p)++); //1
	//printf("*p=%d\n",*p); // 2
	//printf("*(p++)=   %5d\n", *(p++)); //1
	//printf("*(++p)=   %5d\n", *(++p)); // 3
	
	// *p++ : ==> *(p++)由于++与*的优先级同级，因此运算顺序是自右向左，因此先执行p++再执行*,又因为\
	p++先引用p，因此先执行*p，再执行p++
	//printf("*p++=   %5d\n", *p++);
	//printf("p=   %5p\n", p);

	//int num = 10;
	//int* pnum = &num;
	//printf("%p\n",pnum);
	//printf("%d\n", *pnum++); // 先进行*操作再进行++操作
	//printf("%p\n", pnum);
	//*pnum++ = 23;
	//printf("%d\n", *pnum);
	//printf("%p\n", pnum);


	//int num = 10;
	//*&num = 20;
	//printf("%d\n",num);
	// 使用指针变量时一定要对其进行判断或者断言，否则会出现问题
	//int* p=null;
	//if ( 0 == p){
		//printf("\ksj");
	//}


	//内存中的每个位置由独一无二的地址标识
	// 内存中的每个位置都包含一个值

	// 名字与内存位置之间的关联并不是硬件所提供的，它是由编译器为我们实现的
	// 硬件仍然通过内存地址访问内存位置
	//printf("%d\n",INT_MAX);






//char a[10] = { "abcdefg" }; // 这样的写法和不加{}的意思是一样的，{}的作用是将代码打包
//int sz = sizeof(a) / sizeof(a[0]);
//for (int i = 0; i < sz; i++){
//	printf("%c  ", a[i]);
//}
//union 主要用来压缩空间。如果一些数据
//	不可能在同一时间同时被用到，则可以使用 union。
// 用union 验证电脑系统是大端还是小端
//union S
//{
//	int i;
//	char c;
//};

// 枚举可以一次定义多个常量，但是宏一次就只有一个
// 宏却是在预编译期做简单得替换
// 枚举是在编译期确定其值，而且可以调试
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
////typedef static int int32 // 不允许这样定义
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


	//0x01 << 2 + 30; // 移位操作需要注意越界 与+操作优先级高于<<操作符

	// C语言中有短路的说法，同时也可以解决短路问题 | & 
	//int i = 0;
	//int j = 0;
	//if ((++i>0) |  (++j>0))
	//{
	//	printf("i=%d,j=%d\n",i,j);
	//	//打印出 i 和 j 的值。
	//}

	//char s=~1;
	//printf("%d\n", s);
	// \ddd 1-3位八进制数所代表的字符
	// \xhh 1-2位十六进制所代表的字符
	//printf("%c\n", '\x22');
	//int x = 10;
	//int num = 2;
	//int* pnum = &num;
	//int y = x/ *pnum; // 不要写为(x/*pnum) 将'/'与'*'写在一起，这样编译器将会把它翻译为注释，直到找到注释的另一半进行匹配 

	

  

//#define IDD replacement list  //这是一条合法的预处理指令

	////int /* 。。。*/ // 此种注释合理的注释，编译器不是简单进行删除，而是用空格进行替换
	//in/* 。。。*/t i=10; // 此种注释不合理，前面说过注释会被空格替换，那这条注释不正确就很好理解了。
	//char* s = "abcdefgh   //hijk"; // 我们知道\
双引号引起来的都是字符串常量，那双斜杠也不例

// 上面这条注释合法，因为使用了'\'连接符，'\'符后面不可以加任何字符，只能直接换行\
但注意：/*…*/这种形式的注释不能嵌套，如：
///*这是/*非法的*/* /\
因为/*总是与离它最近的*/匹配。

 

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
	//x =  ++a +  ++a; // 未定义行为
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
	//p = 0x11223344; // 非法的，包括p = NULL 访问0地址也是非法的
	//printf("%d\n",*p);


	//PCHAR p3, p4; /// 此处得p4不是指针，是一个字符
	//p4 = 'a';

	//printf("%d\n",SUN);


	// 原码  1 1111111 
	// 反码  1 0000000
	// 补码  1 0000001
	//char c = -65;
	//printf("%d\n",c);


	//union S s;
	//s.i = 1;
	//if (1 == s.c){
		//printf("小端");
	//}
	//else
	//{
		//printf("大端");
	//}
