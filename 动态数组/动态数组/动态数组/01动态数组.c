#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#include"DynamicArray.h"


void test01() {
	Dynamic_Array* myArray = Init_Array();

	//打印容量
	printf("数组容量:%d\n",Capacity_Array(myArray));
	printf("数组容量:%d\n", Size_Array(myArray));
	//插入元素
	for (int i =0;i<30;i++) {
		PushBack_Array(myArray,i);
	}
	//打印
	Print_Array(myArray);
	printf("数组容量:%d\n", Capacity_Array(myArray));
	printf("数组容量:%d\n", Size_Array(myArray));
	//销毁
	FreeSpace_Array(myArray);
}

int main(void) {

	test01();
	system("pause");
	return 0;
}