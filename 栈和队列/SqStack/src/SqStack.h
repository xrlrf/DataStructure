#define MaxSize 50  // 定义栈中的元素的最大个数
typedef int ElemType;
typedef struct{
    ElemType data[MaxSize];     // 存放栈中元素
    int top;                    // 栈顶指针
}SqStack;

void InitStack(SqStack &S); // 初始化一个空栈S
bool StackEmpty(SqStack S); // 判断一个栈是否为空
bool Push(SqStack &S,ElemType x);   // 进栈
bool Pop(SqStack &S,ElemType &x);   // 出栈
bool GetTop(SqStack S,ElemType &x); // 读栈顶元素
void ClearStack(SqStack &S);        // 销毁栈


