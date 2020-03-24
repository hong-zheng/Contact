#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int mainaa(){

	int a[3][4] = { 0 };

	//printf("%d\n", sizeof(a[0][0])); // 4 int类型
	//printf("%d\n",sizeof(a)) ; // 3*4*4 12个元素，每个元素四个字节
	//printf("%d\n", sizeof(*&a)); // 48 取整个数组的地址，再解引用


	//char arr[] = "abcdef";
	////printf("%d\n", sizeof(arr)); // sizeof(arr) 为7，求的是整个数组的长度，其中'\0'是数组中的内容
	//// 求的是内存大小，数组中包括'\0',arr代表整个数组
	////printf("%d\n", sizeof(arr+0)); // arr+0 转换为char* 型，为一个指针，因此为4
	////printf("%d\n", sizeof(*arr)); // *arr 对arr进行解析，得到一个字符'a'
	////printf("%d\n", sizeof(&arr)); // &arr为4 对数组名取地址，就是一个地址，为四个字节，char(*)[7],该数组中有7个元素，所以类型为char(*)[7]
	////printf("%d\n", sizeof(&arr+1)); // 由于跳过了一个7个字节的数组，仍然为地址，4个字节 char(*)[7]，仍然为数组指针
	//printf("%d\n", sizeof(&arr[0]+1));





	system("pause");
	return 0;
}