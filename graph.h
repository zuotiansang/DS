#pragma once
#include "c.h"
#include <stdlib.h>
#include <stdio.h>


#define MAX_VERTEX_NUM 20

typedef char InfoType;
typedef int VertexType;
typedef struct ArcBox {
	int trailvex, headvex;
	struct ArcBox* hlink, * tlink;
	InfoType* info;
}ArcBox;

typedef struct VexNode {
	VertexType data;
	ArcBox* firstin, * firstout;
}VexNode;

typedef struct {
	VexNode xlist[MAX_VERTEX_NUM];
	int vexnum, arcnum;
}OLGraph;

Status CreateDG(OLGraph &G);