#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 int mat[5][5],i,j;
 int valor_par=+1,valor_impar=-1;

   for(i=0;i<5;i++)
    for(j=0;j<5;j++)
      {
        printf("Digite o valor de [%d][%d] = ",i,j);
        scanf("%d", &mat[i][j]);
    }
    for (i=0; i<5; i++) { 
    for (j=0; j<5; j++) { 
    while (mat[i][j]<0) { 
    mat[i][j] = mat[i][j]*-1; 
        printf("\n""%d", mat[i][j]);
    }
    }
    }

    return 0;
}