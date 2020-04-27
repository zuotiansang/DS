#include "bst.h"
#include <iostream>

using namespace std;

Status InsertBST(BiTree& T, TElemType e)
{
	BiTNode *p;
	if (!SearchBST(T, e, NULL,p))
	{
		BiTNode *s;
		s = (BiTree)malloc(sizeof(BiTNode));
		s->data = e;
		s->lchild = s->rchild = NULL;
		
		if (!p)
		{
			T = s;
		}
		else if LT(e, p->data)
		{
			p->lchild = s;
		}
		else
		{
			p->rchild = s;
		}
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	return OK;
}

Status SearchBST(BiTree T, char key,BiTree f, BiTree& p)
{
	if (!T)
	{
		//f first given NULL
		p = f;
		return FALSE;
	}
	else if(key==T->data)
	{
		p = T;
		return TRUE;
	}
	else if(key<T->data)
	{
		return SearchBST(T->lchild, key, T, p);
	}
	else
	{
		return SearchBST(T->rchild, key, T, p);
	}
}