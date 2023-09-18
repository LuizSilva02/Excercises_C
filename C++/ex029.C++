#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int main()
{
    int i,x; 
    int vet[x];
    float soma=0,media; 
    int maior,menor; 


    printf("\n\nAs 5 variaveis aleatorias sao:\n");
    srand(time(NULL)); 
    for(i=0;i<5;i++) 
    {   x=rand()%100; 
        printf("%d ",x); 
        soma=soma+x;} 
    printf("\n\n------MEDIA------");
    media=soma/5.0;
    printf("\nA media e:%.2f",media); 
    printf("\n\n------MAIOR E MENOR------"); 
    maior=vet[0];
    menor=vet[0];
    for(i=0;i<5;i++)
    {   if(menor>vet[i])
        {   menor=vet[i];}
        if(maior<vet[i])
        {   maior=vet[i];}}
    printf("\nO maior numero e:%.2d e o menor:%.2d",maior,menor); 

    return 0;
}