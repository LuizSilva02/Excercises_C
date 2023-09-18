#include <stdio.h>
#include <conio.h>
int main (void )
{
  int codigo;
  int valor;

  
  printf ("Digite um valor de 1 a 4: ");
  scanf("%d", &codigo);

  printf ("Digite o valor da sua compra: ");
   scanf("%d", &valor);
  
  switch ( codigo )
  {
    case 1:
    printf ("O valor foi de %d \n", valor - (valor / 0,03));
    break;
    
    case 2 :
    printf ("O valor será de %d \n", valor - (valor / 0,02));
    break;
    
    case 3 :
    printf ("O valor será de %d \n", valor - (valor / 0,01));
    break;
    
    case 4 :
    printf ("O valor será sem desconto \n" );
    break;  
    
    default :
    break;
  }
  
  getch();
  return 0;
}