#include "ShareStack.h"

void InitStack(SqDoubleStack &S) // 初始化一个空栈S
{
    S.top1 = -1;
    S.top2 = MaxSize;
}

bool StackEmpty(SqDoubleStack S,int stackNum) // 判断一个栈是否为空
{
    if(stackNum == 1 && S.top1 == -1)
        return true;
    else if(stackNum == 2 && S.top2 == MaxSize)
        return true;
    else 
        return false;
}

bool Push(SqDoubleStack &S,ElemType x,int stackNum)   // 进栈,比之前多了一个stackNum,表示入的是哪一个栈
{
    if(S.top1 + 1 == S.top2)         // 栈满
        return false;
    if(stackNum == 1)   S.data[++S.top1] = x;
    else if(stackNum == 2) S.data[--S.top2] = x;
    return true;
}

bool Pop(SqDoubleStack &S,ElemType &x , int stackNum)   // 出栈
{
    if(StackEmpty(S,stackNum)) return false;
    if(stackNum == 1)
        x = S.data[S.top1--];
    else if(stackNum == 2)
        x = S.data[S.top2++];
    return true;
}

bool GetTop(SqDoubleStack S,ElemType &x,int stackNum) // 读栈顶元素
{
    if(StackEmpty(S,stackNum))  return false;
    if(stackNum == 1)
        x = S.data[S.top1];
    else if(stackNum == 2)
        x = S.data[S.top2];
    return true;
}

void ClearStack(SqDoubleStack &S,int stackNum)        // 销毁栈
{
    int i;
    if(stackNum == 1)
    {
        if(!StackEmpty(S,stackNum))
            for(i = 0 ; i <= S.top1 ; i++)
                S.data[i] = 0;
    }else if(stackNum == 2){
        if(!StackEmpty(S,stackNum))
            for(i = S.top2 ; i < MaxSize ; i++)
                S.data[i] = 0;
    }
}