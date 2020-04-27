#pragma once
#include "c.h"
#include <stdlib.h>
#include <stdio.h>
#include "tree.h"

#define EQ(a,b) ((a)==(b))
#define LT(a,b) ((a)<(b))
//#define OT(a,B) ((a)>(b))
Status SearchBST(BiTree T, TElemType key, BiTree f, BiTree &p);
Status InsertBST(BiTree &T, TElemType e);