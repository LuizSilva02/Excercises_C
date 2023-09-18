#include <stdio.h>
#include <conio.h>
int main (void )
{
  int valor;

  printf ("Digite um valor: ");
   scanf("%d", &valor);
    
  switch ( valor%2 )
  {
    case 0:
    printf ("O valor é par \n");
    break;
    
    case 1 :
    printf ("O valor é impar \n");
    break;

    default:
    break;
  }
  
  getch();
  return 0;
}