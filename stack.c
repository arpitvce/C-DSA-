#include<stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int arr[];
};
void push(struct stack* st,int v)
{
    st->top++;
    st->arr[st->top]=v;
}
int pop(struct stack* st)
{
    int val=st->arr[st->top];
    st->top--;
    return val;
}
int main()
{
    struct stack* st;
    st->top=-1;
    st->size=80;
    st->arr[st->size];
    push(st,9);
    push(st,100);
    printf("%d\n",pop(st));
    printf("%d\n",pop(st));
    return 0;
    
}