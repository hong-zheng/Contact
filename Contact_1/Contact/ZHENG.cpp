

// 堆内存，随时申请内存
// 栈，只能固定使用，速度快

// 析构函数，对象过期时自动调用的特殊成员函数
// 析构函数一般用来完成清理工作（在栈里）
// delete 实例;
// 释放内存与申请时相反
// 在栈内存中使用不必管理内存



//#include<iostream>
//using namespace std;
//
//class Student{
//private:
//	int id;
//	char name[1024];
//	int age;
//public:
//	Student(){};
//	~Student(){};
//	void setId(int id){
//		id = id;
//	}
//	void setName(string name){
//		name = name;
//	}
//	void setAge(int age){
//		age = age;
//	}
//	int getId(){
//		return id;
//	}
//	string getName(){
//		return name;
//	}
//	int getAge(){
//		return age;
//	}
//	void printf_info(){
//		cout << "我是" <<",我的学号是:" << getId() << ",我" << getAge() << "岁" << endl;
//	}
//
//};
//int main(void){
//
//	Student s;
//	s.setName("郑洪");
//	s.setId(1223);
//	s.setAge(21);
//	s.printf_info();
//	system("pause");
//	return 0;
//}
