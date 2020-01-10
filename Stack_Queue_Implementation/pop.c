#include<stdio.h>
#include "stackQueue.h"
#include<stdlib.h>

void Pop()
{

    Node *temp=tail;

    if(head==NULL)
    {
        //Node *tempp=head;
        printf(" Stack is empty, can't delete an item\n");
        return;
        //free(temp);
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
    //free(temp);

    printf(" Topmost element %s of stack is popped out successfully\n",temp->data);

    fprintf(write_fptr,"poped %s \n",temp->data);
    stac--;
    free(temp);

    //fclose(fptr);
}

void QuePop()
{


    Node *temp1=head;

    if(head==NULL)
    {
        //Node *tempp=head;
        printf(" Queue is empty, can't delete an item\n");
        return;
        //free(temp);
    }


    head=temp1->next;
    //head=temp1;

    //free(temp1);

    printf("\nFirst entered element %s is deleted successfully\n",temp1->data);

    //FILE *fptr=fopen("stackQueueFile.txt","a+");

    fprintf(write_fptr,"\nQue_poped %s ",temp1->data);

    //fclose(fptr);
    stac--;

    free(temp1);
}
