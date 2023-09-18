#include <stdio.h>
#include <stdlib.h>

int main(void){
  int matriz[3][5];
  int x=0, y=0, soma=0;

  for(x = 0; x < 5; x++) {
    printf("\n");
    for(y = 0; y < 2; y++) {
      printf("ALUNO %i, nota %i: ", (x + 1), (y + 1));
      scanf("%i", &matriz[x][y]);
    }
  }

  printf("\n-=--=--=--=--=--=--=--=--=--=--=--=--=--=--=--=-\n");
  for(y = 0; y < 5; y++) {
    soma = 0;
    for(x = 0; x < 2; x++) {
      soma += matriz[x][y];
    }
    matriz[2][y] = soma / 2;
  }
  printf("Media nota 1: %i\n", matriz[2][0]);
  printf("Media nota 2: %i\n", matriz[2][1]);
  printf("Media nota 3: %i\n", matriz[2][2]);
  printf("Media nota 4: %i\n", matriz[2][3]);
  printf("Media nota 5: %i\n", matriz[2][4]);
  printf("\n\n-=--=--=--=--=--=--=--=--=--=--=--=--=--=--=--=-\n");
}