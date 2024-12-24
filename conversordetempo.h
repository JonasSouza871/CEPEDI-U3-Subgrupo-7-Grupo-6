#include <stdio.h>

void conversor_min() {
    int n, opcao;
    float conversor, conversor2;

    printf("Digite o número que deseja converter: ");
    scanf("%d", &n);

    printf("Digite a forma de como você quer converter esse número:\n");
    printf("1 - Segundos\n");
    printf("2 - Minutos\n");
    printf("3 - Horas\n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("%d segundos\n", n);
        break;
    case 2:
        conversor = n / 60.0;
        printf("%.2f minutos\n", conversor);
        break;
    case 3:
        conversor2 = n / 3600.0;
        printf("%.2f horas\n", conversor2);
        break;
    default:
        printf("Opção inválida\n");
    }
}

