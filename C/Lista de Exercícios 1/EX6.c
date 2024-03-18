/*
Problema: Leia dois valores A e B e efetue a troca do conte�do das duas vari�veis lidas, de forma que a vari�vel A
passe a ter o valor de B e a vari�vel B o valor de A. Mostre o conte�do das vari�veis antes e depois da troca.
*/

#include <stdio.h>

int main(void){

    // declara��o de vari�veis do tipo float (n�mero quebrado)
    int a, b, aux;

    // entrada de dados
    printf("Informe o valor de A: ");
    scanf("%d", &a);

    printf("Informe o valor de B: ");
    scanf("%d", &b);

    // saida de dados
    printf("\nAntes da troca: A=%d e B=%d", a, b);

    // processamento de dados
    aux = a;

    a = b;

    b = aux;

    // saida de dados
    printf("\nDepois da troca: A=%d e B=%d", a, b);


    return 0;
}
