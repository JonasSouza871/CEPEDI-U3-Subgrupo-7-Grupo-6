#include<stdio.h>

void conversor_potencia(){

int opcao;
float potencia, KW, CV, HP;

system("chcp 65001>nul"); 

printf("\n ------------------ Conversor de Potencias -----------------------\n");
printf("Escolha a base que você quer iniciar a conversão.\n");
printf("1 - Watts.\n");
printf("2 - KW.\n");
printf("3 - CV.\n");
printf("4 - HP.\n");

scanf("%d", &opcao);

switch (opcao){
    case 1:
    
    printf("Digite o valor da potencia em W.\n");
    scanf("%f", &potencia);

    KW = potencia/1000;
    CV = potencia/735,5;
    HP = potencia/745,7;

    printf("O Valor é: %.3f KW\n", KW);
    printf("O Valor é: %.2f CV\n", CV);
    printf("O Valor é: %.2f HP\n", HP);

    break;

default:
    break;
}


    return 0;



}