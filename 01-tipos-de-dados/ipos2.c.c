#include <stdio.h>

int main() {
// double = números com virgula mais precisos que o float (até 15 casas decimais)
double pi = 3.14159265358979;
double peso = 72.5500000001;
double distancia = 33440.5; // distância da terra á lua em km

// char = um único cartactere (entre aspas simples)
char letra = 'A';
char simbolo = '@';
char numero = '5';

printf("=== DOUBLE ===\n");
printf("Valor de pi: %.14f\n", pi);
printf("Valor de peso: %.10f\n", peso);
printf("Valor de distancia: %.1f\n", distancia);

printf("=== CHAR ===\n");
printf("Valor de letra: %c\n", letra);
printf("Valor de simbolo: %c\n", simbolo);
printf("Valor de numero: %c\n", numero);


    return 0;
}