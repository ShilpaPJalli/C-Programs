#include<stdio.h>
#include "stackQueue.h"
#include<stdlib.h>

void stack_menu()
{
    void (*funPtr[])()={push,pop_stack,stack_peek,stack_display};

    while(1)
    {
        printf("\n");
        printf("1: Push\n");
        printf("2: Pop\n");
        printf("3: Peek\n");
        printf("4: Display\n");
        printf("5: Exit\n");

        char choic[10];
        int flag=1;
        int check;
        float float_choice;

        while(flag!=0)
        {
            printf("\nEnter your choice: ");
            scanf(" %s",choic);
            //fflush(stdin);

            float_choice=atof(choic);

            check=float_choice;

            //printf("check=%d float_choice=%f",check,float_choice);

            if(check!=float_choice)
            {
                printf(" *Please enter an integer value\n");

                flag=1;

            }

            else if(float_choice<1 || float_choice>=5)
            {
                if(float_choice==5)
                {
                    fclose(write_fptr);
                    exit(0);
                }

                printf(" Please enter valid choice\n");

                flag=1;
            }
            else
            {
                flag=0;

            }
            //fflush(stdin);
        }
        //ch=check;

        (*funPtr[check-1])();

    }

}

