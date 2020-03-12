#include<iostream>
struct NODE
{
    int info;
    struct NODE *next;
};
void push(NODE** head_ref,int x)
{
    NODE* new_node=new NODE();
    new_node->info=x;
    new_node->next= *head_ref;
    *head_ref=new_node;
}
int main()
{
    NODE* a = NULL;
    a= new NODE();
    a->info=12;
}
