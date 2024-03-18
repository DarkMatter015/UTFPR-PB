/*
Problema: Um viajante de carro far� o trajeto entre duas cidades e ao t�rmino da viagem deseja saber:
a) Quantas vezes foi necess�rio abastecer o carro (use a fun��o ceil() da biblioteca math.h para arredondar o
valor para cima).
b) Quantos litros foram consumidos para percorrer a dist�ncia indicada.
c) Quantos litros restaram no tanque ap�s a chegada ao destino.
Fa�a um programa que leia a dist�ncia entre as duas cidades, a capacidade do tanque e o consumo m�dio
do ve�culo, calcule e mostre as informa��es solicitadas.
*/

#include <stdio.h>

#include <math.h>

int main(void){

    // declara��o de vari�veis do tipo float (n�mero quebrado)
    float distancia, tanque, consumoMedio, litrosNecessario, n_abastecimento;

    // entrada de dados
    printf("Informe a distancia (em Km) percorrida entre as cidades: ");
    scanf("%f", &distancia);

    printf("Informe a capacidade maxima do tanque de combustivel do veiculo: ");
    scanf("%f", &tanque);

    printf("Informe o consumo medio (em Km por litro) do veiculo: ");
    scanf("%f", &consumoMedio);

    // processamento de dados
    litrosNecessario = distancia / consumoMedio;

    // saida de dados
    printf("\nForam necesarios %.1f litros de combustivel para percorrer o trajeto.\n", litrosNecessario);

    // processamento de dados
    n_abastecimento = litrosNecessario / tanque;

    // saida de dados
    printf("\nForam necesario abastecer o veiculo %.0f vezes.\n", ceil(n_abastecimento));

    // processamento de dados
    tanque = tanque * ceil(n_abastecimento) - litrosNecessario;

    // saida de dados
    printf("\nRestou no tanque de combustivel %.1f litros.\n", tanque);

    return 0;
}
