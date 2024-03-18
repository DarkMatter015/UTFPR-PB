/*
Problema: Escreva um programa que leia o valor de uma presta��o e da taxa de juros cobrada pelo atraso da
presta��o e forne�a o valor atualizado.
*/

#include <stdio.h>

int main(void){

    // declara��o de vari�veis do tipo float (n�mero quebrado)
    float prestacao, taxa, valorTotal;

    // entrada de dados
    printf("Informe o valor da prestacao: ");
    scanf("%f", &prestacao);

    printf("Informe o valor da taxa (10 para 10%%): ");
    scanf("%f", &taxa);

    // processamento de dados

    taxa /= 100;

    valorTotal = prestacao + (taxa * prestacao);

    // saida de dados
    printf("Valor total: R$ %.2f", valorTotal);

    return 0;
}
