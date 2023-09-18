#include <stdio.h>
#include <stdlib.h>

int main(void){
  int opcao;
  float total;

    printf("1 - Misto quente: R$2,50\n");
    printf("2 - Cachorro quente: R$3,00\n");
    printf("3 - Hamburguer simples: R$3,50\n");
    printf("4 - X-Egg: R$4,00\n");
    printf("5 - X-Tudo: R$5,00\n");
    printf("6 - Bebidas\n\n");
  while (0 == 0) {
    printf("opcao: ");
    scanf("%i", &opcao);

    switch (opcao)
    {
    case 1:
      total += 2.5;
      break;
    case 2:
      total += 3;
      break;
    case 3:
      total += 3.5;
      break;
    case 4:
      total += 4;
      break;
    case 5:
      total += 5;
      break;
    case 6:
        printf("1 - Refrigerante: R$2,50\n");
        printf("2 - Suco natural: R$3,50\n");
        printf("3 - Agua: R$2,00\n");
        printf("4 - Finalizar pedido\n");
        while (0 == 0)
        {
          printf("opcao: ");
          scanf("%i", &opcao);

          switch (opcao)
          {
          case 1:
            total += 2.5;
            break;
          case 2:
            total += 3.5;
            break;
          case 3:
            total += 2;
            break;
          case 4:
            printf("\nTotal da compra: R$%.2f\n", total);
            system("pause");
            return 0;
            break;

          default:
            printf("Digite uma opcao valida!\n");
            break;
          }
        }

      break;

    default:
      printf("Digite uma opcao valida!\n");
      break;
    }
  }
}