

//int main(){
//
//	//�������ļ����ǰ���һ���ֽ�һ���ֽڵķ�ʽ�洢��
//	// �ı����ǰ����ַ����ķ�ʽ�洢��
//	system("pause");
//	return 0;
//}


//int main(){

	//fseek �ƶ��Ĺ��
	//ftell ��ȡ������Ƕ�





	// �ǳ����ã����ļ������޹�
	// sscanf  ���԰�һ���ַ�����ʽ������
	// sprintf  ���Ը�ʽ��ƴװһ���ַ���
	// s ǰ׺��ʾ�ַ���
	//char* ptr = "100";
	//int num = 0;
	//sscanf(ptr,"%d",&num);
	//char buf[1024] = {0};
	//printf("%d\n",num);

	//// ����ת�ַ���
	//sprintf(buf,"%d",num);
	//printf("%s",buf);
//	system("pause");
//	return 0;
//}

//int main(){
//
//	FILE* pf = fopen("G:\\C\\ex/string.txt","r");
//	if (NULL == pf){
//		perror("�ļ���ʧ��\n");
//		system("pause");
//		return 0;
//	}
//	char buf[1024] = { 0 };
//	int n = 0;
//	while (n=fscanf(pf, "%s", buf)){ // ֻ�ܶ��������ַ���
//		fprintf(stdout,"%s\n",buf);
//	}
//	fclose(pf);
//	//// ��õ�һ��
//	//// fread ��ȡn���ֽ�
//	//// fwrite д��n���ֽ�
//	//char buf[1024] = {0}; //������
//	//int n = 0;
//	////ʵ�ʶ����ĸ����Ȼ������٣���˵����ȡ�ļ����
//	//while (n =fread(buf,sizeof(char),sizeof(buf)-1,pf)){
//	//	if (n < sizeof(buf)){
//	//		fwrite(buf, sizeof(char), sizeof(buf) - 1, stdout);
//	//	}
//	//}
//	fclose(pf);
//	system("pause");
//	return 0;
//}

// ������Զ��ļ��Ĳ���
//���ļ�fopen-->��/д�ļ�-->�ر��ļ�
//int main(){

	//FILE* fp = fopen("G:\\C\\ex/string.txt","r");
	//if (NULL == fp){
	//	perror("δ�ҵ��ļ�\n");
	//	system("pause");
	//	return 0;
	//}
	//// ����һ��������
	//// ÿһ��һ�е����
	//// ���-1����Ϊ��Ҫ����һ���ַ����Դ�'\0'
	//char buf[1024] = {0};
	//printf(fgets(buf, sizeof(buf) - 1, fp));
	//printf("==================================================");
	//while (fgets(buf,sizeof(buf)-1,fp) != NULL){
	//	fputs(buf,stdout);
	//}
	//fclose(fp);

	//FILE* fp = fopen("G:\\C\\ex/string.txt","r");
	//if (NULL == fp){
	//	perror("û�ҵ��ļ�\n");
	//	system("pause");
	//	return 0;
	//}
	//int c = 0;
	//while ((c = fgetc(fp)) != EOF){
	//	fputc(c,stdout);
	//}
	//fclose(fp);
	// �򿪷�ʽ��"r"���� "w"д�� "w+"�ļ������ڿ��Դ���
	// FILE �Ǳ���еĽṹ��
	// ���ļ�ʧ�ܣ�����ֵΪNULL�����Ը����Ƿ�ΪNULL�жϴ��Ƿ�ɹ�
	// fopen��û�ж�ȡ�ļ������Ǹ���·�����ҵ�һ�������ļ�
	// Ȼ�����ڴ��д���һ���ṹ�屣���ļ����ԣ��ô������ļ������Ϣ
	// fp �ļ�ָ�룬Ҳ���Խ�"���"-->"ң����"
		// �ڸñ������� �ɴ�512���ļ���509�����ֶ��򿪣����������ֱ���stdin��stdout��stderr���ڴ�VSʱ�Զ���
	// �Է��ļ���Դй©
	// strerror ��  ������ ����Ϊ ����ԭ���ַ���
	// errno :��������� �����һ���꣬������һ�������ԭ��
	// ��׼������л����϶�ʹ����errno 0��ʾû����
	// �����ʾ���� ��ͬ�����ֱ�ʾ��ͬ�Ĵ���

	//printf("%d\n", errno); // 0
	//FILE* fp = fopen("G:\\C\\ex/string.txt", "r");
	//FILE* pw = fopen("G:\\C\\ex/s.txt","a");
	//if (fp == NULL){
	//	// ��ӡԭ��
	//	//printf("���ļ�ʧ�� %s\n", strerror(errno));
	//	perror("���ļ�ʧ�ܣ�");
	//	system("pause");
	//	return 0;
	//}
	//// fgets fputs ��дһ��
	//// ���ļ��е�����һ��һ�д���buf�������У�
	//// ����������һ��λ�÷�'\0'
	//// ����ֵΪNULL��ʾ������EOF
	//char buf[1024] = {0};
	//while (fgets(buf,sizeof(buf)-1,fp) != NULL){
	//	// ÿһ�ζ��������������������stdout
	//	fputs(buf,stdout);
	//}

	// nΪһ���ַ��˴�
	//int n = 0;
 //   // ����fgetc��ȡһ���ַ����������n��
	//// EOF ��һ���� ��ʾ�ļ������������ļ������������������� end of file
	//// stdin ctrl+Z ==> EOF
	//while ((n = fgetc(stdin)) != EOF){
	//	// n Ϊ��Ҫд�����ݣ��ڶ���������ʾд���δ�
	//	fputc(n,stdout);
	//}
	//fclose(fp);
	
	
	// �ļ��رգ��ͷ�ң����
	// �򿪵��ļ�����رգ����������ļ���Դй©
	//fclose(fp);
	// ����������ڴ���ٶȿ��ڷ������
	//// �ļ�·����
	//FILE* fw = fopen("G:\\C\\ex/s.txt", "ra");
	//FILE* fp = fopen("G:\\C\\ex/string.txt","rw");
	//if (NULL == fp || NULL == fw){
	//	printf("0\n");
	//	perror("��ȡ�ļ�ʧ�ܣ�");
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

//// ����
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
//	printf("�����������ϵ�˵�����:>\n");
//	scanf("%s",name);
//	printf("�����������ϵ�˵��Ա�:>\n");
//	scanf("%s",sex);
//	printf("�����������ϵ�˵�����:>\n");
//	scanf("%d",&age);
//	printf("�����������ϵ�˵ĵ绰:>\n");
//	scanf("%s",phone);
//	printf("�����������ϵ�˵�סַ:>\n");
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
//// ����
////int main(){
////
////
////	//printf("%d\n",strcmp("֣��","֣��"));
////	system("pause");
////	return 0;
////}