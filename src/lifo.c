#include "lifo.h"
#include <stdlib.h>
#include <stdio.h>

struct lifo *top = NULL;

void push(char c)
{
    struct lifo *new = (struct lifo *) malloc(sizeof(struct lifo));
    new->data = c;
    new->next = top;
    if (top == NULL)
        new->next = NULL;
    else
        new->next = top;
    
    top = new;
}

char pop()
{
    if (top == NULL)
        exit(-1);
    
    struct lifo *item = top;
    char data = top->data;
    top = top->next;
    free(item);
    return data;
}

void print()
{
    struct lifo* cur;
    cur = top;
    printf("Stack:\n");
    while (cur != NULL)
    {
        printf("%c\n-\n", cur->data);
        cur = cur->next;
    }
    printf("\n");
}
