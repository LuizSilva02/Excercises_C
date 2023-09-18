#include<stdio.h>
int main()
{
 int matriz[3][3],i,j;
 int soma_par = 0;

   for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      {
        printf("Digite o valor de [%d][%d] = ",i,j);
        scanf("%d", &matriz[i][j]);
       } 
       printf("\n  Valores originais da matriz\n");     
    for(i=0;i<3;i++)
   {         
    for(j=0;j<3;j++)           
    printf("%d ",matriz[i][j]);         
    printf("\n");     
  }   
   for(i=0;i<3;i++)         
  for(j=0;j<3;j++)
  {
    if(matriz[i][j]%2==0)
     {
       soma_par=soma_par+matriz[i][j];
     }
  }               
   /*Agora, vamos exibir os valores após a verificação */     
   printf("\n A soma dos elementos par =%d \n",soma_par);
     
 return 0; 
}  
  
