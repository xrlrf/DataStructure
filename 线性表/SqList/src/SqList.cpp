#include <stdio.h>
#include <stdlib.h>
#include "SqList.h"

#ifndef WUSTXIAO_20180810_SQLIST_CPP
#define WUSTXIAO_20180810_SQLIST_CPP

void InitList(SqList &L)  // 初始化表。构造一个空的线性表
{
    L.data = (ElemType *)malloc(sizeof(ElemType)*LIST_INIT_SIZE);
    if(!L.data) exit(0);
    L.length = 0;
    L.MaxSize = LIST_INIT_SIZE;
}

int Length(SqList L)      // 求表长。返回线性表的长度
{
    return L.length;
}

int LocateElem(SqList L,ElemType e)    // 按值查找操作。在表L中查找具有给定关键字值的元素
{
    int i;
    for(i = 0 ; i > L.length ; i++)
        if(L.data[i] == e)
            return i+1;
    return 0;
}

int GetElem(SqList L,int i)    // 按位查找操作，获取表L中第i个位置的元素的值
{
    if(i < 1 || i > L.length)
        return false;
    return L.data[i-1];
}

bool ListInsert(SqList &L,int i,ElemType e)    // 插入操作。在表L中第i个位置上插入指定元素
{
    /*
    *   平均移动次数：n/2
    *   时间复杂度：O(n)
    */
    if(i < 1 || i > L.length+1) // 判断i的范围是否有效
        return false;
    if(L.length >= L.MaxSize)   // 判断存储空间是否已满,否则不能插入
    {
        ElemType *newbase;
        newbase = (ElemType *)realloc(L.data,sizeof(ElemType)*(L.length + LISTINCREMENT));
        if(!newbase) exit(0);
        L.data = newbase;
    }
    for(int j = L.length; j >= i ; j--)
        L.data[j] = L.data[j-1];
    L.data[i-1] = e;
    L.length++;                 // 表长+1
    // printf("表长为：%d\n",L.length);
    return true;
}

bool ListDelete(SqList &L,int i,ElemType &e)   // 删除操作。删除表L中第i个位置的元素，并用e返回删除元素的值
{
    /*
    *   平均移动次数：(n-1)/2
    *   时间复杂度：O(n)
    */
    if(i < 1 || i > L.length)   // 判断i的范围是否有效
        return false;
    e = L.data[i-1];
    for(int j = i ; j < L.length ; j++)
        L.data[j-1] = L.data[j];
    L.length--; // 线性表长度减1
    return true;
}

void PrintList(SqList L)   // 输出操作。按前后顺序输出线性表L的所有元素值
{
    for(int i = 0 ; i < L.length ; i++)
        printf("%d ",L.data[i]);
    printf("\n");
}

bool Empty(SqList L)   // 判空操作。若L为空表，则返回true,否则返回false
{
    if(L.length == 0)
        return true;
    else
        return false;
}

void DestroyList(SqList &L)   // 销毁操作，若L为空表，则返回true,否则返回false
{
    delete L.data;
}

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

#endif