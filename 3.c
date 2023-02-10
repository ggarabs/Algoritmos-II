#include <stdio.h>

int main(){
    float celsius, fahrenheit;

    printf("Qual a temperatura em Celsius? ");
    scanf("%f", &celsius);

    fahrenheit = (9.0/5)*celsius + 32;

    printf("Uma temperatura de %.2f graus Celsius equivale a %.2f graus Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}