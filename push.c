#include<stdio.h>
#include"stack.h"
#include"gar.h"
void push(int val)
{
if(top >= 5)
printf("The stack is Full");
else
{
    top++;
arr[top]=val;
}


}