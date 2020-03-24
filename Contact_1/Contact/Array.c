

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "List.h"
// 1、当插入一个新的元素的时候，若空间不足，则申请一块更大的空间
// 2、将原空间的数据拷贝到新的空间
// 3、释放旧的空间
// 4、把元素放入新的空间

void test01(){
	// 初始化动态数组
	Dynamic_Array* myArray = Init_Array();
	// 插入元素
	for (int i = 0; i < 10;i++){
		Push_Back_Array(myArray,i);
	}
	//打印
	print_Array(myArray);

	//销毁
	FreeSpace_Array(myArray);
}
int maian(void){
	test01();
	system("pause");
	return 0;
}