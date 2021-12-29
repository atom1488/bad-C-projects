#include <stdio.h>
#include "stack.h"

int main(void)
{
    Stack sta = newStack();

    sta = pushStack(sta, 14);
    sta = pushStack(sta, 47);
    sta = pushStack(sta, 23);
    sta = pushStack(sta, 31);

    printStack(sta);

    sta = popStack(sta);
    
    printf("\n");

    printStack(sta);

    printf("Sommet de la pile: %d\n", topStack(sta));

    printf("Taille de la pile: %d\n", stackLength(sta));
    sta = clearStack(sta);

    return 0;
}
