/*
Problema: O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do distribuidor
e a percentagem dos impostos (ambas aplicadas sobre o custo de f�brica). Escrever um programa para, a
partir do custo de f�brica do carro, calcular e mostrar o custo ao consumidor.
*/

#include <stdio.h>

int main(void){

    // declara��o de vari�veis do tipo float (n�mero quebrado)
    float custoFabrica, percDistribuidor, percImposto, custoFinal;

    // entrada de dados
    printf("Informe o custo de fabrica de um automovel: R$ ");
    scanf("%f", &custoFabrica);

    printf("Informe a percentagem do distribuidor (o a 100): ");
    scanf("%f", &percDistribuidor);

    printf("Informe a percentagem do imposto (o a 100): ");
    scanf("%f", &percImposto);

    // processamento de dados

    percDistribuidor /= 100;

    percImposto /= 100;

    custoFinal = custoFabrica + (custoFabrica * percDistribuidor + custoFabrica * percImposto);

    // saida de dados

    printf("\nO custo do veiculo ao consumidor he: R$ %.2f", custoFinal);

    return 0;
}
