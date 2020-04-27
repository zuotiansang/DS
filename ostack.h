#pragma once
#include "order.h"
typedef OrderSqList HeapType;

void HeapAdjust(HeapType& H, int s, int m);

void HeapSort(HeapType& H);