#include "src/SqList.h"
#include <stdio.h>
int main(void)
{
    SqList La;
    InitList(La);
    ListInsert(La,1,1);
    ListInsert(La,2,3);
    PrintList(La);

    SqList Lb;
    InitList(Lb);
    ListInsert(Lb,1,2);
    ListInsert(Lb,2,4);
    PrintList(Lb);

    SqList Lc;
    MergeList(La,Lb,Lc);
    PrintList(Lc);

    return 0;
}