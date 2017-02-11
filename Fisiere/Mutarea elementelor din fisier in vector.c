#include<stdio.h>
#include<conio.h>
#include<malloc.h>

float *preluare_vector(char *nume, int*n)
{
	float *v, x;
	FILE *f;
	v = NULL;
	f = fopen(nume, "r");

	if (f)
	{
		(*n) = 0;
		fscanf(f, "%f", &x); //f=sursa; &x->se va pune el.in variabila x
		while (!feof(f)) //Cat timp nu este sfarsitul fisierului
		{
			(*n)++;
			fscanf(f, "%f", &x);
		}

		if ((*n) > 0) 
		{
			v = (float*)malloc((*n)*sizeof(float));
			rewind(f); //Se pozitioneaza cursorul la inceputul fisierului
			(*n) = 0;
			fscanf(f, "%f", &x);
			while (!feof(f))
			{
				v[(*n)] = x;
				(*n)++;
				fscanf(f, "%f", &x);
			}
		}
		fclose(f);
	}

	return v;
}

void main()
{
	float *a;
	int i, m;
	a = preluare_vector("fis1.txt", &m);
	if (!a)
	{
		printf("Fisierul nu a fost gasit!");
	}

	else
	{
		printf("Numarul de elemente este %d", m);
		for (i = 0; i < m; i++)
		{
			printf("%6.2f", *(a + i));
			free(a);
		}
	
	}

	_getch();
}