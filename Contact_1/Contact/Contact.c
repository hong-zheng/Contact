//#define _CRT_SECURE_NO_WARNINGS 1
//// ΢������飬printf_sҲ�����ð�ȫ�������汾 ��Ϊ��ȫ����ʵ�ϲ������
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<time.h>
//#include<sys/timeb.h>
//#include<assert.h>
//#include<limits.h>
//#include<math.h>
//#include<stddef.h>
//// д����֮ǰ�������������������Լ�Ҫд������
//
//// printf("%s",a)��ӡ���������ͺ�%Ҫƥ�䣬����ΪUB,δ��������
////
////typedef struct personInfo{
////	char name[1024];
////	char phone[1024];
////}PersonInfo;
////
////typedef struct AddressBook{
////	PersonInfo persons[MAX_SIZE]; // �˴����ô������ױ�����OS�ϵ�ջ�ռ�����
////	int size;
////}AddressBook;
////
////void init(AddressBook*  addr){
////	addr->size = 0;
////	// ���²������Բ�����
////	for (int i = 0; i < MAX_SIZE; i++){
////		strcpy(addr->persons[i].name, "");
////		strcpy(addr->persons[i].phone, "");
////	}
////}
//
//
//#define MAX_SIZE 200
//// дһ��ͨѶ¼,���ȶ���ÿһ����
//typedef struct People{
//	char name[1024];
//	char phone[1024];
//	char sex[10];
//}People;
//// ����һ��ͨѶ¼
//// peoples:����������ϵ����Ϣ
//// size : �ж��ٸ���ϵ��
//typedef struct Contact{
//	People peoples[MAX_SIZE];
//	size_t size;
//}Contact;
//// ��ʼ��ͨѶ¼
//void init(Contact* contact){
//	// �������Ĳ���һ��Ҫ���жϣ�������ֱ����
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
//// ��ӡһ���˵�
//int menu(){
//	printf("********************\n");
//	printf("0���˳�\n");
//	printf("1��������ϵ��\n");
//	printf("2��ɾ����ϵ��\n");
//	printf("3���޸���ϵ��\n");
//	printf("4��������ϵ��\n");
//	printf("5����ӡ������ϵ��\n");
//	printf("********************\n");
//	printf("�������ѡ��:>\n");
//	int choice = -0;
//	scanf("%d",&choice);
//	return choice;
//}
//void Add_Contact(Contact* contact){
//	if (NULL == contact){
//		return;
//	}
//	printf("��������:>\n");
//	char name[1024] = {0};
//	scanf("%s",name);
//	printf("����绰��:>\n");
//	char phone[1024] = { 0 };
//	scanf("%s", phone);
//	printf("�����Ա�:>\n");
//	char sex[10] = { 0 };
//	scanf("%s", sex);
//	strcpy(contact->peoples[contact->size].name,name);
//	strcpy(contact->peoples[contact->size].phone,phone);
//	strcpy(contact->peoples[contact->size].sex,sex);
//	contact->size++;
//	printf("�����ϵ�˳ɹ�\n");
//}
//void Del_Contact(Contact* contact){
//	if (NULL == contact){
//		return;
//	}
//	// ���жϣ����contact->sizeΪ0����û������ͨѶ¼����
//	if (0 == contact->size){
//		printf("ͨѶ¼Ϊ�գ�ɾ��ʧ��\n");
//		return;
//	}
//	int id = 0;
//	printf("����ɾ�������:>");
//	scanf("%d",&id);
//	contact->peoples[id] = contact->peoples[contact->size-1];
//	contact->size--;
//	printf("ɾ���ɹ�\n");
//}
//void Modify_Contact(Contact* contact){
//	if (NULL == contact){
//		return;
//	}
//	printf("������Ҫ�޸ĵ����:>");
//	int id = 0;
//	// %d--->%s���򲻿�
//	scanf("%d",&id);
//	People* people = &contact->peoples[id];
//	char name[1024] = { 0 };
//	char phone[1024] = { 0 };
//	char sex[10] = { 0 };
//	printf("������Ҫ�޸ĵ�����(* ��ʾ���޸�):>\n");
//	scanf("%s",name);
//	if ('*' == *name){
//		printf("�޸���һ��\n");
//	}else{
//		strcpy(people->name, name);
//	}
//	printf("������Ҫ�޸ĵĵ绰��(* ��ʾ���޸�):>");
//	scanf("%s", phone);
//	if ('*' == *phone){
//		printf("�޸���һ��\n");
//	}
//	else{
//		strcpy(people->phone, phone);
//	}
//	printf("������Ҫ�޸ĵ��Ա�(* ��ʾ���޸�):>");
//	scanf("%s", sex);
//	if ('*' == *sex){}
//	else{
//		strcpy(people->sex, sex);
//	}
//	printf("�޸����\n");
//}
//void Find_Contact(Contact* contact){
//	if ( NULL == contact){
//		return;
//	}
//	if (0 == contact->size){
//		printf("ͨѶ¼Ϊ��!");
//		return;
//	}
//	// ͨ����ϵ������������ϵ��
//	printf("����������ϵ�˵�����:>");
//	char name[1024] = {0};
//	scanf("%s",name);
//	for (size_t i = 0; i < contact->size;i++){
//		if (0 == strcmp(name, contact->peoples[i].name)){
//			printf("��������ϵ�����ҵ�!��Ϣ����:\n");
//			printf("[%d]   %-10s%-10s%-10s\n",i,contact->peoples[i].name,contact->peoples[i].phone,contact->peoples[i].sex);
//			return;
//		}
//	}
//	printf("��ͨѶ¼��û�и���ϵ��");
//}
//void Dis_Contact(Contact* contact){
//	if (NULL == contact){
//		return;
//	}
//	if (0 == contact->size){
//		printf("ͨѶ¼Ϊ��\n");
//	}
//	for (size_t i = 0; i < contact->size;i++){
//		printf("[%d]   %-10s%-10s%-10s\n",i,contact->peoples[i].name,contact->peoples[i].phone,contact->peoples[i].sex);
//	}
//	printf("\nͨѶ¼��һ����%d����\n",contact->size);
//}
//
//
//
//int maiasswen(){
//
//	// ����һ��ͨѶ¼
//	Contact contact = {0};
//	// ��ʼ��һ��ͨѶ¼
//	init(&contact);
//	// ���庯��ָ��
//	typedef void (*Func)(Contact*);
//	// ����һ��ת�Ʊ�
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
//			printf("�˳�\n");
//			break;
//		}
//		fun_contact[choice](&contact);
//	}
//	//// �˴����ô������ױ�����OS�ϵ�ջ�ռ�����
//	//AddressBook address_book;
//	//char c[1024] = {0};
//	//scanf("%s",&c);
//	system("pause");
//	return 0;
//}