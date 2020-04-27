#include "stack.h"
#include "c.h"
#include <iostream>

using namespace std;
Status InitStack(SqStack& S)
{
	S.base = (SElemType*)malloc(STACK_INIT_SIZE * sizeof(SElemType));
	if (!S.base)
	{
		return OVERFLOW;
	}
	S.top = S.base;
	S.stack_size = STACK_INIT_SIZE;
	return OK;
}

Status GetTop(SqStack S,SElemType &e)
{
	if (S.top == S.base)
	{
		return ERROR;
	}
	e = *(S.top - 1);
	return OK;
}

Status Push(SqStack& S, SElemType e)
{
	if (S.top-S.base>=STACK_INIT_SIZE)
	{
		S.base = (SElemType*)realloc(S.base,(S.stack_size + STACKINCREMENT) * sizeof(SElemType));

	
		if (!S.base)
		{
			exit(OVERFLOW);
		}
		//
		S.top = S.base + S.stack_size;
		//
		S.stack_size += STACKINCREMENT;
	}
	*S.top++ = e;
	return OK;
}

Status Pop(SqStack& S, SElemType& e)
{
	if (S.top==S.base)
	{
		return ERROR;
	}
	e = *(S.top-1);
	S.top--;
	return OK;
}

//add the full check
Status CheckStack(SqStack S)
{
	if (S.top==S.base)
	{
		printf("NULL.\n");
	}
	SElemType* p;
	for (p = S.base; p < S.top; p++)
	{
		printf("%d ",*p);
	}
	
	cout << endl;
	return OK;
}