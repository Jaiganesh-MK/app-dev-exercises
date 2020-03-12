#include<iostream>
#define SIZE 10
struct stack
{
    int top;
    int stack[SIZE];
}a;
void push(stack a,int x)
{
    if(a.top<SIZE-1){
        a.stack[++a.top]=x;
    }    
}
int stacktop(stack *p)
{
     if(p->top!=-1){
        return p->stack[p->top];
    }  
}
int pop(stack *po)
{
    if(po->top!=-1){
        return po->stack[po->top];
        po->top--;
    }
}
int main()
{
    a.top = -1;
    push(a,10);
    return 0;
}