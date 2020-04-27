#include "ostack.h"
#include "bst.h"
#include <iostream>
using namespace std;
void HeapAdjust(HeapType& H, int s, int m)
{
	OrderRedType rc;
	rc = H.r[s];

	for (int j = 2 * s; j <= m; j *= 2)
	{
		if (j < m && LT(H.r[j].key, H.r[j + 1].key))
		{
			j++;
		}
		if (!LT(rc.key, H.r[j].key))
			break;
		H.r[s] = H.r[j];
		s = j;
	}
	H.r[s] = rc;
}

void HeapSort(HeapType& H)
{
	for (int i = H.length / 2; i > 0; i--)
	{
		HeapAdjust(H,i,H.length);
	}
	//
	for (int i = H.length; i > 1; i--)
	{
		OrderRedType rc;
		rc = H.r[1];
		H.r[1] = H.r[i];
		H.r[i] = rc;

		HeapAdjust(H, 1, i-1);
	}
}