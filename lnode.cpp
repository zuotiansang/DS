#include "lnode.h"
#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;
Status CreateList_L(LinkList& L, int n)
{
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	L->data = n;

	for (int i = 0; i < n; i++)
	{
		LinkList p;
		p = (LinkList)malloc(sizeof(LNode));

#ifdef SCANF
		scanf("%d", &p->data);
#endif // SCANF

		std::cin >> p->data;
		
		p->next = L->next;
		L->next = p;
	}
	return OK;
}

Status GetListElem(LinkList L, int i, ElemType& e)
{
	LinkList p;
	int j;
	p = L->next;
	j = 1;

	while (p && j < i)
	{
		p = p->next;
		j++;
	}
	if (!p || j > i)
	{
		return ERROR;
	}
	e = p->data;
	return OK;
}