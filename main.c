/* 
 * Programa de Cálculo de Moda
 * Descrição: Programa que lê 5 números inteiros e identifica a moda
 * Linguagem: C
 * Compilador: GCC
 * Funcionalidades:
 *  - Entrada de 5 números
 *  - Contagem de repetições de cada número
 *  - Identificação da moda (número mais frequente)
 * Observações:
 *  - Considera apenas a primeira moda encontrada
 *  - Informa se nenhum número se repete
 * Data de criação: [Data atual]
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    // Configura o terminal para exibir caracteres em Português.
    setlocale(LC_ALL, "Portuguese");

    // Declaração de variáveis.
    int vetor1[5];    // Vetor para armazenar os números originais.
    int vetor2[5];    // Vetor para armazenar a contagem de repetições.
    int moda = 0;     // Variável para armazenar o índice da moda.
    int contador = 0; // Variável para contar a maior frequência.

    // Laço para entrada de dados no vetor.
    for (int i = 0; i < 5; i++)
    {
        printf("Digite um número para a posição %d do vetor: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    // Inicializa vetor2 com zeros.
    for (int i = 0; i < 5; i++)
    {
        vetor2[i] = 0;
    }

    // Contagem de repetições de cada número.
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            // Incrementa contador se números forem iguais.
            if (vetor1[i] == vetor1[j])
            {
                vetor2[i] = vetor2[i] + 1;
            }
        }
    }

    // Encontra a maior frequência.
    for (int i = 0; i < 5; i++)
    {
        if (vetor2[i] > contador)
        {
            contador = vetor2[i];
        }
    }

    // Encontra o índice do número com maior frequência.
    for (int i = 0; i < 5; i++)
    {
        if (vetor2[i] == contador)
        {
            moda = i;
        }
    }

    // Verifica e exibe a moda.
    if (contador < 2)
    {
        printf("Nenhum número se repete");
    }
    else
    {
        printf("\nA moda dos números armazenados e: %d", vetor1[moda]);
    }
    return 0;
}
