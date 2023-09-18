#include<stdio.h>
#include<locale.h> 

int main()
{
    int vet[10],vetimpar[10],i,temp;

    for(i=0 ; i<10 ; i++)
        {
        printf("\nInsere um numero-->");
        scanf("%d",&temp);
        if(temp%2==0) 
                   {
                   vet[i]=temp;
                   printf("par");
                   }
        else 	   {
                   vetimpar[i]=temp;
                   printf("impar");
                   } 
        }
}