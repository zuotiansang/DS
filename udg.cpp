#include "udg.h"
#include <iostream>
using namespace std;
Status CreateUDG_Gra(ALGraph& G)
{
	cout << "输入顶点、弧度:";

	cin >> G.vexnum >> G.arcnum;

	for (int i = 0; i < G.vexnum; i++)
	{
		cout << "输入顶点" << i + 1 << "值:";
		cin >> G.verticles[i].data;

		G.verticles[i].firstarc = NULL;
	}

	for (int k = 0; k < G.arcnum*2; k++)
	{
		cout << "输入顶点" <<  k + 1 << "配对v1 v2:";
		int v1, v2;
		cin >> v1 >> v2;
		int m = v1 - 1, n = v2 - 1;

		UDG_ArcNode* p;
		p = (UDG_ArcNode*)malloc(sizeof(UDG_ArcNode));

		*p = {n,G.verticles[m].firstarc,NULL};
		G.verticles[m].firstarc = p;
	}

	return OK;
}