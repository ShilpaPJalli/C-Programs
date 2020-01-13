#include <stdio.h>
#include <stdlib.h>
#include "stackQueue.h"

extern FILE *write_fptr,*read_fp;

extern Node *head;
extern Node *tail;

extern int fopen_failed;


int main()
{
    write_fptr = fopen("stackQueueFile.txt","a+");

    if(write_fptr == NULL)
    {
        printf("cant open file\n");
    }

    printf("Enter file name, from which you wanna read data (input.txt): ");
    scanf("%s",filename);

    read_fp = fopen(filename,"r");

    if(read_fp == NULL)
    {
        printf("Can't open file %s\n\n",filename);
        fopen_failed=1;
    }
    //initializing array of function ptr with functions
    void (*fun_ptr[])() = {stack_menu,queue_menu};

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

    (*fun_ptr[choic-1])();//calling function based on user choice

    return 0;
}
