#include <stdio.h>

int main() {

    // int = números inteiros (sem vírgula)
    int idade = 25;
    int ano = 2024;
    int temperatura = -10;

    // float = números com vírgula (até ~6 casas decimais)
    float altura = 1.75;
    float preco = 19.99;

    printf("=== INT ===\n");
    printf("Idade: %d\n", idade);
    printf("Ano: %d\n", ano);
    printf("Temperatura: %d graus\n", temperatura);

    printf("\n=== FLOAT ===\n");
    printf("Altura: %.2f metros\n", altura);
    printf("Preco: R$ %.2f\n", preco);

    return 0;
}