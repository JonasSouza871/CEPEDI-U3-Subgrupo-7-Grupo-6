#include <stdio.h>
#include <math.h>

void converterBytes() {
    double valor;
    char unidadeOrigem;
    double bits, bytes, kb, mb, gb, tb;

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    printf("Digite a unidade de origem ('b' para bits, 'B' para bytes, 'K' para kilobytes, 'M' para megabytes, 'G' para gigabytes, 'T' para terabytes): ");
    scanf(" %c", &unidadeOrigem);

    switch (unidadeOrigem) {
        case 'b':
            bits = valor;
            bytes = valor / 8;
            kb = bytes / 1024;
            mb = kb / 1024;
            gb = mb / 1024;
            tb = gb / 1024;
            break;
        case 'B':
            bytes = valor;
            bits = valor * 8;
            kb = bytes / 1024;
            mb = kb / 1024;
            gb = mb / 1024;
            tb = gb / 1024;
            break;
        case 'K':
            kb = valor;
            bytes = kb * 1024;
            bits = bytes * 8;
            mb = kb / 1024;
            gb = mb / 1024;
            tb = gb / 1024;
            break;
        case 'M':
            mb = valor;
            kb = mb * 1024;
            bytes = kb * 1024;
            bits = bytes * 8;
            gb = mb / 1024;
            tb = gb / 1024;
            break;
        case 'G':
            gb = valor;
            mb = gb * 1024;
            kb = mb * 1024;
            bytes = kb * 1024;
            bits = bytes * 8;
            tb = gb / 1024;
            break;
        case 'T':
            tb = valor;
            gb = tb * 1024;
            mb = gb * 1024;
            kb = mb * 1024;
            bytes = kb * 1024;
            bits = bytes * 8;
            break;
        default:
            printf("Unidade desconhecida. Use 'b', 'B', 'K', 'M', 'G' ou 'T'.\n");
            return;
    }

    printf("\nResultados:\n");
    printf("Bits: %.2lf\n", bits);
    printf("Bytes: %.2lf\n", bytes);
    printf("Kilobytes: %.2lf\n", kb);
    printf("Megabytes: %.2lf\n", mb);
    printf("Gigabytes: %.2lf\n", gb);
    printf("Terabytes: %.2lf\n", tb);
}


