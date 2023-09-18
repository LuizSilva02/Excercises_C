#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    int numero1;
    int numero2;
    int resultado;
    char operacao;

    setlocale(LC_ALL, "Portuguese");
    
    printf("digite o primeiro número para calcular \n");
    scanf("%i", &numero1);
    printf("\ndigite o segundo número para calcular \n");
    scanf("%i", &numero2);
    
    printf("\nescolha uma operação:\n +\n -\n *\n / \n ^");
    scanf("%c", &operacao);
  
   
    while (operacao != '+' && operacao != '-' && operacao != '*' && operacao != '/' && operacao != '^' )
    {
        
        printf("\nescolha uma operação:\n +\n -\n *\n / \n ^ \n");
        scanf("%c", &operacao);
    }
    
    

    switch (operacao)
    {
    case '+':
        resultado = numero1 + numero2;
        printf("\nA Operação escolhida foi: Soma \nO resultado da operação é: %i", resultado);
        break;
    case '-':
        resultado = numero1 - numero2;
        printf("\nA Operação escolhida foi: Subtração \nO resultado da operação é: %i", resultado);
        break;
    case '*':
        resultado = numero1 * numero2;
        printf("\nA Operação escolhida foi: Multiplicação \nO resultado da operação é: %i", resultado);
        break;
    case '/':
        resultado = numero1 / numero2;
        printf("\nA Operação escolhida foi: Divisão \nO resultado da operação é: %i", resultado);
        break;
    case '^':
        resultado = pow(numero1,numero2);
        printf("\nA Operação escolhida foi: Potenciação \nO resultado da operação é: %i", resultado);
        break;
    default:
        break;
    }
}





  