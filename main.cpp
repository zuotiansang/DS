#include <iostream>
#include "c.h"
#include "list.h" 
#include "lnode.h"
#include "stack.h"
#include "tree.h"
#include "graph.h"
#include "udg.h"
#include "bst.h"
#include "order.h"
using namespace std;
int main()
{
#ifdef ONE_PAGE




	Triplet T;

	//1
	InitTriplet(T, 33, 16, 99);

	//2
	ElemType e2;
	Get(T,2,e2);
	printf("%d\n",e2);

	//3
	Put(T, 3, 0);
	
	ElemType e3;
	Get(T, 3, e3);
	printf("%d\n", e3);

	//4 and 5
	printf("%d\n",IsAscending(T));
	printf("%d\n", IsDescending(T));

	//6 and 7

	ElemType e6;
	Max(T, e6);
	printf("%d\n",e6);
	Min(T, e6);
	printf("%d\n", e6);

	//8
	DestroyTriplet(T);
	if (T)
	{
		printf("NOT NULL\n");
	}
	else
	{
		printf("NULL\n");
	}
#endif


#ifdef LIST_LINE
	



	SqList L;
	InitList_Sq(L);

	//for 8 9 1 10
	ListInsert_Sq(L,1,10);
	ListInsert_Sq(L, 1, 9);
	ListInsert_Sq(L, 1, 8);
	ListInsert_Sq(L, 3, 1);

	ElemType e;
	GetElm(L, 3, e);
	printf("%d\n", e);

	//for delete position 3 to get [8 9 10]
	
	ListDelete_Sq(L,3,e);
	printf("%d\n", e);
	
	GetElm(L, 3, e);
	printf("%d\n", e);
#endif

#ifdef LINKLIST_



	LinkList L;
	CreateList_L(L,3);
	ElemType e;
	GetListElem(L, 3, e);
	printf("%d\n", e);
#endif // LINKLIST_

	//1 for push
#ifdef ENDSTACK



	SqStack S;
	InitStack(S);


	Push(S,23);
	Push(S, 19);
	Push(S, 20);

	//2 for check init base to top result is [23 19 20]
	CheckStack(S);

	//pop and check result is [20]
	SElemType e;
	Pop(S,e);
	printf("%d\n", e);

	CheckStack(S); // result is [23 19]

	//get top result is [23]
	GetTop(S, e);
	printf("%d\n", e);
#endif // ENDSTACK

#ifdef NORUN
	BiTree T;
	CreateBiTree(T);
	
	




	PreOrderTraverse(T, Visit);

	cout << endl;

	TElemType e;
	Especially_End(T, e);
	printf("%c", e);

#endif //


#ifdef GRAPH_



	OLGraph G;
	CreateDG(G);

	int e;
	e = G.xlist[0].firstout->headvex;
	printf("%d\n", e);
#endif // GRAPH_


#ifdef BST



	ALGraph G;
	CreateUDG_Gra(G);

	int e = G.verticles[0].firstarc->adjvex;
	printf("%d\n", e);
#endif // BST


#ifdef TELEMTYPE


	BiTree T;
	T = NULL;
	TElemType e;

	InsertBST(T,'6');
	InsertBST(T,'1');
	InsertBST(T,'3');
	InsertBST(T,'4');
	InsertBST(T,'9');

	
	
	e = T->data;
	printf("%c\n", e);

	e = T->lchild->data;
	printf("%c\n", e);

	e = T->lchild->rchild->data;
	printf("%c\n", e);
	
#endif


	OrderSqList L;
	L.r[0] = { NULL,NULL };
	L.r[1] = { 49,'7'};
	L.r[2] = { 38,'1' };
	L.r[3] = { 65,'2' };
	L.r[4] = { 97,'3' };
	L.r[5] = { 76,'4' };
	L.r[6] = { 13,'5' };
	L.r[7] = { 27,'6' };
	L.length = 7;

	QuickSort(L);

	for (int i = 1; i <= L.length; i++)
	{
		OrderInfoType e;
		e = L.r[i].info;
		printf("%c ", e);
	}


 	return 0;
}