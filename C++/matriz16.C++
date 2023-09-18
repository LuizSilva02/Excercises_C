#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
main()
{
 int lin,col, tab;
 int mat[3][3], mat1[3][3];
 for (lin=0; lin<3; lin++)
 {
 for (col=0; col<3;col++)
 {
 printf("Digite os valores da matriz: ",lin+1,col+1);

 scanf("%d", &mat[lin][col]);
 }
 }

 printf("Matriz original\n");
 for (lin=0;lin<=2;lin++)
 {
 for (col=0;col<3;col++)
 printf("%d\t",mat[lin][col]);
 printf("\n\n");
 }


 for (lin=0;lin<=2;lin++)
 for (col=0;col<3;col++)
 mat1[lin][col] = (mat[lin][col])*2;

 printf("\n\nMatriz com elementos multiplicados por 2\n\n");
 for (lin=0;lin<=2;lin++)
 {
 for (col=0;col<3;col++)
 printf("%d\t",mat1[lin][col]);
 printf("\n\n");
 }
 printf("\n\n");
 system("pause");
 return 0;
}
