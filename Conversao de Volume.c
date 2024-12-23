#include <stdio.h>
#include <string.h>

void ConverterVolume() {
    int opcao;
    float Medida, Litro, Mililitro, MetroCubico;

    printf("Escolha a unidade de entrada:\n");
    printf("1 - Litro\n");
    printf("2 - Mililitro\n");
    printf("3 - Metro cubico\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            // Origem em Litro
            printf("Digite o valor em Litros: ");
            scanf("%f", &Medida);

            Mililitro = Medida * 1000;
            MetroCubico = Medida / 1000;

            printf("Convertido em Mililitros: %.2f mL\n", Mililitro);
            printf("Convertido em Metros cubicos: %.6f m³\n", MetroCubico);

            break;

        case 2:
            // Origem em Mililitro
            printf("Digite o valor em Mililitros: ");
            scanf("%f", &Medida);

            Litro = Medida / 1000;
            MetroCubico = Litro / 1000;

            printf("Convertido em Litros: %.2f L\n", Litro);
            printf("Convertido em Metros cubicos: %.6f m³\n", MetroCubico);

            break;

        case 3:
            // Origem em Metro cubico
            printf("Digite o valor em Metros cubicos: ");
            scanf("%f", &Medida);

            Litro = Medida * 1000;
            Mililitro = Litro * 1000;

            printf("Convertido em Litros: %.2f L\n", Litro);
            printf("Convertido em Mililitros: %.2f mL\n", Mililitro);

            break;

        default:
            printf("Opcao invalida.\n");
            break;
    }
}

int main() {
    ConverterVolume();
    return 0;
}
