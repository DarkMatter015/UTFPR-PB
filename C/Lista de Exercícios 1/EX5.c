/*
Problema: Calcular o valor do sal�rio l�quido de uma pessoa. Sobre o sal�rio bruto incidem descontos de INSS e
imposto de renda.
*/

#include <stdio.h>

int main(void){

    // declara��o de vari�veis do tipo float (n�mero quebrado)
    float salBruto, salLiquido, inss, ir;

    // entrada de dados
    printf("Informe o valor do salario bruto: R$ ");
    scanf("%f", &salBruto);

    printf("Informe o percentual de INSS: ");
    scanf("%f", &inss);

    printf("Informe o percentual de IR: ");
    scanf("%f", &ir);

    // processamento de dados
    inss /= 100;

    ir /= 100;

    salLiquido = salBruto - (salBruto * inss + salBruto * ir);

    // saida de dados
    printf("Salario liquido: R$ %.2f", salLiquido);


    return 0;
}
