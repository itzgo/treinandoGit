#include <stdio.h>

int main(void){
float numero1,numero2;
char operador;

printf("escolhar uma op s-soma, m-multi, t-sub, d-div\n");
scanf("%c",&operador);

printf("informe um numero\n");
scanf("%f",&numero1);
printf("informe outro numero\n");
scanf("%f",&numero2);

switch(operador){

case 's':
printf("%.4f\n",(numero1+numero2));
break;

case 'm':
printf("%.4f\n",(numero1*numero2));
break;

case 't':
printf("%.4f\n",(numero1-numero2));
break;

case 'd':
printf("%.4f\n",(numero1/numero2));
break;

default:
printf("chatooooo!\n");
}

return 0;
}
