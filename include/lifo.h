#ifndef _lifo_included_

struct lifo {
    char data;
    struct lifo *next;
};

void push(char c);
char pop();
char peek();
void print();

#endif
