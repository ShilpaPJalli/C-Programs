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

void Stack();
void Queue();
void Push();
void Pop();
void Peek();
void Display();
void QuePop();
void QuePeek();
void QueDisplay();

#endif // STACKQUEUE_H_INCLUDED
