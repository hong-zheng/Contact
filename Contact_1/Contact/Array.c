

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "List.h"
// 1��������һ���µ�Ԫ�ص�ʱ�����ռ䲻�㣬������һ�����Ŀռ�
// 2����ԭ�ռ�����ݿ������µĿռ�
// 3���ͷžɵĿռ�
// 4����Ԫ�ط����µĿռ�

void test01(){
	// ��ʼ����̬����
	Dynamic_Array* myArray = Init_Array();
	// ����Ԫ��
	for (int i = 0; i < 10;i++){
		Push_Back_Array(myArray,i);
	}
	//��ӡ
	print_Array(myArray);

	//����
	FreeSpace_Array(myArray);
}
int maian(void){
	test01();
	system("pause");
	return 0;
}