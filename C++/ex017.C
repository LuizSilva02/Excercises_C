#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    int a = 10;

    while (a <=19)
    {
        printf("\n%d", a);

        a = a + 1;
    }
    do{
        printf("\n%d", a);

        a = a + 1;
    }while (a <=20);
}