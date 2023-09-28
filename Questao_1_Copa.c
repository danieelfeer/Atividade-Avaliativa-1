#include <stdio.h>
// Tudo Certo! aceito pelo Mavin
int main(){

    int ano;
    

    scanf("%d", &ano);

    switch (ano)
    {
     // Olimpiadas    
    case 1916:
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
        break;

    case 1940:
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
        break;

    case 1944:
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
        break;

     // Copa do Mundo
    case 1942:
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
        break;

    case 1946:    
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
        break;

    default:
        
    if (ano >= 1896 && ano %4 == 0){
        printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", ano);
    } else if (ano >= 1930 && ano%4 == 2){
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
    } else{
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
    }
    
    break;
    }

    

    return 0;
}