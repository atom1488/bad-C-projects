#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack newStack(void)
{
    return NULL;
}

Bool isEmptyStack(Stack st)
{
    if (st == NULL)
        return true;

    return false;
}

Stack pushStack(Stack st, int x)
{
    StackElement *element;
    
    element = malloc(sizeof(*element));

    if (element == NULL)
    {
        fprintf(stderr, "Erreur malloc\n");
        exit(EXIT_FAILURE);
    }

    element->value = x;
    element->next = st;

    return element;
}

Stack clearStack(Stack st)
{
    while(!isEmptyStack(st))
        st = popStack(st);

    return newStack();
}

void printStack(Stack st)
{
    if (isEmptyStack(st))
    {
        printf("La pile est vide");
        return;
    }

    while(!isEmptyStack(st))
    {
        printf("[%d]\n", st->value);
        st = st->next;
    }
}

Stack popStack(Stack st)
{
    StackElement *element;

    if (isEmptyStack(st))
        return newStack();

    element = st->next;
    free(st);

    return element;
}

int topStack(Stack st)
{
    if (isEmptyStack(st))
    {
        printf("La pile est vide\n");
        return -1; 
    }

    return st->value;
}

int stackLength(Stack st)
{
    int length = 0;

    while(!isEmptyStack(st))
    {
        length++;
        st = st->next;
    }

    return length;
}
