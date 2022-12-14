#pragma once
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct DYNAMICARRAY{
	int* pAddr; //存放数据的地址
	int size; //存放数组中元素个数
	int capacity;//容量
}Dynamic_Array;

Dynamic_Array* Init_Array();
//插入
void PushBack_Array(Dynamic_Array* arr,int value);
//删除
void RemoveByPos_Array(Dynamic_Array* arr,int pos);
void RemoveByValue_Array(Dynamic_Array* arr, int value);
//查找
int Find_Array(Dynamic_Array* arr,int value);
//打印
void Print_Array(Dynamic_Array* arr);
//释放动态数组的内存
void FreeSpace_Array(Dynamic_Array* arr);

//清空数组
void Clear_Array(Dynamic_Array* arr);
//获得动态数组容量
int Capacity_Array(Dynamic_Array* arr);
//获得动态数组当前元素个数
int Size_Array(Dynamic_Array* arr);
//根据位置获得某个位置元素
int At_Array(Dynamic_Array* arr,int pos);

