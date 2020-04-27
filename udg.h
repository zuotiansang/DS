#pragma once

#include <stdio.h>
#include <stdlib.h>
#include "c.h"

typedef char UDG_InfoType;
typedef int UDG_VertexType;
#define UDG_MAX_VERTEX_NUM 20
typedef struct UDG_ArcNode {
	int adjvex;
	struct UDG_ArcNode* nextarc;
	UDG_InfoType *info;
}UDG_ArcNode;

typedef struct UDG_VNode {
	UDG_VertexType data;
	UDG_ArcNode* firstarc;
}UDG_VNode,AdjList[UDG_MAX_VERTEX_NUM];

typedef struct {
	AdjList verticles;
	int vexnum, arcnum;
	int kind;
}ALGraph;

Status CreateUDG_Gra(ALGraph& G);