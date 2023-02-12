// Dado um texto, retorna todas as linhas que contiverem a sequência de caracteres “ould”

#include <stdio.h>
#include <string.h>

int fatorial(num){
    if (num==2){
        return 2;
    }else{
        return num * fatorial(num-1);
    }
}

int main(void){
    
    int num;
    scanf("%d", &num);
    printf("fatorial de %d: %d", num, fatorial(num));
    
}
