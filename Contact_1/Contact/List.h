

#ifndef LIST_H
#define LIST_H

// ���� capacity ��ʾ�ڴ�ռ�һ�����Դ����Ԫ��
// size ��ǰ�ж���Ԫ��

typedef struct DYNAMICARRAY{
	int* pAddr; // ������ݵĵ�ַ
	int size;
	int capacity;
}Dynamic_Array;

// ��������ʼ��
Dynamic_Array* Init_Array();
//����
void Push_Back_Array(Dynamic_Array* arr,int value);
//����λ��ɾ��
void RemoveByPos_Array(Dynamic_Array* arr,int pos);
//����ֵɾ��
void RemoveByValue_Array(Dynamic_Array* arr, int value);

//��ӡ
void print_Array(Dynamic_Array* arr);
// ����
int Find_Array(Dynamic_Array* arr,int value);
//�ͷŶ�̬������ڴ�
void FreeSpace_Array(Dynamic_Array* arr);

// �������
void Clear_Array(Dynamic_Array* arr);
//�����������
int Capacity_Array(Dynamic_Array* arr);
//��ö�̬���ݵ�ǰԪ�ظ���
int Size_Array(Dynamic_Array* arr);
// ����λ�û��ĳ��λ��Ԫ��
int At_Array(Dynamic_Array* arr,int pos);




#endif