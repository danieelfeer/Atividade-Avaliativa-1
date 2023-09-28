#include <stdio.h>
// Aceito pelo Mavin, duvida
int main(){

    int senha, senhaCadastrada;
    
    scanf("%4d", &senha);
    printf("senha cadastrada: %04d\n", senha);

    senhaCadastrada == senha;
    scanf("%d", &senhaCadastrada);

    while(senha != senhaCadastrada){

        printf("senha invalida!\n");
        scanf("%d", &senhaCadastrada);
        
    } if (senha == senhaCadastrada){
        printf("senha valida!\n");
    }
    

    return 0;
}