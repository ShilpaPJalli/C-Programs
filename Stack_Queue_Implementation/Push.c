#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define stack_size 8
#include "stackQueue.h"

extern int stac;
extern char filename[20];

void push()
{
    char choice,c;
    char newdata[20];
    int havedata = 0;

    if(stac == stack_size)
    {
        printf(" \nStack/Queue is full, cant insert an item\n");
        return;
    }

    if(fopen_failed == 0)
    {
        printf("Would u like to push data from file(y/n):");
        scanf(" %c",&choice);
    }

    if(choice == 'y')
    {

        int i=0,dataa=0;

        while(dataa != 1)
        {
            c = fgetc(read_fp);

            while(c != ' ')//reading(words) till space
            {
                int asci=c;
                //only reading alphabets, integers & floating point from the file
                if( (asci >= 65 && asci <= 90) || (asci >= 97 && asci <= 122)|| ((asci >= 48 && asci <= 57) || asci == 46) )
                {
                    newdata[i] = c;
                    i++;
                }

                c=fgetc(read_fp);

            }
            newdata[i]='\0';

            if(newdata[0]=='\0')
                dataa=0;
            else
                dataa=1;

        }

        havedata=1;
    }

    int correct_input;

    if(havedata == 0)
    do
    {
        printf("\nEnter value to push:");

        int scfval=scanf(" %20[a-zA-Z0-9]+[^\n]",newdata);
        fflush(stdin);

        correct_input=1;

        if(scfval == 0)
        {
            printf(" pls enter valid input\n");
            correct_input = 0;
            //return;
        }

    }while(correct_input != 1);


    //FILE *fptr=fopen("stackQueueFile.txt","a+");


    Node *newnode = (Node*)malloc(sizeof(Node));

    strcpy(newnode->data, newdata);
    newnode->next = NULL;

    if(head==NULL)
    {
        newnode->prev = NULL;
        head = newnode;
        tail = newnode;
    }
    else
    {
        newnode->prev = tail;
        tail->next = newnode;
        tail = newnode;
    }

    printf("\nItem pushed successfully\n");
    fprintf(write_fptr,"pushed %s\n",newdata);//writing pushed data into a file
    stac++;
    //fclose(fptr);
    //return;
}
