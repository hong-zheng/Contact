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
//	printf("******** 0、exit       ********\n");
//	printf("******** 1、Add        ********\n");
//	printf("******** 2、Del        ********\n");
//	printf("******** 3、Modify     ********\n");
//	printf("******** 4、Find       ********\n");
//	printf("******** 5、Display    ********\n");
//	printf("******** 6、Clear      ********\n");
//	printf("******** 7、SortOfName ********\n");
//	printf("*******************************\n");
//	printf("根据菜单做出你的选择:>\n");
//	int choice = 0;
//	scanf("%d",&choice);
//	return choice;
//}
//// 个人信息用一个结构体来存储
//typedef struct People{
//	char name[1024];
//	char sex[1024];
//	int age;
//	char phone[1024];
//	char addr[1024];
//}People;
//typedef struct Contact{
//	People* peoples;
//	int size; // size 记录当前通讯录 中有多少联系人
//	int capacity; // 记录当前通讯录可容纳多少联系人
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
//		printf("通讯录已满！\n");
//		return;
//	}
//	if (contact->size >= contact->capacity){
//		contact->capacity += VAR;
//		People* peoples = contact->peoples;
//		contact->peoples = (People*)malloc(sizeof(People)*contact->capacity);
//		// 结构体之间相互赋值
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
//	printf("请输入添加联系人的姓名:>\n");
//	scanf("%s",name);
//	strcpy(contact->peoples[contact->size].name,name);
//	printf("请输入添加联系人的性别:>\n");
//	scanf("%s",sex);
//	strcpy(contact->peoples[contact->size].sex,sex);
//	printf("请输入添加联系人的年龄:>\n");
//	scanf("%d",&age);
//	contact->peoples[contact->size].age = age;
//	printf("请输入添加联系人的电话:>\n");
//	scanf("%s",phone);
//	strcpy(contact->peoples[contact->size].phone,phone);
//	printf("请输入添加联系人的住址:>\n");
//	scanf("%s",addr);
//	strcpy(contact->peoples[contact->size].addr,addr);
//	contact->size++;
//	printf("添加成功\n");
//}
//void DelContact(Contact* contact){
//	if ( NULL == contact ){
//		return;
//	}
//	// 根据前面的序号来删除用户,同时需要保证需要删除的额用户在联系人范围之内
//
//	int choice = 0;
//	printf("请选择你所要删除的用户:>\n");
//	while (1){
//		scanf("%d", &choice);
//		if (choice >= contact->size || choice < 0){
//			printf("选择有误，请重新选择删除用户:>\n");
//			continue;
//		}
//		break;
//	}
//	contact->peoples[choice] = contact->peoples[contact->size-1];
//	contact->size--;
//	printf("删除成功\n");
//}
//void ModifyContact(Contact* contact){
//	if (NULL == contact){
//		return;
//	}
//	if (0 == contact->size){
//		printf("通讯录为空\n");
//		return;
//	}
//	int choice = 0;
//	printf("请选择需要修改人序号:>\n");
//	while (1){
//		scanf("%d",&choice);
//		if ( choice >= contact->size || choice<0){
//			printf("请重新选择:>\n");
//			continue;
//		}
//		break;
//	}
//	char name[1024];
//	char sex[1024];
//	int age;
//	char phone[1024];
//	char addr[1024];
//	printf("原名为:>%s\n",contact->peoples[choice].name);
//	printf("请输入联系人的姓名:>\n");
//	scanf("%s", name);
//	strcpy(contact->peoples[choice].name, name);
//	printf("原性别为:>%s\n", contact->peoples[choice].sex);
//	printf("请输入联系人的性别:>\n");
//	scanf("%s", sex);
//	strcpy(contact->peoples[choice].sex, sex);
//	printf("原年龄为:>%d\n", contact->peoples[choice].age);
//	printf("请输入联系人的年龄:>\n");
//	scanf("%d", &age);
//	contact->peoples[choice].age = age;
//	printf("原电话为:>%s\n", contact->peoples[choice].phone);
//	printf("请输入联系人的电话:>\n");
//	scanf("%s", phone);
//	strcpy(contact->peoples[choice].phone, phone);
//	printf("原住址为:>%s\n", contact->peoples[choice].addr);
//	printf("请输入联系人的住址:>\n");
//	scanf("%s", addr);
//	strcpy(contact->peoples[choice].addr, addr);
//	printf("修改成功\n");
//}
//void FindContact(Contact* contact){
//	if (NULL == contact){
//		return;
//	}
//	int choice = 0;
//	printf("请选择你所要找的用户:>\n");
//	while (1){
//		scanf("%d", &choice);
//		if (choice >= contact->size || choice < 0){
//			printf("选择有误，请重新选择需查用户:>\n");
//			continue;
//		}
//		break;
//	}
//	printf("序号\t\t姓名\t\t性别\t\t年龄\t\t电话\t\t地址\n");
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
//		printf("通讯录为空\n");
//		return;
//	}
//	printf("序号\t\t姓名\t\t性别\t\t年龄\t\t电话\t\t地址\n");
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
//	// 清除用户根据通讯录中是否有联系人
//	if (0 >= contact->size){
//		printf("通讯录已空，无需清除\n");
//		return;
//	}
//	contact->size = 0;
//	// 此处不需要 将capacity清零
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
//		printf("通讯录为空\n");
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
//	printf("排序完成\n");
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
//			printf("退出\n");
//			break;
//		}else{
//			printf("输入有误，请重新选择！\n");
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//// 证明结构体之间可以相互赋值
////int main(){
////	People p = {"zhengh","男",21,"234546","qwerg"};
////	People ppp = p;
////	//printf(" \t\t%s\t\t%s\t\t%d\t\t%s\t%s\n",
//// //
////	//	ppp.name,
////	//	ppp.sex,
////	//	ppp.age,
////	//	ppp.phone,
////	//	ppp.addr);         
////	printf("%d\n",strcmp("中方","瑞芳"));
////	system("pause");
////	return 0;
////}