#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    int a = 20;

    while (a >=11)
    {
        printf("\n%d", a);

        a = a - 1;
    }
    do{
        printf("\n%d", a);

        a = a - 1;
    }while (a >=11);
}