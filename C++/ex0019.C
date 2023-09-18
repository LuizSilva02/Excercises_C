#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    int a = 0;

    while (a <=18)
    {
        printf("\n%d", a);

        a = a + 2;
    }
    do{
        printf("\n%d", a);

        a = a + 2;
    }while (a <=18);
}