#include "tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

Status CreateBiTree(BiTree& T)
{
	TElemType ch;
	cin >> ch;
	if (ch == '#')
	{
		T = NULL;
	}
	else
	{
		if (!(T = (BiTree)malloc(sizeof(BiTNode))))
		{
			exit(OVERFLOW);
		}
		T->data = ch;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
	}
	return OK;
}
Status Visit(TElemType e)
{
	printf("%c ", e);
	return OK;
}
Status PreOrderTraverse(BiTree T, Status(*Visit)(TElemType e))
{
	if (T)
	{
		Visit(T->data);
		PreOrderTraverse(T->lchild, Visit);
		PreOrderTraverse(T->rchild, Visit);
	}
	return OK;
}

Status Especially_End(BiTree T, TElemType& e)
{
	BiTree p;
	p = T->lchild;
	e = p->data;
	return OK;
}