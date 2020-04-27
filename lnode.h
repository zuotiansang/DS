#pragma once
#include "c.h"
typedef struct LNode {
	ElemType data;
	struct LNode* next;
}LNode,*LinkList;

Status CreateList_L(LinkList& L, int n);
Status GetListElem(LinkList L, int i,ElemType& e);