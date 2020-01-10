#include<stdio.h>
#include "stackQueue.h"

void Display()
{

    Node *temp=tail;
    printf("\nStack elements are:\n\n");
    fprintf(write_fptr,"\nStack elements are:\n");
    //printf("top->");
    while(temp!=NULL)
    {
        printf("  | %-10s |\n",temp->data);
        fprintf(write_fptr,"| %s |\n",temp->data);
        temp=temp->prev;
    }
    if(head==NULL)
    {

        printf(" | empty |");
    }

    printf("\n");

    //fclose(fptr);

}

void Peek()
{
    printf("\nPeek of stack: %s\n",tail->data);
    fprintf(write_fptr,"\nPeek of stack: %s\n",tail->data);
}
void QuePeek()
{
    printf("\nPeek of Queue: %s",head->data);
    fprintf(write_fptr,"\nPeek of Queue: %s\n",head->data);
}

void QueDisplay()
{
    Node *temp=head;
    printf("\nContents of queue\n");
    fprintf(write_fptr,"\n\nContents of queue\n <- ");
    printf(" <- ");
    while(temp!=NULL)
    {
        printf(" %s ",temp->data);
        fprintf(write_fptr,"%s ",temp->data);
        temp=temp->next;
    }
    printf(" <-");
    fprintf(write_fptr," <-\n");
    printf("\n");
}
