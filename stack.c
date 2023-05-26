#include <stdio.h>
#include <stdlib.h>

void create(stack *s){
    s->top = NULL;
}
int isEmpty(stack *s){
    return s->top == NULL ? 1 : 0;
}
void push(stack *s, int data){
    node *new = (node*)malloc(sizeof(node));
    new->data = data;
    new->next = s->top;
    s->top = new;
}
int pop(stack *s){
    if(isEmpty(s)){
        printf("Stack is empty\n");
        return -1;
    }
    int data = s->top->data;
    node *aux = s->top;
    s->top = s->top->next;
    free(aux);
    return data;
}
void show(stack *s){
    if(isEmpty(s)){
        printf("Stack is empty\n");
        return;
    }
    node *aux = s->top;
    while(aux != NULL){
        printf("%d ", aux->data);
        printf("\n");
        aux = aux->next;
    }
}
void clear(stack *s){
    while(!isEmpty(s)){
        pop(s);
    }
}
