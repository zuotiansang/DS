#pragma once

#define OrderMAXSIZE 20
typedef int OrderKeyType;
typedef char OrderInfoType;

typedef struct {
	OrderKeyType key;
	OrderInfoType info;
}OrderRedType;

typedef struct {
	OrderRedType r[OrderMAXSIZE];
	int length;
}OrderSqList;

int Partition(OrderSqList& L, int low, int high);
void QSort(OrderSqList& L, int low, int high);
void QuickSort(OrderSqList& L);