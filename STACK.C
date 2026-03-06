#include <stdio.h>
#include <stdlib.h>
#define MS 5
typedef struct
{
    int arr[MS];
    int top;

} stack;
void init(stack *s)
{
    s->top = -1;
}
void push(stack *s, int x)
{
    if (s->top == MS - 1)
    {
        printf("the stack is full :(\n");
        return;
    }
    s->top++;
    s->arr[s->top] = x;
}
void display(stack *s)
{
    for (int i = 0; i <= s->top; i++)
    {
        printf("%d  ", s->arr[i]);
    }
    printf("\n");
}
void pop(stack *s)
{
    if (s->top == -1)
    {
        printf("stack is empty \n");
        return;
    }
    --s->top;
}
int getSize(stack *s)
{
    int size = s->top + 1;
    return size;
}
int main()
{
    stack s;
    init(&s);
    push(&s, 190);
    display(&s);
    push(&s, 920);
    display(&s);
    push(&s, 390);
    display(&s);
    push(&s, 409);
    display(&s);
    push(&s, 1990);
    display(&s);
    //push(&s,1234);
    //display(&s);
    printf("Size--->%d", getSize(&s)); 
    //printf("\n");
    //pop(&s);
    //display(&s);
    //pop(&s);
    //display(&s);
    //pop(&s);
    //display(&s);
    //pop(&s);
    //display(&s);
    //pop(&s);
    //display(&s);
    //pop(&s);
    //printf("Size--->%d", getSize(&s));
   
}
