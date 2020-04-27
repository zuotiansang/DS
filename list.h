#pragma once
#include <stdio.h>
#include "c.h"
#include <malloc.h>
#include <stdlib.h>
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10


typedef struct {
	ElemType* elem;
	int length;
	int listsize;
}SqList;

Status InitList_Sq(SqList& L);
Status ListInsert_Sq(SqList &L, int i, ElemType e);
Status GetElm(SqList L, int i, ElemType& e);
Status ListDelete_Sq(SqList& L, int i, ElemType& e);