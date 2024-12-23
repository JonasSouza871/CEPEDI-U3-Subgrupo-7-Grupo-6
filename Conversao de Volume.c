#include <stdio.h>

int main() {
    float valor, resultado;
    int origem, destino;

    printf("Digite o valor: ");
    scanf("%f", &valor);

    printf("Escolha a unidade de origem:\n");
    printf("1 - Litro\n2 - Mililitro\n3 - Metro cubico\n");
    scanf("%d", &origem);

    printf("Escolha a unidade de destino:\n");
    printf("1 - Litro\n2 - Mililitro\n3 - Metro cubico\n");
    scanf("%d", &destino);

    return 0;
}
