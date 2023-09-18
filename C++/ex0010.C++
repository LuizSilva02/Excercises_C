#include<stdio.h>
#include<stdlib.h>

int main(){
    char nome[20];
    int tdiaria;
    float taxa=8, servico, vdiaria = 60.00;


    printf("Sistema de taxas de servicos de um Hotel\n");
    printf("Digite o seu nome: ");
    scanf("%s",&nome);
    getchar();
    printf("Digite o total de diarias: ");
    scanf("%d",&tdiaria);
    getchar();

        if(tdiaria<15){
        vdiaria = vdiaria * tdiaria;
        taxa = taxa * tdiaria;
        servico = taxa + vdiaria;
        }
        if(tdiaria==15){
        vdiaria = vdiaria * tdiaria;
        taxa = taxa - 0.50;
        taxa = taxa * tdiaria;
        servico = taxa + vdiaria;
        }
        if(tdiaria>15){
        vdiaria = vdiaria * tdiaria;
        taxa = taxa - 2.50;
        taxa = taxa * tdiaria;
        servico = taxa + vdiaria;
        }
            printf("%i diarias %.2f, %.2f de taxa = %.2f",tdiaria, vdiaria, taxa, servico);
        getchar();
        return 0;
        }



