
#include<stdio.h>
#include<stdlib.h>
#include "List.h"

// ��������ʼ��
Dynamic_Array* Init_Array(){
	//�����ڴ�
	Dynamic_Array* myArray = (Dynamic_Array*)malloc(sizeof(Dynamic_Array));
	//��ʼ��
	myArray->size = 0;
	myArray->capacity = 20;
	myArray->pAddr = (int*)malloc(myArray->capacity*sizeof(int));
	return myArray;
}

//����
void Push_Back_Array(Dynamic_Array* arr, int value){
	if (arr == NULL){
		return;
	}

	// �жϿռ��Ƿ��㹻
	if ( arr->size == arr->capacity){
		// ��ʱ����
		// ��һ�� ����һ�������ڴ�ռ� �¿ռ��Ǿɿռ��2��
		int* newSpace = (int*)malloc(sizeof(int)*arr->capacity*2);
		// �ڶ��� �������ݵ��µĿռ�
		memcpy(newSpace,arr->pAddr,arr->capacity*sizeof(int));
		//�ͷžɿռ���ڴ�
		free(arr->pAddr);

		//��������
		arr->capacity = arr->capacity * 2;
		arr->pAddr = newSpace;
	}
	//������Ԫ��
	arr->pAddr[arr->size] = value;
	arr->size++;
}
//����λ��ɾ��
void RemoveByPos_Array(Dynamic_Array* arr, int pos){
	if (arr == NULL){
		return;
	}
	
	// �ж�λ���Ƿ���Ч
	if (pos<0 || pos >= arr->size){
		return;
	}

	// ɾ��Ԫ��
	int i = 0;
	for (i = pos; i < arr->size-1;i++){
		arr->pAddr[i] = arr->pAddr[i + 1];
	}
	arr->size--;
}
//����ֵɾ��,ɾ��value��һ�γ��ֵ�λ��
void RemoveByValue_Array(Dynamic_Array* arr, int value){
	if (arr == NULL){
		return;
	}
	// �ҵ�ֵ��λ��
	// int pos =Find_Array(arr,value);
	int pos = -1;
	int i = 0;
	for (i = 0; i < arr->size;i++){
		if (arr->pAddr[i] == value){
			pos = i;
			break;
		}
	}
	// ����λ��ɾ��
	RemoveByPos_Array(arr,pos);
}

//��ӡ
void print_Array(Dynamic_Array* arr){
	if (arr == NULL){
		return;
	}
	for (int i = 0; i < arr->size;i++){
		printf("%d ",arr->pAddr[i]);
	}
}
// ����
int Find_Array(Dynamic_Array* arr, int value){
	if (arr == NULL){
		return;
	}
	//����
	// �ҵ�ֵ���ڵ�λ��
	int pos = -1,i=0;
	for (i = 0; i < arr->size; i++){
		if (arr->pAddr[i] == value){
			pos = i;
			break;
		}
	}
	return pos;
}
//�ͷŶ�̬������ڴ�
void FreeSpace_Array(Dynamic_Array* arr){
	if (arr == NULL){
		return;
	}
	if (arr->pAddr != NULL){
		free(arr->pAddr);
	}
	free(arr);
}

// �������
void Clear_Array(Dynamic_Array* arr){
	if (arr == NULL){
		return;
	}
	//pAddr -> �ռ�
	arr->size = 0;
}
//�����������
int Capacity_Array(Dynamic_Array* arr){
	if (arr == NULL){
		return;
	}
	return arr->capacity;
}
//��ö�̬���ݵ�ǰԪ�ظ���
int Size_Array(Dynamic_Array* arr){
	if (arr == NULL){
		return;
	}
	return arr->size;
}
// ����λ�û��ĳ��λ��Ԫ��
int At_Array(Dynamic_Array* arr, int pos){
	if (arr == NULL){
		return -1;
	}
	return arr->pAddr[pos];
}