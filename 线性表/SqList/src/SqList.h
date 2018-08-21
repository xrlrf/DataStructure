#ifndef WUSTXIAO_20180729_SQLIST_H
#define WUSTXIAO_20180729_SQLIST_H
// #define MaxSize 50  // 定义线性表的最大长度
typedef int ElemType;
#define LIST_INIT_SIZE 10
#define LISTINCREMENT 2

// 静态分配
// typedef struct{
//     ElemType data[MaxSize]; // 顺序表的元素
//     int length;             // 顺序表的当前长度
// }SqList;

// 动态分配
typedef struct{
    ElemType *data; // 指示动态分配数组的指针
    int MaxSize,length; // 数组的最大容量和当前个数
}SqList;

// 线性表的基本操作
void InitList(SqList &L);  // 初始化表。构造一个空的线性表
int Length(SqList L);      // 求表长。返回线性表的长度
int LocateElem(SqList L,ElemType e);    // 按值查找操作。在表L中查找具有给定关键字值的元素
int GetElem(SqList L,int i);    // 按位查找操作，获取表L中第i个位置的元素的值
bool ListInsert(SqList &L,int i,ElemType e);    // 插入操作。在表L中第i个位置上插入指定元素
bool ListDelete(SqList &L,int i,ElemType &e);   // 删除操作。删除表L中第i个位置的元素，并用e返回删除元素的值
void PrintList(SqList L);   // 输出操作。按前后顺序输出线性表L的所有元素值
bool Empty(SqList L);   // 判空操作。若L为空表，则返回true,否则返回false
void DestroyList(SqList &L);   // 销毁操作，若L为空表，则返回true,否则返回false
bool MergeList(SqList La,SqList Lb,SqList &Lc); // 顺序表的合并

#endif