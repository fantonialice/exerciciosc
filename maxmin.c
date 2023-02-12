// Escreva uma função maxmin que receba dois argumentos do tipo float, max e min. Independentemente de quem seja o maior dos parâmetros no momento da chamada da função, ao final da execução de maxmin, max deve conter o maior dos argumentos e min o menor. Este resultado deve se refletir na função chamadora

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void maxmin(float *max, float *min){
    if (*max < *min){
        float aux = *max;
        *max = *min;
        *min = aux;
    }
}

int main(void){
    float *max, *min;
    max = malloc(sizeof(max));
    min = malloc(sizeof(min));
    printf("Enter max and min:\n");
    scanf("%f %f", max, min);
    printf("%f %f\n", *max, *min);
    maxmin(max, min);
    printf("%f %f\n", *max, *min);
    return 0;
}
