#include "SqListAlgorithm.h"
#include <stdio.h>
#include <stdlib.h> 
bool MergeList(SqList La,SqList Lb,SqList &Lc)
{
    /*
    *   已知顺序线性表La和Lb的元素按值非递减排列
    *   归并La和Lb得到新的顺序线性表Lc也按非递减排列
    */ 
    Lc.length = Lc.MaxSize = La.length + Lb.length;
    Lc.data = (ElemType *)malloc(sizeof(ElemType)*Lc.length);
    if(!Lc.data) return false;
    
    int i = 0,j = 0,k = 0;
    while(i < La.length && j < Lb.length)
    {
        if(La.data[i] <= Lb.data[j])
            Lc.data[k++] = La.data[i++];
        else
            Lc.data[k++] = Lb.data[j++];
    }
    
    while(i < La.length)
        Lc.data[k++] = La.data[i++];
    while(j < Lb.length)
        Lc.data[k++] = Lb.data[j++];
    
    return true;
}