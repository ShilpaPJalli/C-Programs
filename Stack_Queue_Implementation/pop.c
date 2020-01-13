#include<stdio.h>
#include "stackQueue.h"
#include<stdlib.h>

void pop_stack()
{

    Node *temp=tail;

    if(head==NULL)
    {
        printf(" Stack is empty, can't delete an item\n");
        return;
    }

    if(temp->prev!=NULL)
    {
        Node *prevNode=temp->prev;

        prevNode->next=NULL;
        tail=prevNode;

    }
    else
    {
        head=head->next;
        tail=head;
        //free(head);
    }

    printf(" Topmost element '%s' of stack is popped out successfully\n",temp->data);

    fprintf(write_fptr,"poped %s \n",temp->data);
    stac--;
    free(temp);
}

void que_pop()
{


    Node *temp1=head;

    if(head==NULL)
    {
        printf(" Queue is empty, can't delete an item\n");
        return;
    }


    head=temp1->next;

    printf("\nFirst entered element '%s' is deleted successfully\n",temp1->data);

    fprintf(write_fptr,"\nQue_poped %s ",temp1->data);

    //fclose(fptr);
    stac--;

    free(temp1);
}
