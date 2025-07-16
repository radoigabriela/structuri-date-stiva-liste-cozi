#include <stdio.h>
#include <string.h>
#include "stack.h"

int main(void)
{
    stackType s;
    char x[101];
    char *p;
    printf("Introduceti caracterele: ");
    gets(x);
    stiva(&s, strlen(x));
    for (p = x; *p != '\0'; p++)
    {
        citire(&s, *p);
    }
    printf("\nCaracterele inversate sunt: ");
    while (!isEmpty(&s))
    {
        printf("%c", afis(&s));
    }
    stergere(&s);
    return 0;
}
