#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define N 16
#define M 11

typedef double Data;
struct Elem
{
 Data val;
 struct Elem *next, *prev;
};

void insertEnd(Data d, struct Elem **list)
{
struct Elem *elem = (struct Elem *)malloc(sizeof(struct Elem));
 elem->val = d;
if (*list == NULL)
{
    elem->prev = NULL;
    elem->next = NULL;
    *list = elem;
}
else
{
    struct Elem *current = *list;
    while (current->next != NULL)
      current = current->next;
      current->next = elem;
      elem->prev = current;
      elem->next = NULL;
}
}

void show(struct Elem *list)
{
    struct Elem *current = list;
    while (current->next != NULL)
{
    printf("%f\n", current->val);
    current = current->next;
}
}

struct Elem *link(struct Elem **ii, struct Elem **iii){
if (*ii == NULL)
    {
        *ii = *iii;
    }
else
{
    struct Elem *current = *ii;
    while (current->next != NULL)
    current = current->next;
    current->next = *iii;
    (*iii)->prev = current;
}
}

void linkAndDisplay(struct Elem **ii, struct Elem **iii)
{
    link(ii, iii);
    show(*ii);
}

double max(struct Elem *list)
{
    double max;
    if (list == NULL)
{
    printf("Lista este goala.");
    return 0;
}
else
{
    struct Elem *current = list;
    max = list->val;
    while (current->next != NULL)
{
    current = current->next;
    if (current->val > max)
    max = current->val;
}
}
return max;
}

void init_random()
{
srand(time(0));
}

double randomDouble()
{
return (double)rand();
}

double min(struct Elem *list)
{
 double min;
 if (list == NULL)
{
printf("Lista este goala.");
return 0;
}
else
    {
struct Elem *current = list;
min = list->val;
while (current->next != NULL)
{
    current = current->next;
if (current->val < min)
min = current->val;
}
    }
return min;
}

int main()
{
struct Elem *list1 = NULL;
struct Elem *list2 = NULL;
init_random();
int i;
for (i = 0; i < N ; i++ )
insertEnd(randomDouble(), &list1);
for (i=0; i< M; i++ )
insertEnd(randomDouble(), &list2);
linkAndDisplay(&list1, &list2);
printf("Maximul din listele unite este %f\n", max(list1));
printf("Minimul din listele unite este %f\n", min(list2));
return 0;
}
