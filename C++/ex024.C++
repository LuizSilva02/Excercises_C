#include <stdio.h>
   
    int main(void)
    {
      int i, j;
       for (i = 2; i <= 10; i = i + 1)
       {
           for (j = 2; j <= 10; j = j + 1)
             printf("%2d x %2d = %3d\n", j, i, i * j);
          printf("\n");
      }
       return 0;
}