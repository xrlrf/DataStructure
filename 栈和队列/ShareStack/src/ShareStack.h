#define MaxSize 50
typedef int ElemType;

typedef struct{
    ElemType data[MaxSize];     // 存放栈中元素
    int top1;                   // 栈1栈顶指针
    int top2;                   // 栈2栈顶指针
}SqDoubleStack;                 // 顺序共享栈的简写

void InitStack(SqDoubleStack &S); // 初始化一个空栈S
bool StackEmpty(SqDoubleStack S,int stackNum); // 判断一个栈是否为空
bool Push(SqDoubleStack &S,ElemType x,int stackNum);   // 进栈,比之前多了一个stackNum,表示入的是哪一个栈
bool Pop(SqDoubleStack &S,ElemType &x,int stackNum);   // 出栈
bool GetTop(SqDoubleStack S,ElemType &x,int stackNum); // 读栈顶元素
void ClearStack(SqDoubleStack &S,int stackNum);        // 销毁栈