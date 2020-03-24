

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <windows.h>

#include "LinkedList.h"
// 初始化链表
LinkList* Init_LinkList(){

	// 对链表进行简单初始化，其中有两个变量，都需要对其进行处理
	LinkList* list = (LinkList*)malloc(sizeof(LinkList));
	
	list->sz = 0;
	list->head = (LinkNode*)malloc(sizeof(LinkNode));

	list->head->data = NULL;
	list->head->next = NULL;

	return list;
}

// 指定位置插入
void Insert_LinkList(LinkList* list, int pos, void* data){

	// 首先判断参数是否正确有效
	if (list == NULL){
		return;
	}
	if (data == NULL){
		return;
	}

	// pos越界处理
	if (pos < 0 || pos > list->sz){
		pos = list->sz;
	}

	// 创建新的结点
	LinkNode* newnode = (LinkNode*)malloc(sizeof(LinkNode));
	newnode->data = data;
	newnode->next = NULL;
	

	// 找结点的前一个结点
	// 辅助指针变量

	LinkNode* pCurrent = list->head;
	for (int i = 0; i < pos;i++){
		// 循环一直到另一个结点
		pCurrent = pCurrent->next;
	}
	
	// 新结点入链表
	newnode->next = pCurrent->next;
	pCurrent->next = newnode;
}

// 删除指定的值
// pCrruent->next = pNext->next;
// free(pNext);
void RemoveByPos_LinkList(LinkList* list, int pos){
	if (list == NULL){
		return;
	}
	if (pos < 0 || pos>=list->sz){
		return;
	}

	// 查找删除结点的前一个变量
	LinkNode* pCurrent = list->head;
	for (int i = 0; i < pos;i++){
		pCurrent = pCurrent->next;
	}

	// 缓存删除的结点
	LinkNode* pDel=pCurrent->next;
	pCurrent->next = pDel->next;
	free(pDel );
	list->sz--;
}

// 获得链表的长度
int Size_LinkList(LinkList* list){

}

// 返回第一个结点
void* Front_LinkList(LinkList* list){
	return NULL;
}

// 释放链表内存
void Free_LinkList(LinkList* list){

}

// 查找
int Find_LinkList(LinkList* list, void* data){
	return 0;
}

// 打印链表节点,
void print_LinkList(LinkList* list, PRINTLINKNODE pfun){
	
}
