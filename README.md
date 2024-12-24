# Conversor de Unidades Multifunção

## Descrição

Este projeto é um programa em C que oferece múltiplas funcionalidades de conversão de unidades, como temperaturas, volumes, potências, comprimentos, tempos e bits/bytes. Ideal para estudantes, profissionais ou qualquer pessoa que precise de um utilitário rápido e eficiente para conversões.

## Funcionalidades

- **Conversor de Temperatura**: Celsius, Fahrenheit e Kelvin.
- **Conversor de Volume**: Litros, mililitros e metros cúbicos.
- **Conversor de Potência**: Watts, KW, HP e CV.
- **Conversor de Tempo**: Segundos, minutos e horas.
- **Conversor de Comprimento**: Metros, centímetros e milímetros.
- **Conversor de Bits e Bytes**: Bits, bytes, kilobytes, megabytes, gigabytes e terabytes.
- Menu interativo para fácil navegação entre os conversores.

## Estrutura do Projeto

```
📦 ConversorDeUnidades
├── temperaturas.h         # Conversor de temperaturas
├── ConversaoDeVolume.h    # Conversor de volumes
├── ConversorPotencia.h    # Conversor de potências
├── conversorbytes.h       # Conversor de bits e bytes
├── conversorcc.h          # Conversor de comprimentos
├── conversordetempo.h     # Conversor de tempo
├── interface.c            # Menu interativo principal
```

## Como Usar

1. Clone o repositório:
```bash
git clone https://github.com/usuario/conversor-de-unidades.git
```

2. Compile o programa:
```bash
gcc interface.c -o conversor
```

3. Execute o programa:
```bash
./conversor
```

4. Siga as instruções no menu interativo para realizar as conversões.

## Dependências

- Compilador C (ex.: GCC)

## Funcionalidades por Arquivo

### temperaturas.h
```c
#include <stdio.h>
void conversor_temperaturas(){
    int opcao;
    float temperatura, resultado;
    // Código para conversão de temperaturas
}
```

### ConversaoDeVolume.h
```c
#include <stdio.h>
void ConverterVolume() {
    int opcao;
    float Medida, Litro, Mililitro, MetroCubico;
    // Código para conversão de volume
}
```

### ConversorPotencia.h
```c
#include <stdio.h>
void conversor_potencia() {
    int opcao;
    float potencia, KW, CV, HP, W;
    // Código para conversão de potência
}
```

### conversorbytes.h
```c
#include <stdio.h>
#include <math.h>
void converterBytes() {
    double valor;
    char unidadeOrigem;
    // Código para conversão de bits e bytes
}
```

### conversorcc.h
```c
#include <stdio.h>
void ConverterComprimento() {
    int opcao;
    float Medida, Metro, Centimetro, Milimetro;
    // Código para conversão de comprimento
}
```

### conversordetempo.h
```c
#include <stdio.h>
void conversor_min() {
    int n, opcao;
    float conversor, conversor2;
    // Código para conversão de tempo
}
```

### interface.c
```c
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
        printf("1 - Converter Bits\n");
        printf("2 - Converter Volume\n");
        printf("3 - Converter Unidades de Potencia\n");
        printf("4 - Converter Unidades de Tempo\n");
        printf("5 - Converter Temperatura\n");
        printf("6 - Converter Comprimento\n");
        printf("7 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                converterBytes();
                break;
            case 2:
                ConverterVolume();
                break;
            case 3:
                conversor_potencia();
                break;
            case 4:
                conversor_min();
                break;
            case 5:
                conversor_temperaturas();
                break;
            case 6:
                ConverterComprimento();
                break;
            case 7:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while(opcao != 7);
    return 0;
}
```

## Licença

Este projeto está licenciado sob a Licença MIT. Veja o arquivo `LICENSE` para mais detalhes.

## Contribuição

Sinta-se à vontade para contribuir! Para isso:

1. Faça um fork do projeto.
2. Crie uma branch para sua feature:
```bash
git checkout -b minha-feature
```

3. Faça commit das mudanças:
```bash
git commit -m 'Adicionei minha feature'
```

4. Faça um push para a branch:
```bash
git push origin minha-feature
```

5. Abra um Pull Request.

## Contato

- **Autor**: Seu Nome
- **E-mail**: seuemail@example.com
