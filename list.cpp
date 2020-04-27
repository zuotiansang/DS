#include "list.h"

Status InitList_Sq(SqList& L)
{
	L.elem = (ElemType*)malloc(LIST_INIT_SIZE*sizeof(ElemType));
	if (!L.elem)
	{
		exit(OVERFLOW);
	}
	L.length = 0;
	L.listsize = LIST_INIT_SIZE;
	return 0;
}
Status ListInsert_Sq(SqList& L, int i, ElemType e)
{
	if (i<1 || i>L.length + 1)
	{
		return ERROR;
	}
	if (L.length >= L.listsize)
	{
		ElemType* newbase;
		newbase = (ElemType*)malloc((L.listsize+LISTINCREMENT)*sizeof(ElemType));
		L.elem = newbase;
		L.listsize += LISTINCREMENT;
	}
	ElemType* q;
	q = &(L.elem[i - 1]);

	ElemType* p;
	for (p = &(L.elem[L.length - 1]); p >= q; p--)
	{
		*(p + 1) = *p;
	}
	*q = e;
	L.length++;
	return OK;
}

Status GetElm(SqList L, int i, ElemType& e)
{
	if (i<1 || i>L.length)
	{
		return OVERFLOW;
	}
	e = L.elem[i-1];
	return OK;
}

Status ListDelete_Sq(SqList& L, int i, ElemType& e)
{
	if (i<1 || i>L.length)
	{
		return ERROR;
	}
	ElemType* p;
	p = &(L.elem[i - 1]);
	e = *p;

	ElemType* q;
	for (q = &(L.elem[i - 1]); q <= &(L.elem[L.length - 1]); q++)
	{
		*q = *(q+1);
	}
	L.length--;
	return OK;
}