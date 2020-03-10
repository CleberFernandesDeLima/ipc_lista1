#include <stdio.h>
#include <stdlib.h>

int main() {

    float x;
    float res;

    printf("Digite um número: ");

    scanf("%f", &x);

    res = x * x;

    printf("O valor de %f ao quadrao é %f \n", x, res);

    return 0;

}