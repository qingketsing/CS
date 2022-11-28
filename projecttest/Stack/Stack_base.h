#include "Stack_struct.h"
#include <stdio.h>
#include <stdlib.h>

int InitStack(SQstack *s);

int PushStack(SQstack *s,int elem);

int EmptyStack(SQstack *s);

int PopStack(SQstack *s,int *rt);

int TravelStack(SQstack s);