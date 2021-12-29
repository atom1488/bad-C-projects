#ifndef __STACK__H__
#define __STACK__H__

    // Boolean
    typedef enum
    {
        false, //0
        true //1
    } Bool;

    //definition d'une pile
    typedef struct StackElement
    {
        int value;
        struct StackElement *next;
    } StackElement, *Stack;
    
    // Prototype des fonctions
    
    Stack newStack(void);
    
    Bool isEmptyStack(Stack st);
    
    Stack pushStack(Stack st, int x);

    Stack clearStack(Stack st);

    void printStack(Stack st);

    Stack popStack(Stack st);

    int topStack(Stack st);

    int stackLength(Stack st);
#endif
