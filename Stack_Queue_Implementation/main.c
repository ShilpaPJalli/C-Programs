#include <stdio.h>
#include <stdlib.h>
#include "stackQueue.h"

extern FILE *write_fptr,*read_fp;

extern Node *head;
extern Node *tail;


int main()
{
    write_fptr = fopen("stackQueueFile.txt","a+");

    if(write_fptr == NULL)
    {
        printf("cant open file\n");
    }

    printf("Enter file name, from which you wanna read data:");
    scanf("%s",filename);

    read_fp = fopen(filename,"r");

    if(read_fp == NULL)
    {
        printf("Cant open file %s\n",filename);
    }

    void (*fun_ptr[])()={Stack,Queue};

    printf("1: Stack\n");
    printf("2: Queue\n");

    int choic;
    printf("Enter your choice: ");
    scanf("%d",&choic);

    if(choic<1 || choic>2)
    {
        printf(" Please enter valid choice\n");
        exit(0);
    }

    (*fun_ptr[choic-1])();

    return 0;
}
