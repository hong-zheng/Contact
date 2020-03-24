//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#include<errno.h>
//#define VAR 20
//#define CHOICE 7
//#define MAX 1000
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
//	scanf("%d",&choice);
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
//		memcpy(contact->peoples,peoples,sizeof(People)*contact->size);
//		free(peoples);
//		peoples = NULL;
//	}
//	char name[1024];
//	char sex[1024];
//	int age;
//	char phone[1024];
//	char addr[1024];
//	printf("�����������ϵ�˵�����:>\n");
//	scanf("%s",name);
//	strcpy(contact->peoples[contact->size].name,name);
//	printf("�����������ϵ�˵��Ա�:>\n");
//	scanf("%s",sex);
//	strcpy(contact->peoples[contact->size].sex,sex);
//	printf("�����������ϵ�˵�����:>\n");
//	scanf("%d",&age);
//	contact->peoples[contact->size].age = age;
//	printf("�����������ϵ�˵ĵ绰:>\n");
//	scanf("%s",phone);
//	strcpy(contact->peoples[contact->size].phone,phone);
//	printf("�����������ϵ�˵�סַ:>\n");
//	scanf("%s",addr);
//	strcpy(contact->peoples[contact->size].addr,addr);
//	contact->size++;
//	printf("��ӳɹ�\n");
//}
//void DelContact(Contact* contact){
//	if ( NULL == contact ){
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
//	contact->peoples[choice] = contact->peoples[contact->size-1];
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
//		scanf("%d",&choice);
//		if ( choice >= contact->size || choice<0){
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
//	printf("ԭ��Ϊ:>%s\n",contact->peoples[choice].name);
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
//	if ( 0 == contact->size){
//		printf("ͨѶ¼Ϊ��\n");
//		return;
//	}
//	printf("���\t\t����\t\t�Ա�\t\t����\t\t�绰\t\t��ַ\n");
//	for (int i = 0; i < contact->size;i++){
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
//void changePeople(People* peo1,People* peo2){
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
//			if (strcmp(contact->peoples[j+1].name,
//				contact->peoples[j].name) < 0){
//				changePeople(&(contact->peoples[j + 1]), &(contact->peoples[j]));
//			}
//		}
//	}
//	printf("�������\n");
//}
//
//int main(){
//	Contact contact;
//	typedef void (*Func)(Contact* contact);
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
//		}else if (0 == choice){
//			
//			printf("�˳�\n");
//			break;
//		}else{
//			printf("��������������ѡ��\n");
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//// ֤���ṹ��֮������໥��ֵ
////int main(){
////	People p = {"zhengh","��",21,"234546","qwerg"};
////	People ppp = p;
////	//printf(" \t\t%s\t\t%s\t\t%d\t\t%s\t%s\n",
//// //
////	//	ppp.name,
////	//	ppp.sex,
////	//	ppp.age,
////	//	ppp.phone,
////	//	ppp.addr);         
////	printf("%d\n",strcmp("�з�","��"));
////	system("pause");
////	return 0;
////}