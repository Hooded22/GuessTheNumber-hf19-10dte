#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int n = (rand() % 100) + 1;
    int s = 1;

    char w = 0;

    do
    {
        printf("Podaj liczbe: ");
        int l;
        scanf("%d", &l);
        
        if (l > n)
        {
            printf("Za duzo!\n");
            s++;
        }
        else if (l < n)
        {
            printf("Za malo!\n");
            s++;
        }
        else
        {
            printf("Wygrales!\n Za " + s + " razem");
            w = 1;
        }

    }
    while (w == 0);
}