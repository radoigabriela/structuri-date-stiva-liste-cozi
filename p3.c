#include <stdio.h>
#include <stdlib.h>
#define N 16

struct Student
{
char nume[30];
char prenume[30];
int note[5];
struct Student *next, *prev;
};

void insertEnd(struct Student **list)
{
struct Student *elem = (struct Student *)malloc(sizeof(struct Student));
printf("Numele studentului: ");
fgets(elem->nume, sizeof(elem->nume), stdin);
printf("Prenumele studentului: ");
fgets(elem->prenume, sizeof(elem->prenume), stdin);
printf("Note student (max 5)\n");
int i;
for (i = 0; i < 5; i++)
{
int nota;
scanf("%d%*c", &nota);
if (nota == 0)
{break;
}
elem->note[i] = nota;
}
if (*list == NULL)
{
elem->prev = NULL;
elem->next = NULL;
*list = elem;}
else
{
struct Student *current = *list;
while (current->next != NULL)
current = current->next;
current->next = elem;
elem->prev = current;
elem->next = NULL;
}
}

void showStudent(struct Student *elem)
{
printf("Nume: %s", elem->nume);
printf("Prenume: %s", elem->prenume);
printf("Note: ");
int i;
for (i = 0; i < 5; i++)
{
if (elem->note[i] != 0)
printf("%d ", elem->note[i]);
}
printf("\n====================================\n");
}

void listStudents(struct Student *list)
{
printf("CATALOG: \n\n");
struct Student *current = list;
while (current != NULL)
{
showStudent(current);
current = current->next;
}
}

double studentAverage(struct Student *elem)
{
double average;int sum = 0;
int numb = 0;
int i;
for (i = 0; i < 5; i++)
{
if (elem->note[i] != 0)
{
sum += elem->note[i];
numb++;
}
}
average = (double)sum / numb;
return average;
}

void groupAverage(struct Student *list)
{
    double average = 0;
struct Student *current = list;
while (current != NULL)
{
average += studentAverage(current);
current = current->next;
}
average = average / N;
printf("Media grupei: %f\n", average);
}

void studentStats(struct Student *list)
{
int failed = 0;
int pass = 0;
struct Student *current = list;
while (current != NULL)
{
if (studentAverage(current) >= 5)
{pass++;
}else
{
    failed++;
}
current = current->next;
}
printf("STUDENTI PROMOVATI: %d\n", pass);
printf("STUDENTI NEPROMOVATI: %d\n", failed);
}

int main()
{
struct Student *list = NULL;
int i;
for (i = 0; i < N; i++)
{
    insertEnd(&list);
}
listStudents(list);
groupAverage(list);
studentStats(list);
return 0;
}
