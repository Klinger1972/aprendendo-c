#include <stdio.h>

int main () {

int numero = 1; // começa com 1 para entrar no loop
int soma = 0; // acumulador da soma, começa com 0

printf("=== Some numeros até digitar 0 ===\n"); // continua pedindo enquanto o usuario não digitar 0

while (numero != 0) { // condição de parada é quando o numero for igual a 0
    printf("Digite um numero (0 para sair): ");
    scanf("%d", &numero); // lẽ o numero digitado  pelo usuario

    soma += numero; // acumula a soma dos numeros digitados
    }

    printf("\nSoma total: %d\n", soma); // exibe a soma total dos numeros digitados

return 0;

}