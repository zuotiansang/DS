#pragma once
#include "c.h"

typedef char TElemType;
typedef struct BiTNode {
	TElemType data;
	struct BiTNode* lchild, * rchild;
}BiTNode,*BiTree;

Status CreateBiTree(BiTree &T);
Status PreOrderTraverse(BiTree T,Status(*Visit)(TElemType e));
Status Visit(TElemType e);
Status Especially_End(BiTree T, TElemType& e);