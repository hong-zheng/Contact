//#define _CRT_SECURE_NO_WARNINGS 1
//// 微软搞事情，printf_s也不见得安全，本方版本 认为安全，事实上并非如此
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<time.h>
//#include<sys/timeb.h>
//#include<assert.h>
//#include<limits.h>
//#include<math.h>
//#include<stddef.h>
//// 写代码之前尽可能先用文字描述自己要写的内容
//
//// printf("%s",a)打印的数据类型和%要匹配，否则为UB,未定义类型
////
////typedef struct personInfo{
////	char name[1024];
////	char phone[1024];
////}PersonInfo;
////
////typedef struct AddressBook{
////	PersonInfo persons[MAX_SIZE]; // 此处设置大了容易崩溃，OS上的栈空间有限
////	int size;
////}AddressBook;
////
////void init(AddressBook*  addr){
////	addr->size = 0;
////	// 以下操作可以不进行
////	for (int i = 0; i < MAX_SIZE; i++){
////		strcpy(addr->persons[i].name, "");
////		strcpy(addr->persons[i].phone, "");
////	}
////}
//
//
//#define MAX_SIZE 200
//// 写一个通讯录,首先定义每一个人
//typedef struct People{
//	char name[1024];
//	char phone[1024];
//	char sex[10];
//}People;
//// 定义一个通讯录
//// peoples:包含所有联系人信息
//// size : 有多少个联系人
//typedef struct Contact{
//	People peoples[MAX_SIZE];
//	size_t size;
//}Contact;
//// 初始化通讯录
//void init(Contact* contact){
//	// 给进来的参数一定要做判断，不可以直接用
//	if ( NULL == contact ){
//		return;
//	}
//	contact->size = 0;
//	for (size_t i = 0; i < MAX_SIZE;i++){
//		strcpy(contact->peoples[i].name, "");
//		strcpy(contact->peoples[i].phone, "");
//		strcpy(contact->peoples[i].sex, "");
//	}
//}
//// 打印一个菜单
//int menu(){
//	printf("********************\n");
//	printf("0、退出\n");
//	printf("1、增加联系人\n");
//	printf("2、删除联系人\n");
//	printf("3、修改联系人\n");
//	printf("4、查找联系人\n");
//	printf("5、打印所有联系人\n");
//	printf("********************\n");
//	printf("输入你的选项:>\n");
//	int choice = -0;
//	scanf("%d",&choice);
//	return choice;
//}
//void Add_Contact(Contact* contact){
//	if (NULL == contact){
//		return;
//	}
//	printf("输入姓名:>\n");
//	char name[1024] = {0};
//	scanf("%s",name);
//	printf("输入电话号:>\n");
//	char phone[1024] = { 0 };
//	scanf("%s", phone);
//	printf("输入性别:>\n");
//	char sex[10] = { 0 };
//	scanf("%s", sex);
//	strcpy(contact->peoples[contact->size].name,name);
//	strcpy(contact->peoples[contact->size].phone,phone);
//	strcpy(contact->peoples[contact->size].sex,sex);
//	contact->size++;
//	printf("添加联系人成功\n");
//}
//void Del_Contact(Contact* contact){
//	if (NULL == contact){
//		return;
//	}
//	// 做判断，如果contact->size为0，则没有人在通讯录里面
//	if (0 == contact->size){
//		printf("通讯录为空，删除失败\n");
//		return;
//	}
//	int id = 0;
//	printf("输入删除的序号:>");
//	scanf("%d",&id);
//	contact->peoples[id] = contact->peoples[contact->size-1];
//	contact->size--;
//	printf("删除成功\n");
//}
//void Modify_Contact(Contact* contact){
//	if (NULL == contact){
//		return;
//	}
//	printf("输入需要修改的序号:>");
//	int id = 0;
//	// %d--->%s万万不可
//	scanf("%d",&id);
//	People* people = &contact->peoples[id];
//	char name[1024] = { 0 };
//	char phone[1024] = { 0 };
//	char sex[10] = { 0 };
//	printf("输入需要修改的姓名(* 表示不修改):>\n");
//	scanf("%s",name);
//	if ('*' == *name){
//		printf("修改下一个\n");
//	}else{
//		strcpy(people->name, name);
//	}
//	printf("输入需要修改的电话号(* 表示不修改):>");
//	scanf("%s", phone);
//	if ('*' == *phone){
//		printf("修改下一个\n");
//	}
//	else{
//		strcpy(people->phone, phone);
//	}
//	printf("输入需要修改的性别(* 表示不修改):>");
//	scanf("%s", sex);
//	if ('*' == *sex){}
//	else{
//		strcpy(people->sex, sex);
//	}
//	printf("修改完成\n");
//}
//void Find_Contact(Contact* contact){
//	if ( NULL == contact){
//		return;
//	}
//	if (0 == contact->size){
//		printf("通讯录为空!");
//		return;
//	}
//	// 通过联系人姓名查找联系人
//	printf("输入所查联系人的姓名:>");
//	char name[1024] = {0};
//	scanf("%s",name);
//	for (size_t i = 0; i < contact->size;i++){
//		if (0 == strcmp(name, contact->peoples[i].name)){
//			printf("所查找联系人已找到!信息如下:\n");
//			printf("[%d]   %-10s%-10s%-10s\n",i,contact->peoples[i].name,contact->peoples[i].phone,contact->peoples[i].sex);
//			return;
//		}
//	}
//	printf("该通讯录中没有该联系人");
//}
//void Dis_Contact(Contact* contact){
//	if (NULL == contact){
//		return;
//	}
//	if (0 == contact->size){
//		printf("通讯录为空\n");
//	}
//	for (size_t i = 0; i < contact->size;i++){
//		printf("[%d]   %-10s%-10s%-10s\n",i,contact->peoples[i].name,contact->peoples[i].phone,contact->peoples[i].sex);
//	}
//	printf("\n通讯录中一共有%d个人\n",contact->size);
//}
//
//
//
//int maiasswen(){
//
//	// 定义一个通讯录
//	Contact contact = {0};
//	// 初始化一个通讯录
//	init(&contact);
//	// 定义函数指针
//	typedef void (*Func)(Contact*);
//	// 定义一个转移表
//	Func fun_contact[] = {
//		NULL,
//		Add_Contact,
//		Del_Contact,
//		Modify_Contact,
//		Find_Contact,
//		Dis_Contact
//	};
//	while(1){
//		int choice = menu();
//		if (0 >= choice || choice > 5){
//			printf("退出\n");
//			break;
//		}
//		fun_contact[choice](&contact);
//	}
//	//// 此处设置大了容易崩溃，OS上的栈空间有限
//	//AddressBook address_book;
//	//char c[1024] = {0};
//	//scanf("%s",&c);
//	system("pause");
//	return 0;
//}