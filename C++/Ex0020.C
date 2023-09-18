#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
        int count = 30;

        while(count >= 10)
        {
            if(count%2 == 1)
                printf("%d ",count);
            count--;
        }
}