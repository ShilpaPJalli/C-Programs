#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "stackQueue.h"

extern int stac;
extern char filename[20];

void Push()
{
    char choice,c;
    char newdata[20];
    int havedata=0;

    if(stac==10 && head!=NULL)
    {
        printf(" \nStack/Queue is full, cant insert an item\n");
        return;
    }

    printf("Would u like to push data from file(y/n):");
    scanf(" %c",&choice);

    if(choice=='y')
    {

        int i=0,dataa=0;

        while(dataa != 1)
        {
            c = fgetc(read_fp);

            while(c!=' ')
            {
                int asci=c;
                if( (asci>=65 && asci<=90) || (asci>=97 && asci<=122)|| ((asci>=48 && asci<=57) || asci==46) )
                {
                    newdata[i]=c;
                    i++;
                }

                c=fgetc(read_fp);
                /*if(c!=' ')
                    continue;*/
            }
            newdata[i]='\0';

            if(newdata[0]=='\0')
                dataa=0;
            else
                dataa=1;

        }

        havedata=1;
    }

    int correct;

    if(havedata==0)
    do
    {
        printf("\nEnter value to push:");
    //while(getchar()!='\n');
        //getc()
        int scfval=scanf(" %20[a-zA-Z0-9]+[^\n]",newdata);
        fflush(stdin);

        correct=1;

        if(scfval==0)
        {
            printf(" pls enter valid input\n");
            correct=0;
            //return;
        }

    }while(correct!=1);


    //FILE *fptr=fopen("stackQueueFile.txt","a+");


    Node *newnode=(Node*)malloc(sizeof(Node));

    strcpy(newnode->data,newdata);
    newnode->next=NULL;

    if(head==NULL)
    {
        newnode->prev=NULL;
        head=newnode;
        tail=newnode;
    }
    else
    {
        newnode->prev=tail;
        tail->next=newnode;
        tail=newnode;
    }

    printf("\nItem pushed successfully\n");
    fprintf(write_fptr,"pushed %s\n",newdata);
    stac++;
    //fclose(fptr);
    //return;
}
