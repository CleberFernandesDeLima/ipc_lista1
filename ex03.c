#include <stdio.h>
#include <stdlib.h>

int main() {

    int x, a, s;

    printf("Entre com um número inteiro: ");

    scanf("%d", &x);

    printf("O antecessor de %d é %d \n ", x, x-1);

    printf("O sucessor de %d é %d \n ", x, x+1);

    return 0;  

}