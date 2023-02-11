#include <stdio.h>
#include <math.h>

int main(){
    float raio, area;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = M_PI*pow(raio, 2);

    printf("Um circulo com raio %.2f tem area igual a %.2f.\n", raio, area);

    return 0;
}