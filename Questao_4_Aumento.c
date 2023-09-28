#include <stdio.h>
// Tudo Certo! Aceito pelo Mavin
int main(){

    char nivel;
    float salarioAtual;

    scanf("%c\n", &nivel);
    scanf("%f", &salarioAtual);

    switch (nivel)
    {
    case 'a':
        printf("R$ %.2f", salarioAtual + (salarioAtual * 5/100));
        break;
    case 'b':
        printf("R$ %.2f", salarioAtual + (salarioAtual * 7/100));
        break;
    case 'c':
        printf("R$ %.2f", salarioAtual + (salarioAtual * 8/100));
        break;
    }

    return 0;
}