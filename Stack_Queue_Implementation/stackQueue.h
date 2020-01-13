#ifndef STACKQUEUE_H_INCLUDED
#define STACKQUEUE_H_INCLUDED

typedef struct node
{
    char data[20];
    struct node *next;
    struct node *prev;

}Node;

Node *head;
Node *tail;

FILE *write_fptr;
FILE *read_fp;

int stac;
char filename[20];
int fopen_failed;

void stack_menu();
void queue_menu();
void push();
void pop_stack();
void stack_peek();
void stack_display();
void que_pop();
void que_peek();
void que_display();

#endif // STACKQUEUE_H_INCLUDED
