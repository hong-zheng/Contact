

//int main(){
//
//	//二进制文件就是按照一个字节一个字节的方式存储的
//	// 文本就是按照字符串的方式存储的
//	system("pause");
//	return 0;
//}


//int main(){

	//fseek 移动的光标
	//ftell 获取光标在那儿





	// 非常常用，和文件操作无关
	// sscanf  可以把一个字符串格式化解析
	// sprintf  可以格式化拼装一个字符串
	// s 前缀表示字符串
	//char* ptr = "100";
	//int num = 0;
	//sscanf(ptr,"%d",&num);
	//char buf[1024] = {0};
	//printf("%d\n",num);

	//// 数字转字符串
	//sprintf(buf,"%d",num);
	//printf("%s",buf);
//	system("pause");
//	return 0;
//}

//int main(){
//
//	FILE* pf = fopen("G:\\C\\ex/string.txt","r");
//	if (NULL == pf){
//		perror("文件打开失败\n");
//		system("pause");
//		return 0;
//	}
//	char buf[1024] = { 0 };
//	int n = 0;
//	while (n=fscanf(pf, "%s", buf)){ // 只能读连续的字符串
//		fprintf(stdout,"%s\n",buf);
//	}
//	fclose(pf);
//	//// 最常用的一对
//	//// fread 读取n个字节
//	//// fwrite 写入n个字节
//	//char buf[1024] = {0}; //缓冲区
//	//int n = 0;
//	////实际读到的个数比缓冲区少，就说明读取文件完毕
//	//while (n =fread(buf,sizeof(char),sizeof(buf)-1,pf)){
//	//	if (n < sizeof(buf)){
//	//		fwrite(buf, sizeof(char), sizeof(buf) - 1, stdout);
//	//	}
//	//}
//	fclose(pf);
//	system("pause");
//	return 0;
//}

// 编程语言对文件的操作
//打开文件fopen-->读/写文件-->关闭文件
//int main(){

	//FILE* fp = fopen("G:\\C\\ex/string.txt","r");
	//if (NULL == fp){
	//	perror("未找到文件\n");
	//	system("pause");
	//	return 0;
	//}
	//// 先整一个缓冲区
	//// 每一整一行的输出
	//// 最后-1是因为需要留出一个字符用以存'\0'
	//char buf[1024] = {0};
	//printf(fgets(buf, sizeof(buf) - 1, fp));
	//printf("==================================================");
	//while (fgets(buf,sizeof(buf)-1,fp) != NULL){
	//	fputs(buf,stdout);
	//}
	//fclose(fp);

	//FILE* fp = fopen("G:\\C\\ex/string.txt","r");
	//if (NULL == fp){
	//	perror("没找到文件\n");
	//	system("pause");
	//	return 0;
	//}
	//int c = 0;
	//while ((c = fgetc(fp)) != EOF){
	//	fputc(c,stdout);
	//}
	//fclose(fp);
	// 打开方式，"r"读打开 "w"写打开 "w+"文件不存在可以创建
	// FILE 是标库中的结构体
	// 打开文件失败，返回值为NULL，可以根据是否为NULL判断打开是否成功
	// fopen并没有读取文件，而是根据路径，找到一个磁盘文件
	// 然后在内存中创建一个结构体保存文件属性，用此描述文件相关信息
	// fp 文件指针，也可以叫"句柄"-->"遥控器"
		// 在该编译器中 可打开512个文件，509个可手动打开，其余三个分别是stdin、stdout、stderr是在打开VS时自动打开
	// 以防文件资源泄漏
	// strerror 将  错误码 翻译为 具体原因字符串
	// errno :定义错误标号 定义的一个宏，定义上一个出错的原因
	// 标准库代码中基本上都使用了errno 0表示没出错
	// 非零表示出错 不同的数字表示不同的错误

	//printf("%d\n", errno); // 0
	//FILE* fp = fopen("G:\\C\\ex/string.txt", "r");
	//FILE* pw = fopen("G:\\C\\ex/s.txt","a");
	//if (fp == NULL){
	//	// 打印原因
	//	//printf("打开文件失败 %s\n", strerror(errno));
	//	perror("打开文件失败！");
	//	system("pause");
	//	return 0;
	//}
	//// fgets fputs 读写一行
	//// 把文件中的数据一行一行存在buf缓冲区中，
	//// 其中至少留一个位置放'\0'
	//// 返回值为NULL表示读到了EOF
	//char buf[1024] = {0};
	//while (fgets(buf,sizeof(buf)-1,fp) != NULL){
	//	// 每一次都将缓冲区的内容输出到stdout
	//	fputs(buf,stdout);
	//}

	// n为一个字符此处
	//int n = 0;
 //   // 调用fgetc读取一个字符，将其放在n中
	//// EOF 是一个宏 表示文件结束，读到文件结束符，哈哈哈哈哈 end of file
	//// stdin ctrl+Z ==> EOF
	//while ((n = fgetc(stdin)) != EOF){
	//	// n 为需要写的内容，第二个参数表示写往何处
	//	fputc(n,stdout);
	//}
	//fclose(fp);
	
	
	// 文件关闭，释放遥控器
	// 打开的文件必须关闭，否则会造成文件资源泄漏
	//fclose(fp);
	// 计算机访问内存的速度快于访问外存
	//// 文件路径打开
	//FILE* fw = fopen("G:\\C\\ex/s.txt", "ra");
	//FILE* fp = fopen("G:\\C\\ex/string.txt","rw");
	//if (NULL == fp || NULL == fw){
	//	printf("0\n");
	//	perror("读取文件失败！");
	//	system("pause");
	//	return;
	//}
	//int c;
	//while ((c=fgetc(fp)) != EOF ){
	//	printf("1\n");
	//	fputc(c,fw);
	//}
	//fclose(fp);
	//fclose(fw);
	//printf("2\n");

	//printf("%d\n", ldd(36,15));
