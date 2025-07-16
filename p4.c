#include <stdio.h>
#include <stdbool.h>

struct masina
{
	char numar_inmatriculare[10];
	char marca[30];
	char culoarea[10];
	int combustibil;
};

bool stop = false;
struct masina lista[100];
int raspuns;

void adauga_masina()
{
	for (int i = 0; i < 100; i++)
    {
		if (lista[i].numar_inmatriculare[0] == '\0')
		{
			printf("\n Numar inmatriculare: ");
			scanf("%s", lista[i].numar_inmatriculare);
			printf("\n Marca: ");
			scanf("%s", lista[i].marca);
			printf("\n Culoare: ");
			scanf("%s", lista[i].culoarea);
			while (lista[i].combustibil != 1 && lista[i].combustibil != 2) {
				printf("\n Combustibil (1/2): ");
				scanf("%d", &lista[i].combustibil);
			}
			return;
		}
	}
}

void eliminare_masina()
{
	for (int i = 0; i < 100; i++)
    {
		if (lista[i].numar_inmatriculare[0] == '\0')
		{
			if (i == 0) return;
			memset(&lista[i-1].numar_inmatriculare, 0, sizeof(lista[i-1].numar_inmatriculare));
			memset(&lista[i-1].marca, 0, sizeof(lista[i-1].marca));
			memset(&lista[i-1].culoarea, 0, sizeof(lista[i-1].culoarea));
			lista[i - 1].combustibil = NULL;
			return;
		}
	}
}

void listare_masini()
{
	for (int i = 0; i < 100; i++)
    {
		if (lista[i].numar_inmatriculare[0] == '\0')
		{
			return;
		}
		printf("%d.	%s\n", i, lista[i].numar_inmatriculare);
		printf("	%s\n", lista[i].marca);
		printf("	%s\n", lista[i].culoarea);
		if (lista[i].combustibil == 1)
		{
			printf("	%s\n", "benzina");
		}
		else if (lista[i].combustibil == 2)
		{
			printf("	%s\n", "motorina");
		}
	}
}

void listare_benzina()
{
	for (int i = 0; i < 100; i++)
        {
            if (lista[i].numar_inmatriculare[0] == '\0')
            {
                return;
            }
            if (lista[i].combustibil == 1)
            {
                printf("%d.	%s\n", i, lista[i].numar_inmatriculare);
                printf("	%s\n", lista[i].marca);
                printf("	%s\n", lista[i].culoarea);
                printf("	%s\n", "benzina");
		}
	}
}

void listare_motorina()
{
	for (int i = 0; i < 100; i++)
        {
            if (lista[i].numar_inmatriculare[0] == '\0')
            {
                return;
            }
            if (lista[i].combustibil == 2)
            {
                printf("%d.	%s\n", i, lista[i].numar_inmatriculare);
                printf("	%s\n", lista[i].marca);
                printf("	%s\n", lista[i].culoarea);
                printf("	%s\n", "motorina");
            }
        }
}

void lungime_coada()
{
	for (int i = 0; i < 100; i++)
        {
            if (lista[i].numar_inmatriculare[0] == '\0')
            {
                printf("Lungime coada: %d \n", i);
                return;
            }
	}
}

int main()
{
	while (!stop)
    {
		printf("1. Adaugare masina \n");
		printf("2. Eliminare masina \n");
		printf("3. Listare masini \n");
		printf("4. Listare masini benzina \n");
		printf("5. Listare masini motorina \n");
		printf("6. Lungime coada \n");
		printf("7. Terminare \n\n");
		scanf("%d", &raspuns);
		switch (raspuns)
		{
		case 1:
			adauga_masina();
			break;
		case 2:
			eliminare_masina();
			break;
		case 3:
			listare_masini();
			break;
		case 4:
			listare_benzina();
			break;
		case 5:
			listare_motorina();
			break;
		case 6:
			lungime_coada();
			break;
		case 7:
			stop = true;
			break;
		}
	}
	return 0;
}

