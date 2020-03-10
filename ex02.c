/** 
 * Conversor de graus Celsius para Fahrenheit
*/

#include <stdio.h>
#include <stdlib.h>

float celsius_to_fahrenheit(float _graus_Celsius) {
    return _graus_Celsius * 9 / 5  + 32.0;
}

int main() {

    float grausCel, grausFah;

    printf("Digite a temperatura (em Celsius): \n");
    scanf("%f", &grausCel);

    grausFah = celsius_to_fahrenheit(grausCel);

    printf("%f graus Celsius correspondem a %f Fahrenheit. \n ", grausCel, grausFah);

    return 0;

}