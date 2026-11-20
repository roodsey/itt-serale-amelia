#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popola(int target[], int size, int min, int max);

void aggiungiInCoda(int source[], int target[], int size, int add);

void stampa(char label[], int target[], int size);

int main()
{
    printf("time = %d\n", time(NULL));
    srand(time(NULL));

    int a[5];
    popola(a, 5, 30, 60);
    stampa("a", a, 5);
    int c[6];
    aggiungiInCoda(a, c, 5, 67);
    stampa("c", c, 6);
}

void aggiungiInCoda(int source[], int target[], int sizeSource, int add)
{
    for (int i = 0; i < sizeSource; i++)
        target[i] = source[i];
    target[sizeSource] = add;
}

void stampa(char name[], int v[], int size)
{
    printf("%s = ", name);
    for (int i= 0; i < size; i++)
        printf("[%d]", v[i]);
    printf("\n");
}

void popola(int target[], int size, int min, int max)
{
    for(int i=0; i < size; i++)
        target[i] = (rand() % (max-min)) + min;
}