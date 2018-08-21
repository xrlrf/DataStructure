#include <stdio.h>
#include <stdlib.h>
#include "src/ShareStack.h"

int main(int argc,char *argv[])
{
    int result;
    SqDoubleStack s;
    InitStack(s);
    for(int i = 1 ; i <= 4 ; i++)
        Push(s,i,1);

    for(int i = 9 ; i >=6 ; i--)
        Push(s,i,2);

    printf("打印栈1...\n");
    while(!StackEmpty(s,1))
    {
        Pop(s,result,1);
        printf("%d ",result);
    }
    printf("\n");

    printf("打印栈2...\n");
    while(!StackEmpty(s,2))
    {
        Pop(s,result,2);
        printf("%d ",result);
    }
    printf("\n");
    
    printf("清空栈1...\n");
    ClearStack(s,1);

    printf("打印栈1...\n");
    while(!StackEmpty(s,1))
    {
        Pop(s,result,1);
        printf("%d ",result);
    }
    printf("\n");

    printf("清空栈2...\n");
    ClearStack(s,2);

    printf("打印栈2...\n");
    while(!StackEmpty(s,2))
    {
        Pop(s,result,2);
        printf("%d ",result);
    }
    printf("\n");

    return 0;
}