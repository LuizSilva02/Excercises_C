#include <cstdio>
#include <stdio.h>
int main()
 {
 int x, y;
 printf("Digite os valores para x e y: ");
 scanf("%d %d", &x, &y);


printf("\nTabuada de multiplicação!\n\n");
printf(" |");
 for (int j = x; j <= y; j++)
printf("%3d ", j);
printf("\n----");
 for (int j = x; j <= y; j++)
 printf("----");
 printf("\n");


for (int i = x; i <= y; i++) {
 printf("%2d | ", i);
 for (int j = x; j <= y; j++)
 printf("%3d ", i*j);
 printf("\n");
 }
 return 0;
 }