//
//	system("pause");
//	return 0;
//}

//// 精髓
//int ldd(int n,int m){
//	int r = 0;
//	while (m>0){
//		r = n%m;
//		n = m;
//		m = r;
//	}
//	return n;
//}


//int main(){
//
//	int i = 0;
//	int j = 0;
//	int m = 11 * i + 2;
//	int n = 12 + 26 * j;
//	int k = 0;
//	for (j = 0;;j++){
//		n = 12 + 26 * j;
//		for (i = 0; i < 26;i++){
//			m = 11 * i + 2;
//			if (m == n){
//				k = i;
//				break;
//			}
//		}
//		if (0 != k){
//			break;
//		}
//	}
//	printf("k=%d\n",k);
//	system("pause");
//	return 0;
//}
//
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
//	struct People* nextPeople;
//}People;
//typedef struct Contact{
//	People* head;
//	int size;
//}Contact;
//
//void Init(Contact* contact){
//	if (NULL == contact){
//		return;
//	}
//	People people = {0};
//	strcpy(people.name," ");
//	strcpy(people.sex," ");
//	people.age = 0;
//	strcpy(people.phone," ");
//	strcpy(people.addr," ");
//	people.nextPeople = NULL;
//	contact->head = &people;
//	contact->size = 0;
//}
//void AddContact(Contact* contact){
//	if ((NULL == contact) || (NULL == contact->head)){
//		return;
//	}
//	People* curPeo = contact->head;
//	// 3       0 1 2   
//	for (int i = 0; i < contact->size;i++){
//		curPeo = curPeo->nextPeople;
//	}
//	char name[1024];
//	char sex[1024];
//	int age;
//	char phone[1024];
//	char addr[1024];
//	printf("请输入添加联系人的姓名:>\n");
//	scanf("%s",name);
//	printf("请输入添加联系人的性别:>\n");
//	scanf("%s",sex);
//	printf("请输入添加联系人的年龄:>\n");
//	scanf("%d",&age);
//	printf("请输入添加联系人的电话:>\n");
//	scanf("%s",phone);
//	printf("请输入添加联系人的住址:>\n");
//	scanf("%s",addr);
//
//	strcpy(curPeo->name,name);
//	strcpy(curPeo->sex,sex);
//	curPeo->age=age;
//	strcpy(curPeo->phone, phone);
//	strcpy(curPeo->addr,addr);
//	curPeo = curPeo->nextPeople;
//	contact->size++;
//}
//void DelContact(Contact* contact){
//	if ((NULL == contact) || (NULL == contact->head)){
//		return;
//	}
//}
//void ModifyContact(Contact* contact){
//	if ((NULL == contact) || (NULL == contact->head)){
//		return;
//	}
//}
//void FindContact(Contact* contact){
//	if ((NULL == contact) || (NULL == contact->head)){
//		return;
//	}
//}
//void DisplayContact(Contact* contact){
//	if ((NULL == contact) || (NULL == contact->head)){
//		return;
//	}
//	People* curPeo = contact->head;
//	for (int i = 0; i < contact->size;i++){
//		curPeo = curPeo->nextPeople;
//		printf(" [%d] %5s %5s %5d %5s %5s\n", i, curPeo->name, curPeo->sex, curPeo->age, curPeo->phone, curPeo->addr);
//	}
//}
//void ClearContact(Contact* contact){
//	if ((NULL == contact) || (NULL == contact->head)){
//		return;
//	}
//}
//void SortOfName(Contact* contact){
//	if ((NULL == contact) || (NULL == contact->head)){
//		return;
//	}
//}
//
//int main(){
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
//		if (choice>0 && choice<=7){
//			func[choice](&contact);
//		}else if(0 == choice){
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
//// 测试
////int main(){
////
////
////	//printf("%d\n",strcmp("郑洪","郑洪"));
////	system("pause");
////	return 0;
////}