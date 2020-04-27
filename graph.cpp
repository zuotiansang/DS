#include "graph.h"
#include <iostream>

using namespace std;

Status CreateDG(OLGraph& G)
{
	int IncInfo;

	cout << "输入顶点,弧,信息位:";
	cin >> G.vexnum >> G.arcnum >> IncInfo;

	for (int i = 0; i < G.vexnum; i++)
	{
		cout << "输入顶点" << i + 1 << "数据值:";
		cin >> G.xlist[i].data;
		G.xlist[i].firstin = NULL;
		G.xlist[i].firstout = NULL;
	}

	for (int k = 0; k < G.arcnum; k++)
	{
		int v1, v2;
		cout << "键入关联顶点" << k + 1 << ":";
		cin >> v1 >> v2;
		int m = v1 - 1, n = v2 - 1;

		ArcBox* p;
		p = (ArcBox*)malloc(sizeof(ArcBox));

		*p = { m,n,G.xlist[n].firstin,G.xlist[m].firstout,NULL };
		G.xlist[n].firstin = G.xlist[m].firstout = p;

		if (IncInfo)
		{
			//p->info[0] = '0';
			//p->info[1] = '\0';
		}
		else
		{
			//p->info[0] = '1';
			//p->info[1] = '\0';
		}
	}
	return OK;
}