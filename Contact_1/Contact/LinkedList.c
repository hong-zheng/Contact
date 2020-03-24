

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <windows.h>

#include "LinkedList.h"
// ��ʼ������
LinkList* Init_LinkList(){

	// ��������м򵥳�ʼ������������������������Ҫ������д���
	LinkList* list = (LinkList*)malloc(sizeof(LinkList));
	
	list->sz = 0;
	list->head = (LinkNode*)malloc(sizeof(LinkNode));

	list->head->data = NULL;
	list->head->next = NULL;

	return list;
}

// ָ��λ�ò���
void Insert_LinkList(LinkList* list, int pos, void* data){

	// �����жϲ����Ƿ���ȷ��Ч
	if (list == NULL){
		return;
	}
	if (data == NULL){
		return;
	}

	// posԽ�紦��
	if (pos < 0 || pos > list->sz){
		pos = list->sz;
	}

	// �����µĽ��
	LinkNode* newnode = (LinkNode*)malloc(sizeof(LinkNode));
	newnode->data = data;
	newnode->next = NULL;
	

	// �ҽ���ǰһ�����
	// ����ָ�����

	LinkNode* pCurrent = list->head;
	for (int i = 0; i < pos;i++){
		// ѭ��һֱ����һ�����
		pCurrent = pCurrent->next;
	}
	
	// �½��������
	newnode->next = pCurrent->next;
	pCurrent->next = newnode;
}

// ɾ��ָ����ֵ
// pCrruent->next = pNext->next;
// free(pNext);
void RemoveByPos_LinkList(LinkList* list, int pos){
	if (list == NULL){
		return;
	}
	if (pos < 0 || pos>=list->sz){
		return;
	}

	// ����ɾ������ǰһ������
	LinkNode* pCurrent = list->head;
	for (int i = 0; i < pos;i++){
		pCurrent = pCurrent->next;
	}

	// ����ɾ���Ľ��
	LinkNode* pDel=pCurrent->next;
	pCurrent->next = pDel->next;
	free(pDel );
	list->sz--;
}

// �������ĳ���
int Size_LinkList(LinkList* list){

}

// ���ص�һ�����
void* Front_LinkList(LinkList* list){
	return NULL;
}

// �ͷ������ڴ�
void Free_LinkList(LinkList* list){

}

// ����
int Find_LinkList(LinkList* list, void* data){
	return 0;
}

// ��ӡ����ڵ�,
void print_LinkList(LinkList* list, PRINTLINKNODE pfun){
	
}
