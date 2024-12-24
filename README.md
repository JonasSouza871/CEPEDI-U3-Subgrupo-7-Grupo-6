# 🔄 Conversor de Unidades Multifunção 

Este projeto é um programa em C que oferece múltiplas funcionalidades de conversão de unidades, como temperaturas, volumes, potências, comprimentos, tempos e bits/bytes. Ideal para estudantes, profissionais ou qualquer pessoa que precise de um utilitário rápido e eficiente para conversões.

## ⭐ Funcionalidades Principais

- 🌡️ **Conversor de Temperatura**: Celsius, Fahrenheit e Kelvin
- 🧪 **Conversor de Volume**: Litros, mililitros e metros cúbicos
- ⚡ **Conversor de Potência**: Watts, KW, HP e CV
- ⏰ **Conversor de Tempo**: Segundos, minutos e horas
- 📏 **Conversor de Comprimento**: Metros, centímetros e milímetros
- 💾 **Conversor de Bits e Bytes**: Bits, bytes, kilobytes, megabytes, gigabytes e terabytes
- 📱 Menu interativo para fácil navegação entre os conversores

## 📂 Estrutura do Projeto 

```
📦 ConversorDeUnidades
├── 🌡️ temperaturas.h         # Conversor de temperaturas
├── 🧪 ConversaoDeVolume.h    # Conversor de volumes
├── ⚡ ConversorPotencia.h    # Conversor de potências
├── 💾 conversorbytes.h       # Conversor de bits e bytes
├── 📏 conversorcc.h          # Conversor de comprimentos
├── ⏰ conversordetempo.h     # Conversor de tempo
└── 🖥️ interface.c            # Menu interativo principal
```

## 🚀 Como Usar

1️⃣ Clone o repositório:
```bash
git clone https://github.com/usuario/conversor-de-unidades.git
```

2️⃣ Compile o programa:
```bash
gcc interface.c -o conversor
```

3️⃣ Execute o programa:
```bash
./conversor
```

4️⃣ Siga as instruções no menu interativo para realizar as conversões.

## 🛠️ Dependências

- 💻 Compilador C (ex.: GCC)

## 📚 Funcionalidades por Arquivo

### 🌡️ temperaturas.h
```c
#include <stdio.h>
void conversor_temperaturas(){
    int opcao;
    float temperatura, resultado;
    // Código para conversão de temperaturas
}
```

### 🧪 ConversaoDeVolume.h
```c
#include <stdio.h>
void ConverterVolume() {
    int opcao;
    float Medida, Litro, Mililitro, MetroCubico;
    // Código para conversão de volume
}
```

### ⚡ ConversorPotencia.h
```c
#include <stdio.h>
void conversor_potencia() {
    int opcao;
    float potencia, KW, CV, HP, W;
    // Código para conversão de potência
}
```

### 💾 conversorbytes.h
```c
#include <stdio.h>
#include <math.h>
void converterBytes() {
    double valor;
    char unidadeOrigem;
    // Código para conversão de bits e bytes
}
```

### 📏 conversorcc.h
```c
#include <stdio.h>
void ConverterComprimento() {
    int opcao;
    float Medida, Metro, Centimetro, Milimetro;
    // Código para conversão de comprimento
}
```

### ⏰ conversordetempo.h
```c
#include <stdio.h>
void conversor_min() {
    int n, opcao;
    float conversor, conversor2;
    // Código para conversão de tempo
}
```

## 🤝 Contribuição

Sinta-se à vontade para contribuir! Para isso:

1️⃣ Faça um fork do projeto.

2️⃣ Crie uma branch para sua feature:
```bash
git checkout -b minha-feature
```

3️⃣ Faça commit das mudanças:
```bash
git commit -m 'Adicionei minha feature'
```

4️⃣ Faça um push para a branch:
```bash
git push origin minha-feature
```

5️⃣ Abra um Pull Request.

## 📞 Contato

- 👤 **Autor**: Seu Nome
- 📧 **E-mail**: seuemail@example.com

---
*Feito com ❤️ pela comunidade*
