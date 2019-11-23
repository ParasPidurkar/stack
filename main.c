#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
//#include "gar.h"
int top =-1;
int arr[5];
int main()
{

    int i, val;
    while (1)
    {
    printf("Enter the operation to be performed\n 1:Push\n 2:Pop\n3: Display \n 4: Exit");
    scanf("%d", &i);
    
        switch (i)
        {
        case 1:
            printf("Enter the element to be inserted");
            scanf("%d", &val);
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Invalid input");
            break;
        }
    }
}