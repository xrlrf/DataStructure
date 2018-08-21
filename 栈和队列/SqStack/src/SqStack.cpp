#include "SqStack.h"

void InitStack(SqStack &S) // 初始化一个空栈S
{
    S.top = -1;     // 初始化栈顶指针，开始时为空，置-1
}

bool StackEmpty(SqStack S) // 判断一个栈是否为空
{   
    if(S.top == -1)
        return true;
    else 
        return false;
}

bool Push(SqStack &S,ElemType x)   // 进栈
{
    if(S.top == MaxSize - 1)    // 栈满，报错
        return false;
    S.data[++S.top] = x;
    return true;
}

bool Pop(SqStack &S,ElemType &x)   // 出栈
{
    if(S.top == -1)             // 栈空，报错
        return false;
    x = S.data[S.top--];
    return true;
}

bool GetTop(SqStack S,ElemType &x) // 读栈顶元素
{
    if(S.top == -1)
        return false;           // 栈空，报错
    x = S.data[S.top];
    return true;
}

void ClearStack(SqStack &S)        // 销毁栈
{
    int i;
    for(i = 0 ; i < S.top + 1; i++)
        S.data[i] = 0;
}