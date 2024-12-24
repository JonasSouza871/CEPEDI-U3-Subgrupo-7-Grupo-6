#include<stdio.h>
void conversor_min(int n,int opcao){
float conversor,conversor2;
printf("digite a forma de como voce quer converter esse numero:\n1-segundos\n2-minutos\n3-horas\n");
scanf("%d",&opcao);
switch(opcao){
case 1:
    printf("%d segundos \n",n);
 break;
case 2:
    conversor= n/60.0;
    printf("%.2f minutos \n",conversor);
break;
case 3:
    conversor2= n/3600.0;
    printf("%.2f horas \n",conversor2);
break;
 default:
 printf("opcao invalida \n");
}
}
