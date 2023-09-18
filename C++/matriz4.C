#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,m[3][3];
    //dois fors para ficar no estilo de matriz
    for(i=0;i<3;i++)
    for(j=0;j<3;j++){
    printf("Elemento[%i][%i]= ",i+1,j+1);
    scanf("%d",&m[i][j]);   
    }

    printf("\n::: valores originais :::\n");
    for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    printf("%d ",m[i][j]);
    printf("\n");
}
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    m[i][j] = m[i][j]*5;
    printf("\n::: Valores Multiplicados por 5:::\n");

    for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    printf("%d ",m[i][j]);
    printf("\n");
}
}