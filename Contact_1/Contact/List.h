

#ifndef LIST_H
#define LIST_H

// 容量 capacity 表示内存空间一共可以存多少元素
// size 当前有多少元素

typedef struct DYNAMICARRAY{
	int* pAddr; // 存放数据的地址
	int size;
	int capacity;
}Dynamic_Array;

// 创建，初始化
Dynamic_Array* Init_Array();
//插入
void Push_Back_Array(Dynamic_Array* arr,int value);
//根据位置删除
void RemoveByPos_Array(Dynamic_Array* arr,int pos);
//根据值删除
void RemoveByValue_Array(Dynamic_Array* arr, int value);

//打印
void print_Array(Dynamic_Array* arr);
// 查找
int Find_Array(Dynamic_Array* arr,int value);
//释放动态数组的内存
void FreeSpace_Array(Dynamic_Array* arr);

// 清空数组
void Clear_Array(Dynamic_Array* arr);
//获得数组容量
int Capacity_Array(Dynamic_Array* arr);
//获得动态数据当前元素个数
int Size_Array(Dynamic_Array* arr);
// 根据位置获得某个位置元素
int At_Array(Dynamic_Array* arr,int pos);




#endif