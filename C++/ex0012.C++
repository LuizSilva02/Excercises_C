#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    int dia;
    int mes;
    int ano;
    
    setlocale(LC_ALL,"portuguese");

    printf("Digite uma data no formato dd/mm/aaaa \n");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    switch (mes)
    {
    case 1:
        printf("\n %i de Janeiro de %i.", dia, ano);
        break;
    case 2:
        printf("\n %i de Fevereiro de %i.", dia, ano);
        break;
    case 3:
        printf("\n %i de Março de %i.", dia, ano);
        break;
    case 4:
        printf("\n %i de Abril de %i.", dia, ano);
        break;
    case 5:
        printf("\n %i de Maio de %i.", dia, ano);
        break;
    case 6:
        printf("\n %i de Junho de %i.", dia, ano);
        break;
    case 7:
        printf("\n %i de julho de %i.", dia, ano);
        break;
    case 8:
        printf("\n %i de agosto de %i.", dia, ano);
        break;
        case 9:
        printf("\n %i de setembro de %i.", dia, ano);
        break;
    case 10:
        printf("\n %i de outubro de %i.", dia, ano);
        break;
    case 11:
        printf("\n %i de novembro de %i.", dia, ano);
        break;
    case 12:
        printf("\n %i de dezembro de %i.", dia, ano);
        break;
    default:
        break;
    }
}