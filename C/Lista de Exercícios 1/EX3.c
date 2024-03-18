/*
Problema: Um professor atribui pesos de 1 a 3 para as notas de tr�s avalia��es, respectivamente. Fa�a um programa
que receba as notas e calcule e mostre a m�dia ponderada. A m�dia e as notas ser�o valores do tipo float.
M�dia Ponderada = (nota1 * 1 + nota2 * 2 + nota3 * 3) / (1 + 2 + 3)
*/

#include <stdio.h>

int main(void){

    // declara��o de vari�veis do tipo float (n�mero quebrado)
    float nota1, nota2, nota3, media;

    // entrada de dados
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    // processamento de dados
    media = (nota1 * 1 + nota2 * 2 + nota3 * 3) / (1 + 2 + 3);

    // saida de dados
    printf("Media ponderada: %.1f", media);

    return 0;
}
