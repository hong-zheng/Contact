#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main(){


	system("pause");
	return 0;
}
// ������-->�ݴ���-->�ֿ���
// git status // �����  
//git add hello.c
// git status
// git commit -m "�ύ����"
// git status
// git push

// ��clone ��Զ����Ŀ���ڱ���
// https://github.com/hong-zheng/tic-tac-toe.git 
// ����ctrl + insert
// Linux �ϵ�ճ��shift+insert


//#define VAR 20
//#define CHOICE 7
//#define MAX 1000
//
////  "We are happy"
////  "We%20are%20happy"
////  strcat
//// �ַ�������,����ǰ������ %20
//char* move_back(char* src,int len){
//	//    happy
//	// %20happy
//	char* front = src + len;
//	char* back = src + len+3;
//	for (int i = 0; i < len;i++){
//		*back = *front;
//		back--;
//		front--;
//	}
//	*front++ = '%';
//	*front++ = '2';
//	*front = '0';
//	*(back+1) = '\0';
//	return src;
//}
//char* tihuan(char* str){
//	char* yuan = str;
//	int len = strlen(str);
//	char* back = str + len;
//
//
//	return yuan;
//}
//int main(){
//	//char* str = "happy";
//	//printf("%s\n",move_back(str,strlen(str)));
//
//	//char c[100] = "we are happy";
//	//int space_num = 2;
//	//int pos = strlen(c);
//	//int new_pos = pos + (2 * space_num);
//	//while (pos >= 0)
//	//{
//	//	if (c[pos] == ' ')
//	//	{
//	//		c[new_pos--] = '0';
//	//		c[new_pos--] = '2';
//	//		c[new_pos--] = '%';
//	//		pos--;
//	//	}
//	//	else
//	//	{
//	//		c[new_pos--] = c[pos--];
//	//	}
//	//}
//	//printf("%s\n", c);
//
//
//	char ch[] = "We are happy";
//	int len = sizeof(ch) / sizeof(ch[0]);
//	int space_num = 0;
//	for (int i = 0; i < len;i++){
//		if (' ' == ch[i]){
//			space_num++;
//		}
//	}
//	//  "We are happy"
//	//  "We%20are%20happy"
//	int newLen = len + space_num * 2;
//	while (len>=0){
//		if (' ' == ch[len]){
//			ch[newLen--] = '0';
//			ch[newLen--] = '2';
//			ch[newLen--] = '%';
//		}else{
//			ch[newLen--] = ch[len--];
//		}
//	}
//	printf("%s\n",ch);
//	system("pause");
//	return 0;
//}
//int menu(){
//	printf("*******************************\n");
//	printf("******** 0��exit       ********\n");
//	printf("******** 1��Add        ********\n");
//	printf("******** 2��Del        ********\n");
//	printf("******** 3��Modify     ********\n");
//	printf("******** 4��Find       ********\n");
//	printf("******** 5��Display    ********\n");
//	printf("******** 6��Clear      ********\n");
//	printf("******** 7��SortOfName ********\n");
//	printf("*******************************\n");
//	printf("���ݲ˵��������ѡ��:>\n");
//	int choice = 0;
//	scanf("%d", &choice);
//	return choice;
//}
//// ������Ϣ��һ���ṹ�����洢
//typedef struct People{
//	char name[1024];
//	char sex[1024];
//	int age;
//	char phone[1024];
//	char addr[1024];
//}People;
//typedef struct Contact{
//	People* peoples;
//	int size; // size ��¼��ǰͨѶ¼ ���ж�����ϵ��
//	int capacity; // ��¼��ǰͨѶ¼�����ɶ�����ϵ��
//}Contact;
//
//void Init(Contact* contact){
//	//(*contact).people ==> contact->people
//	if (NULL == contact){
//		return;
//	}
//	contact->capacity = VAR;
//	contact->peoples = (People*)malloc(sizeof(People)*contact->capacity);
//	contact->size = 0;
//}
//void AddContact(Contact* contact){
//	if (NULL == contact){
//		return;
//	}
//	if (MAX == contact->size){
//		printf("ͨѶ¼������\n");
//		return;
//	}
//	if (contact->size >= contact->capacity){
//		contact->capacity += VAR;
//		People* peoples = contact->peoples;
//		contact->peoples = (People*)malloc(sizeof(People)*contact->capacity);
//		// �ṹ��֮���໥��ֵ
//		//for (size_t i = 0; i < contact->size;i++){
//		//	peoples[i] = contact->peoples[i];
//		//}
//		memcpy(contact->peoples, peoples, sizeof(People)*contact->size);
//		free(peoples);
//		peoples = NULL;
//	}
//	char name[1024];
//	char sex[1024];
//	int age;
//	char phone[1024];
//	char addr[1024];
//	printf("������������ϵ�˵�����:>\n");
//	scanf("%s", name);
//	strcpy(contact->peoples[contact->size].name, name);
//	printf("������������ϵ�˵��Ա�:>\n");
//	scanf("%s", sex);
//	strcpy(contact->peoples[contact->size].sex, sex);
//	printf("������������ϵ�˵�����:>\n");
//	scanf("%d", &age);
//	contact->peoples[contact->size].age = age;
//	printf("������������ϵ�˵ĵ绰:>\n");
//	scanf("%s", phone);
//	strcpy(contact->peoples[contact->size].phone, phone);
//	printf("������������ϵ�˵�סַ:>\n");
//	scanf("%s", addr);
//	strcpy(contact->peoples[contact->size].addr, addr);
//	FILE* pf = fopen("G:\\lesson002\\Contact\\Contact/contact.txt","w+");
//	//size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)
//	//ptr -- ����ָ��Ҫ��д���Ԫ�������ָ�롣
//	//size -- ����Ҫ��д���ÿ��Ԫ�صĴ�С�����ֽ�Ϊ��λ��
//	//nmemb -- ����Ԫ�صĸ�����ÿ��Ԫ�صĴ�СΪ size �ֽڡ�
//	//stream -- ����ָ�� FILE �����ָ�룬�� FILE ����ָ����һ���������
//	//fwrite(buf, sizeof(char), sizeof(buf) - 1, stdout);
//	fwrite(&(contact->peoples[contact->size]), sizeof(People),1 , pf);
//	//fwrite(&(contact->peoples[contact->size]), sizeof(contact->peoples[contact->size].name), 1, pf);
//	//fwrite((char*)&(contact->peoples[contact->size]) + sizeof(contact->peoples[contact->size].name)
//	//	, sizeof(contact->peoples[contact->size].sex), 1, pf);
//	//fwrite((char*)&(contact->peoples[contact->size]) + sizeof(contact->peoples[contact->size].sex)
//	//	, sizeof(contact->peoples[contact->size].age), 1, pf);
//	//fwrite((char*)&(contact->peoples[contact->size]) + sizeof(contact->peoples[contact->size].age)
//	//	, sizeof(contact->peoples[contact->size].phone), 1, pf);
//	//fwrite((char*)&(contact->peoples[contact->size]) + sizeof(contact->peoples[contact->size].phone)
//		//, sizeof(contact->peoples[contact->size].addr), 1, pf);
//	//rewind(pf);
//	//People sb = { 0 };
//	//fread(&sb, sizeof(sb), 1, pf);
//	//printf("[%d]\t\t%s\t\t%s\t\t%d\t\t%s\t%s\n",
//	//	1,
//	//	sb.name,
//	//	sb.sex,
//	//	sb.age,
//	//	sb.phone,
//	//	sb.addr);
//	fclose(pf);
//	contact->size++;
//	printf("���ӳɹ�\n");
//}
//void DelContact(Contact* contact){
//	if (NULL == contact){
//		return;
//	}
//	// ����ǰ��������ɾ���û�,ͬʱ��Ҫ��֤��Ҫɾ���Ķ��û�����ϵ�˷�Χ֮��
//
//	int choice = 0;
//	printf("��ѡ������Ҫɾ�����û�:>\n");
//	while (1){
//		scanf("%d", &choice);
//		if (choice >= contact->size || choice < 0){
//			printf("ѡ������������ѡ��ɾ���û�:>\n");
//			continue;
//		}
//		break;
//	}
//	contact->peoples[choice] = contact->peoples[contact->size - 1];
//	contact->size--;
//	printf("ɾ���ɹ�\n");
//}
//void ModifyContact(Contact* contact){
//	if (NULL == contact){
//		return;
//	}
//	if (0 == contact->size){
//		printf("ͨѶ¼Ϊ��\n");
//		return;
//	}
//	int choice = 0;
//	printf("��ѡ����Ҫ�޸������:>\n");
//	while (1){
//		scanf("%d", &choice);
//		if (choice >= contact->size || choice<0){
//			printf("������ѡ��:>\n");
//			continue;
//		}
//		break;
//	}
//	char name[1024];
//	char sex[1024];
//	int age;
//	char phone[1024];
//	char addr[1024];
//	printf("ԭ��Ϊ:>%s\n", contact->peoples[choice].name);
//	printf("��������ϵ�˵�����:>\n");
//	scanf("%s", name);
//	strcpy(contact->peoples[choice].name, name);
//	printf("ԭ�Ա�Ϊ:>%s\n", contact->peoples[choice].sex);
//	printf("��������ϵ�˵��Ա�:>\n");
//	scanf("%s", sex);
//	strcpy(contact->peoples[choice].sex, sex);
//	printf("ԭ����Ϊ:>%d\n", contact->peoples[choice].age);
//	printf("��������ϵ�˵�����:>\n");
//	scanf("%d", &age);
//	contact->peoples[choice].age = age;
//	printf("ԭ�绰Ϊ:>%s\n", contact->peoples[choice].phone);
//	printf("��������ϵ�˵ĵ绰:>\n");
//	scanf("%s", phone);
//	strcpy(contact->peoples[choice].phone, phone);
//	printf("ԭסַΪ:>%s\n", contact->peoples[choice].addr);
//	printf("��������ϵ�˵�סַ:>\n");
//	scanf("%s", addr);
//	strcpy(contact->peoples[choice].addr, addr);
//	printf("�޸ĳɹ�\n");
//}
//void FindContact(Contact* contact){
//	if (NULL == contact){
//		return;
//	}
//	int choice = 0;
//	printf("��ѡ������Ҫ�ҵ��û�:>\n");
//	while (1){
//		scanf("%d", &choice);
//		if (choice >= contact->size || choice < 0){
//			printf("ѡ������������ѡ������û�:>\n");
//			continue;
//		}
//		break;
//	}
//	printf("���\t\t����\t\t�Ա�\t\t����\t\t�绰\t\t��ַ\n");
//	printf("[%d]\t\t%s\t\t%s\t\t%d\t\t%s\t%s\n",
//		choice,
//		contact->peoples[choice].name,
//		contact->peoples[choice].sex,
//		contact->peoples[choice].age,
//		contact->peoples[choice].phone,
//		contact->peoples[choice].addr);
//}
//void DisplayContact(Contact* contact){
//	if (NULL == contact){
//		return;
//	}
//	if (0 == contact->size){
//		printf("ͨѶ¼Ϊ��\n");
//		return;
//	}
//	printf("���\t\t����\t\t�Ա�\t\t����\t\t�绰\t\t��ַ\n");
//	for (int i = 0; i < contact->size; i++){
//		printf("[%d]\t\t%s\t\t%s\t\t%d\t\t%s\t%s\n",
//			i,
//			contact->peoples[i].name,
//			contact->peoples[i].sex,
//			contact->peoples[i].age,
//			contact->peoples[i].phone,
//			contact->peoples[i].addr);
//	}
//}
//void ClearContact(Contact* contact){
//	if (NULL == contact){
//		return;
//	}
//	// ����û�����ͨѶ¼���Ƿ�����ϵ��
//	if (0 >= contact->size){
//		printf("ͨѶ¼�ѿգ��������\n");
//		return;
//	}
//	contact->size = 0;
//	// �˴�����Ҫ ��capacity����
//	contact->capacity = 20;
//}
//void changePeople(People* peo1, People* peo2){
//	People people = *peo1;
//	*peo1 = *peo2;
//	*peo2 = people;
//}
//void SortOfName(Contact* contact){
//	if (NULL == contact){
//		return;
//	}
//	if (0 == contact->size){
//		printf("ͨѶ¼Ϊ��\n");
//		return;
//	}
//	for (int i = 0; i < (contact->size - 1); i++){
//		for (int j = 0; j < (contact->size - i - 1); j++){
//			if (strcmp(contact->peoples[j + 1].name,
//				contact->peoples[j].name) < 0){
//				changePeople(&(contact->peoples[j + 1]), &(contact->peoples[j]));
//			}
//		}
//	}
//	printf("�������\n");
//}
//
//int main2s(){
//	Contact contact;
//	typedef void(*Func)(Contact* contact);
//	Func func[] = {
//		NULL,
//		AddContact,
//		DelContact,
//		ModifyContact,
//		FindContact,
//		DisplayContact,
//		ClearContact,
//		SortOfName
//	};
//	Init(&contact);
//	while (1){
//		int choice = menu();
//		if (choice > 0 && choice <= CHOICE){
//			func[choice](&contact);
//		}
//		else if (0 == choice){
//
//			printf("�˳�\n");
//			break;
//		}
//		else{
//			printf("��������������ѡ��\n");
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//// ֤���ṹ��֮������໥��ֵ
////int main(){
////	char buf[1024] = {0}; //������
////	int n = 0;
////	FILE* pf = fopen("G:\\lesson002\\Contact\\Contact/contact.txt", "r");
////	while ((n = fgetc(pf)) != EOF){
////		fputc(n,stdout);
////	}
////	fclose(pf);
////	//ʵ�ʶ����ĸ����Ȼ������٣���˵����ȡ�ļ����
////	//while (n =fread(buf,sizeof(char),sizeof(buf)-1,pf)){
////	//	if (n < sizeof(buf)){
////	//		fwrite(buf, sizeof(char), sizeof(buf) - 1, stdout);
////	//	}
////	//}
////
////	//People p = {"zhengh","��",21,"234546","qwerg"};
////	//People ppp = p;
////	////printf(" \t\t%s\t\t%s\t\t%d\t\t%s\t%s\n",
//// ////
////	////	ppp.name,
////	////	ppp.sex,
////	////	ppp.age,
////	////	ppp.phone,
////	////	ppp.addr);         
////	//printf("%d\n",strcmp("�з�","��"));
////	system("pause");
////	return 0;
////}