#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int mainaa(){

	int a[3][4] = { 0 };

	//printf("%d\n", sizeof(a[0][0])); // 4 int����
	//printf("%d\n",sizeof(a)) ; // 3*4*4 12��Ԫ�أ�ÿ��Ԫ���ĸ��ֽ�
	//printf("%d\n", sizeof(*&a)); // 48 ȡ��������ĵ�ַ���ٽ�����


	//char arr[] = "abcdef";
	////printf("%d\n", sizeof(arr)); // sizeof(arr) Ϊ7���������������ĳ��ȣ�����'\0'�������е�����
	//// ������ڴ��С�������а���'\0',arr������������
	////printf("%d\n", sizeof(arr+0)); // arr+0 ת��Ϊchar* �ͣ�Ϊһ��ָ�룬���Ϊ4
	////printf("%d\n", sizeof(*arr)); // *arr ��arr���н������õ�һ���ַ�'a'
	////printf("%d\n", sizeof(&arr)); // &arrΪ4 ��������ȡ��ַ������һ����ַ��Ϊ�ĸ��ֽڣ�char(*)[7],����������7��Ԫ�أ���������Ϊchar(*)[7]
	////printf("%d\n", sizeof(&arr+1)); // ����������һ��7���ֽڵ����飬��ȻΪ��ַ��4���ֽ� char(*)[7]����ȻΪ����ָ��
	//printf("%d\n", sizeof(&arr[0]+1));





	system("pause");
	return 0;
}