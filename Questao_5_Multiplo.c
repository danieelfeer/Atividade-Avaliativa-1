#include <stdio.h>

int main() {

    int numero1, numero2;

    scanf("%d %d", &numero1, &numero2);

    if (numero1 == numero2){
        printf("Os valores lidos sao iguais\n");
    } else{
        int maior, menor;

        if (numero1 > numero2){
            maior = numero1;
            menor = numero2;
        } else{
            maior = numero2;
            menor = numero1;
        }

        printf("%d eh maior que %d\n", maior, menor);

        if (menor == 0){
            printf("%d nao eh multiplo de %d\n", maior, menor);
        } else{
            if (maior % menor == 0){
                printf("%d eh multiplo de %d\n", maior, menor);
            } else{
                printf("%d nao eh multiplo de %d\n", maior, menor);
            }
        }
    }

    return 0;
}