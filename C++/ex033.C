#include<stdio.h>
 int main()
{
int i,num[10],faz_parte,n_faz;

faz_parte =0; 
n_faz = 0; 
printf(" \n Digite os numeros para verificar \n");
for(i=0;i<10;i++)
   {
     scanf("%d",&num[i]); 
    } 
  for(i=0;i<10;i++) 
   {
      if(num[i]>=10 && num[i]<=50) 
       {
         faz_parte= faz_parte + 1; 
        } else
          n_faz= n_faz + 1;
    }
printf(" \n %d numeros fazem parte do intervalo[10,50] \n",faz_parte); 
printf(" \n %d numeros nao fazem parte do intervalo[10,50]",n_faz);
return 0;
}