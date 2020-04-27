#pragma once
#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFANSIBLE -1
#define OVERFLOW -2

typedef int Status;

typedef  int ElemType;
typedef ElemType* Triplet;

Status InitTriplet(Triplet &T, ElemType v1, ElemType v2, ElemType v3);

Status DestroyTriplet(Triplet &T);

Status Get(Triplet T, int i, ElemType& e);

Status Put(Triplet &T, int i, ElemType e);

Status IsAscending(Triplet T);

Status IsDescending(Triplet T);

Status Max(Triplet T, ElemType &e);

Status Min(Triplet T,ElemType &e);




