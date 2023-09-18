#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include <math.h>
main()
 {
 float percurso;
 char tipo;
printf("Informe o tipo do carro: ");
 scanf("%c", &tipo);
 printf("\nInforme o percurso do carro: ");
 scanf("%f",&percurso);
 if (tipo == 'a' || tipo == 'A')
 printf("O consumo estimado do carro A sera %3.2f\ litros.\n",percurso/8);
 else
 if (tipo == 'b' || tipo == 'B')
 printf("O consumo estimado do carro A sera %3.2f litros.\n",percurso/9);
 else
 if (tipo == 'c' || tipo == 'C')
 printf("O consumo estimado do carro A sera %3.2f litros.\n",percurso/12);
 system("pause");
 return 0;
 }
