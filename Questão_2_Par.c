#include <stdio.h>
//Tudo Certo!! Aceito pelo Mavin
int main(){

    int numero, numeroInicial, algarismos;
    int soma = 0;
    
    scanf("%d", &numero);

    numeroInicial = numero;

    if (numero %2 == 0){
        printf("%d eh par\n", numero);
    } else{
        printf("%d eh impar\n", numero);
    } 

    while (numero > 0)
    {
        algarismos = numero % 10;
        soma += algarismos;
        numero /= 10; 
    }

   if (numeroInicial == 0)
    {
        printf("A soma dos algarismos de %d eh %d\n", numeroInicial, soma);
    } else {
        printf("A soma dos algarismos de %d eh %d\n", numeroInicial, soma);   
    }

    return 0;
}