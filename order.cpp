#include "order.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int Partition(OrderSqList& L, int low, int high)
{
	OrderKeyType pivotkey;
	L.r[0] = L.r[low];
	
	pivotkey = L.r[0].key;

	while (low < high)
	{
		while (low < high && L.r[high].key >= pivotkey)
			high--;
		L.r[low] = L.r[high];
		while (low < high && L.r[low].key <= pivotkey)
			low++;
		L.r[high] = L.r[low];
	}

	L.r[low] = L.r[0];
	return low;
}

void QSort(OrderSqList& L, int low, int high)
{
	OrderKeyType pivotloc;
	if (low < high)
	{
		pivotloc = Partition(L, low, high);
		QSort(L, low, pivotloc - 1);
		QSort(L, pivotloc + 1, high);
	}
}

void QuickSort(OrderSqList& L)
{
	QSort(L, 1, L.length);
}