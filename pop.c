#include<stdio.h>
#include"stack.h"
#include"gar.h"
void pop()
{
    if(top==-1)
    printf("stack is EMPTY");
    top--;
}