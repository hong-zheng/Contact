#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main(){


	system("pause");
	return 0;
}
// 工作区-->暂存区-->仓库区
// git status // 看情况  
//git add hello.c
// git status
// git commit -m "提交描述"
// git status
// git push

// 先clone 将远程项目放在本地
// https://github.com/hong-zheng/tic-tac-toe.git 
// 复制ctrl + insert
// Linux 上的粘贴shift+insert


//#define VAR 20
//#define CHOICE 7
//#define MAX 1000
//
////  "We are happy"
////  "We%20are%20happy"
////  strcat
//// 字符串后移,且在前面添加 %20
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
//	scanf("%d", &choice);
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
//		memcpy(contact->peoples, peoples, sizeof(People)*contact->size);
//		free(peoples);
//		peoples = NULL;
//	}
//	char name[1024];
//	char sex[1024];
//	int age;
//	char phone[1024];
//	char addr[1024];
//	printf("请输入添加联系人的姓名:>\n");
//	scanf("%s", name);
//	strcpy(contact->peoples[contact->size].name, name);
//	printf("请输入添加联系人的性别:>\n");
//	scanf("%s", sex);
//	strcpy(contact->peoples[contact->size].sex, sex);
//	printf("请输入添加联系人的年龄:>\n");
//	scanf("%d", &age);
//	contact->peoples[contact->size].age = age;
//	printf("请输入添加联系人的电话:>\n");
//	scanf("%s", phone);
//	strcpy(contact->peoples[contact->size].phone, phone);
//	printf("请输入添加联系人的住址:>\n");
//	scanf("%s", addr);
//	strcpy(contact->peoples[contact->size].addr, addr);
//	FILE* pf = fopen("G:\\lesson002\\Contact\\Contact/contact.txt","w+");
//	//size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)
//	//ptr -- 这是指向要被写入的元素数组的指针。
//	//size -- 这是要被写入的每个元素的大小，以字节为单位。
//	//nmemb -- 这是元素的个数，每个元素的大小为 size 字节。
//	//stream -- 这是指向 FILE 对象的指针，该 FILE 对象指定了一个输出流。
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
//	printf("添加成功\n");
//}
//void DelContact(Contact* contact){
//	if (NULL == contact){
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
//	contact->peoples[choice] = contact->peoples[contact->size - 1];
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
//		scanf("%d", &choice);
//		if (choice >= contact->size || choice<0){
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
//	printf("原名为:>%s\n", contact->peoples[choice].name);
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
//	if (0 == contact->size){
//		printf("通讯录为空\n");
//		return;
//	}
//	printf("序号\t\t姓名\t\t性别\t\t年龄\t\t电话\t\t地址\n");
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
//	// 清除用户根据通讯录中是否有联系人
//	if (0 >= contact->size){
//		printf("通讯录已空，无需清除\n");
//		return;
//	}
//	contact->size = 0;
//	// 此处不需要 将capacity清零
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
//		printf("通讯录为空\n");
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
//	printf("排序完成\n");
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
//			printf("退出\n");
//			break;
//		}
//		else{
//			printf("输入有误，请重新选择！\n");
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//// 证明结构体之间可以相互赋值
////int main(){
////	char buf[1024] = {0}; //缓冲区
////	int n = 0;
////	FILE* pf = fopen("G:\\lesson002\\Contact\\Contact/contact.txt", "r");
////	while ((n = fgetc(pf)) != EOF){
////		fputc(n,stdout);
////	}
////	fclose(pf);
////	//实际读到的个数比缓冲区少，就说明读取文件完毕
////	//while (n =fread(buf,sizeof(char),sizeof(buf)-1,pf)){
////	//	if (n < sizeof(buf)){
////	//		fwrite(buf, sizeof(char), sizeof(buf) - 1, stdout);
////	//	}
////	//}
////
////	//People p = {"zhengh","男",21,"234546","qwerg"};
////	//People ppp = p;
////	////printf(" \t\t%s\t\t%s\t\t%d\t\t%s\t%s\n",
//// ////
////	////	ppp.name,
////	////	ppp.sex,
////	////	ppp.age,
////	////	ppp.phone,
////	////	ppp.addr);         
////	//printf("%d\n",strcmp("中方","瑞芳"));
////	system("pause");
////	return 0;
////}