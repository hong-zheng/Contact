

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// ������
typedef struct LINKENODE{
	void* data; // ����ָ���κ����͵�����
	struct LINKEDNODE* next;
}LinkNode;

// ����ṹ��
typedef struct LINKLIST{
	LinkNode* head;
	int sz;
}LinkList;

typedef void(*PRINTLINKNODE)(void*);

// ��ʼ������
LinkList* Init_LinkList();

// ָ��λ�ò���
void Insert_LinkList(LinkList* list,int pos,void* data);

// ɾ��ָ����ֵ
void RemoveByPos_LinkList(LinkList* list,int pos);

// �������ĳ���
int Size_LinkList(LinkList* list);

// ���ص�һ�����
void* Front_LinkList(LinkList* list);

// �ͷ������ڴ�
void Free_LinkList(LinkList* list);

// ����
int Find_LinkList(LinkList* list,void* data);

// ��ӡ����ڵ�,
void print_LinkList(LinkList* list, PRINTLINKNODE pfun);
#endif