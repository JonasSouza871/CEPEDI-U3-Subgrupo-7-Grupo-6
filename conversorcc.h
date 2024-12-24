#include  <stdio.h>
#include <string.h>

    //Primeiro vou declarar as variaveis.

    void  ConverterComprimento () {
    
    int opcao;
    float Medida, Metro, Centimetro, Milimetro;

      printf("Escolha a unidade de entrada. \n");
      printf("1 - Metro \n");
      printf("2 - Centimetro \n");
      printf("3 - Milimetro \n");
      printf("Digite sua opcao: ");

      scanf("%d", &opcao);


      switch (opcao){
       case 1:

        printf("Digite o valor da medida. \n");
    scanf("%f", &Medida);

    Centimetro = Medida*100;
    Milimetro = Medida*1000;

    printf("A medida convertida em centimetro é: %.2f \n", Centimetro);
    printf("A medida convertida milimetro é: %.2f \n", Milimetro);

    break;


    case 2:

    printf("Digite o valor da medida. \n");
    scanf("%f", &Medida);

    Metro = Medida/100;
    Milimetro = Medida*10;

    printf("A medida convertida em metro é: %.2f \n", Metro);
    printf("A medida convertida em milimetro é: %.2f \n", Milimetro);

    break;

    case 3:

    printf("Digite o valor da medida. \n");
    scanf("%f", &Medida);

    Metro = Medida/1000;
    Centimetro = Medida/10;

    printf("A medida convertida em metro é: %.2f \n", Metro);
    printf("A medida convertida em centimetro é: %.2f \n", Centimetro);

    break;

    default:
    
    printf("Opcao invalida. \n");

  break;

  }
  
}

int main() {
    ConverterComprimento();
    return 0;              
}