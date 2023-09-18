#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	int horas_inicio, horas_termino, duracao;

	printf("Digite a hora do inicio da Partida: ");
	scanf("%i",&horas_inicio);

	printf("Digite a hora do termino da partida: ");
	scanf("%i",&horas_termino); // erro aqui, faltou i depois do %

	if(horas_inicio >= horas_termino)
	{
		duracao = ( 24 - horas_inicio) + horas_termino;
		printf("%i",duracao);
	}

	else
	{
		duracao = horas_termino - horas_inicio;
		printf("%i",duracao);
	}

	system("PAUSE");	
	return 0;
}
