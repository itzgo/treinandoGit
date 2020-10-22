#include <stdio.h>

int main(void){

float vetor[100];
int i,tamanho;

printf("Informe o tamanho do vetor\n");
scanf("%d",&tamanho);

for(i=0; i<tamanho; i++){
printf("Informe o item %d do vetor\n",i);
scanf("%f",&vetor[i]);}

for(i=0; i<tamanho; i++){
printf("O item: [%d] eh: %.2f\n",i,vetor[i]);}

return 0;}
