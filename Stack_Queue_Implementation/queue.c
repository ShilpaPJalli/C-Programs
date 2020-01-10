#include<stdio.h>
#include "stackQueue.h"

typedef enum
{
    Insert=1,
    Deletee,
    Peekk,
    Displayy,
    Exit
}stateType;

stateType state;

void Queue()
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
        scanf("%d",&state);

        //printf("%s %d",state,state);

        switch(state)
        {
            case Insert:  Push();
                          break;
            case Deletee: QuePop();
                          break;
            case Peekk:   QuePeek();
                          break;
            case Displayy: QueDisplay();
                           break;
            case Exit:     fclose(write_fptr);
                           exit(0);

            default:       printf("Please enter valid choice\n");
        }


    }

}
