#include "LiStack.h"
#include <stdlib.h>

void InitStack(LinkStack *S) // 初始化一个空栈S
{
    S->top = NULL;
    S->count = 0;
}

bool StackEmpty(LinkStack S) // 判断一个栈是否为空
{
    if(S.top == NULL)
        return true;
    else 
        return false;
}

bool Push(LinkStack *S,ElemType x)   // 进栈
{
    SLink p = (SLink)malloc(sizeof(SNode));
    p->data = x;
    p->next = S->top;
    S->top = p;
    S->count++;
    return true;
}

bool Pop(LinkStack *S,ElemType &x)   // 出栈
{
    if(S->top == NULL) return false;
    x = S->top->data;
    SLink p = S->top;   // 设置辅助指针，防止修改top指针后找不到要释放的结点指针
    S->top = S->top->next;
    free(p);
    S->count--;
    return true;
}

bool GetTop(LinkStack S,ElemType &x) // 读栈顶元素
{
    if(S.top == NULL) return false;
    x = S.top->data;
    return true;
}

void ClearStack(LinkStack *S)        // 销毁栈
{
    SLink p = S->top;
    while(p != NULL)
    {
        SLink q = p;
        p = p->next;
        free(q);
    }
    S->top = NULL;
}