

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// 链表结点
typedef struct LINKENODE{
	void* data; // 可以指向任何类型的数据
	struct LINKEDNODE* next;
}LinkNode;

// 链表结构体
typedef struct LINKLIST{
	LinkNode* head;
	int sz;
}LinkList;

typedef void(*PRINTLINKNODE)(void*);

// 初始化链表
LinkList* Init_LinkList();

// 指定位置插入
void Insert_LinkList(LinkList* list,int pos,void* data);

// 删除指定的值
void RemoveByPos_LinkList(LinkList* list,int pos);

// 获得链表的长度
int Size_LinkList(LinkList* list);

// 返回第一个结点
void* Front_LinkList(LinkList* list);

// 释放链表内存
void Free_LinkList(LinkList* list);

// 查找
int Find_LinkList(LinkList* list,void* data);

// 打印链表节点,
void print_LinkList(LinkList* list, PRINTLINKNODE pfun);
#endif