typedef int ElemType;
typedef struct SNode{
    ElemType data;          // 数据域
    struct SNode *next;  // 指针域
}SNode,*SLink;  // 栈类型定义

typedef struct LinkStack{
    SLink top;  //  栈顶指针
    int count;  //  链栈结点数
}LinkStack;     // 链栈

// 1.链栈一般不存在栈满的情况
// 2.空栈的判定条件通常定为top == NULL
// 注意这里的参数类型为: LinkStack *S时，表示要修改链栈
void InitStack(LinkStack *S); // 初始化一个空栈S
bool StackEmpty(LinkStack S); // 判断一个栈是否为空
bool Push(LinkStack *S,ElemType x);   // 进栈
bool Pop(LinkStack *S,ElemType &x);   // 出栈
bool GetTop(LinkStack S,ElemType &x); // 读栈顶元素
void ClearStack(LinkStack *S);        // 销毁栈