#include <stdio.h>
#include <stdlib.h>
#include "src/LiStack.h"

int main(int argc,char *argv[])
{
    LinkStack s;
    InitStack(&s);
    int result;
    for(int i = 1 ; i <= 10 ; i++)
        Push(&s,i);

    printf("出栈的内容...\n");
    while(!StackEmpty(s))
    {
        Pop(&s,result);
        printf("%d ",result);
    }
    printf("\n");

    return 0;
}