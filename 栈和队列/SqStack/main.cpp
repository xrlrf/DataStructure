#include <stdio.h>
#include <stdlib.h>
#include "src/SqStack.h"

int main(int argc,char *argv[])
{
    SqStack s;
    InitStack(s);
    int i,result;
    for(i = 1 ; i <= 10 ; i++)
        Push(s,i);
    
    GetTop(s,result);
    printf("GetTop:%d\n",result);

    printf("打印栈内元素...\n");
    while(!StackEmpty(s))
    {
        if(Pop(s,result))
            printf("%d ",result);
        else
            printf("出栈错误!\n");
    }
    printf("\n");

    printf("清空栈...\n");
    ClearStack(s);

    while(!StackEmpty(s))
    {
        if(Pop(s,result))
            printf("%d ",result);
        else
            printf("出栈错误!\n");
    }

    return 0;
}