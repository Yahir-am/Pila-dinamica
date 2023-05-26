typedef struct Node{
    int data;
    struct Node *next;
}node;

typedef struct Stack{
    node *top;
}stack;

void create(stack *s);
int isEmpty(stack *s);
void push(stack *s, int data);
int pop(stack *s);
void show(stack *s);
void clear(stack *s);

#include "stack.c"




