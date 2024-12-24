#include<stdio.h>

void conversor_potencia() {

int opcao;
float potencia, KW, CV, HP, W;

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
    CV = potencia/735.5;
    HP = potencia/745.7;

    printf("O Valor da potência convertida é: %.2fKW.\n", KW);
    printf("O Valor da potência convertida é: %.2fCV.\n", CV);
    printf("O Valor da potência convertida é: %.2fHP.\n", HP);

    break;

    case 2:
    
    printf("Digite o valor da potencia em KW.\n");
    scanf("%f", &potencia);

    W = potencia*1000;
    CV = W/735.5;
    HP = W/745.7;

    printf("O Valor da potência convertida é %.2f W.\n", W);
    printf("O Valor da potência convertida é %.2f CV.\n", CV);
    printf("O Valor da potência convertida é %.2f HP.\n", HP);

    break;

    case 3:
    
    printf("Digite o valor da potencia em CV.\n");
    scanf("%f", &potencia);

    W = potencia*735.5;
    KW = W/1000;
    HP = W/745.7;

    printf("O valor da potência convertida é: %.2fW.\n", W);
    printf("O valor da potência convertida é: %.2fKW.\n", KW);
    printf("O valor da potência convertida é: %.2fHP.\n", HP);

    break;

    case 4:
    
    printf("Digite o valor da potencia em HP.\n");
    scanf("%f", &potencia);

    W = potencia*745.7;
    KW = W/1000;
    CV = W/735.5;

    printf("O valor da potência convertida é: %.2f W.\n", W);
    printf("O valor da potência convertida é: %.2f KW.\n", KW);
    printf("O valor da potência convertida é: %.2f CV.\n", CV);


    break;

    default:

    printf("Opção Inválida. Por favor, tente novamente. \n");

    break;

    }
    
}

int main(){

conversor_potencia();
return 0;

}

   
