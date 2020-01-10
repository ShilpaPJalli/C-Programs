#include<stdio.h>
#include "stackQueue.h"

typedef enum
{
    insert=1,
    deletee,
    peekk,
    displayy,
    exitt
}queue_operations;

queue_operations choice;

void queue_menu()
{
    stac=0;
    while(1)
    {
        printf("\n");
        printf("1: Insert\n");
        printf("2: Delete\n");
        printf("3: Peek\n");
        printf("4: Display\n");
        printf("5: Exit\n");

        printf("Enter ur choice: ");
        scanf("%d",&choice);

        //printf("%s %d",state,state);

        switch(choice)
        {
            case insert:  push();
                          break;
            case deletee: que_pop();
                          break;
            case peekk:   que_peek();
                          break;
            case displayy: que_display();
                           break;
            case exitt:     fclose(write_fptr);
                           exit(0);

            default:       printf("Please enter valid choice\n");
        }


    }

}
