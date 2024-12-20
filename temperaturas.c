#include <stdio.h>

void conversor_temperaturas(){
    int opcao;
    float temperatura, resultado;
    printf("\n ------------------ Conversor de temperaturas -----------------------");
    printf("\nQual a conversão que deseja realizar?");
    printf("\n1. Celsius para Fahrenheit");
    printf("\n2. Celsius para Kelvin");
    printf("\n3. Fahrenheit para Celsius");
    printf("\n4. Fahrenheit para Kelvin");
    printf("\n5. Kelvin para Celsius");
    printf("\n6. Kelvin para Fahrenheit");

    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("Digite a temperatura correspondente em Celsius: ");
        scanf("%f", &temperatura);

        resultado = (temperatura * 1.8) + 32;

        printf("\n%.2f Celsius equivalem a %.2f Fahrenheit.", temperatura, resultado);
        break;

    case 2:
        printf("\n------------- Conversor Celsius para Kelvin ------------\n");
        printf("Digite a temperatura correspondente em Celsius: ");
        scanf("%f", &temperatura);

        resultado = temperatura + 273;

        printf("\n%.2f Celsius equivalem a %.2f Kelvin.", temperatura, resultado);
        break;
    
    default:
        printf("Opção inválida. Por favor, tente novamente.\n");
        break;
    }
}