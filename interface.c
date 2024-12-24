#include <stdio.h>
#include "temperaturas.h"
#include "ConversorPotencia.h"
#include "conversorbytes.h"
#include "ConversaoDeVolume.h"
#include "conversorcc.h"
#include "conversordetempo.h"

int main() {
    int opcao = 0;

    do {
        printf("\n=== MENU DE CONVERSAO ===\n");
        printf("1 - Converter Altura\n");
        printf("2 - Converter Bits\n");
        printf("3 - Converter Volume\n");
        printf("4 - Converter Unidades de Potencia\n");
        printf("5 - Converter Unidades de Tempo\n");
        printf("6 - Converter Temperatura\n");
        printf("7 - Converter Comprimento\n");
        printf("8 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
            //    ConverterAltura(); 
                break;

            case 2:
                converterBytes();
                break;

            case 3:
                ConverterVolume();
                break;

            case 4:
                conversor_potencia();
                break;

            case 5:
                conversor_min();
                break;

            case 6:
                conversor_temperaturas();
                break;

            case 7:
                ConverterComprimento();
                break;

            case 8:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }

    } while(opcao != 8);

    return 0;
}