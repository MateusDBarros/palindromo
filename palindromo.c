#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int palindromo(char *string);
int main(void)
{
    //Cria as frases de teste
    char frase1[] = "roma";
    char frase2[] = "tenet";
    char frase3[] = "banana";
    char frase4[] = "osso";

    //If-Else para checar o valor da função e printar o resultado
    if (palindromo(frase1))
        printf("A palavra - %s - e um Palindromo\n", frase1);
    else
        printf("A palavra - %s - nao e um Palindromo\n", frase1);

    printf("\n");

    if (palindromo(frase2)) 
        printf("A palavra - %s - e um Palindromo\n", frase2);
    else 
        printf("A palavra - %s - nao e um Palindromo\n", frase2);

    printf("\n");

    if (palindromo(frase3))
        printf("A palavra - %s - e um Palindromo\n", frase3);
    else
        printf("A palavra - %s - nao e um Palindromo\n", frase3);

    printf("\n");

    if (palindromo(frase4))
        printf("A palavra - %s - e um Palindromo\n", frase4);
    else
        printf("A palavra - %s - nao e um Palindromo\n", frase4);

}

//Função para checar o palindromo
int palindromo(char *string)
{
    int size = strlen(string); //Tamanho da palavra

    //Pegando o valor do meio, pois se ate a metade as letras forem igual, não há necessidade de checar o resto
    int meio = size / 2;

    //Loop para checar cada letra da frase e retornar falso caso forem diferentes ou verdadeiro caso iguais
    for(int i = 0; i < meio; i++)
    {
        if(string[i] != string[size - i - 1]) return false;

        else return true;
    }
}
