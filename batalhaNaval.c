#include <stdio.h>
#include <stdlib.h>
// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
	// Nível Novato - Posicionamento dos Navios
	// Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
	char colunas[] = "ABCDEFGHIJ";
	int tabuleiro[10][10];

	int position[3] = {rand() % 7, rand() % 7, rand() % 7};

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i <= 2 && j >= 2 - i && j <= 2 + i)
			{
				tabuleiro[i][j] = 3;
			}
			else
			{
				tabuleiro[i][j] = 0;
			}
		}
	}

	for (int i = 3; i < 8; i++)
	{
		for (int j = 3; j < 8; j++)
		{
			if (j == 5 && tabuleiro[i][j] == 0)
			{
				tabuleiro[i][j] = 2;
			}
			if (i == 5 && tabuleiro[i][j] == 0)
			{
				tabuleiro[i][j] = 2;
			}
		}
	}

	int center_x = 2, center_y = 8;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (abs(center_x - i) + abs(center_y - j) <= 1 && tabuleiro[i][j] == 0)
			{
				tabuleiro[i][j] = 1;
			}
		}
	}

	printf("\n   *** TABULEIRO BATALHA NAVAL ***\n\n   ");
	for (int j = 0; j < 10; j++)
	{
		printf("%c ", colunas[j]);
	}
	printf("\n");

	for (int i = 0; i < 10; i++)
	{
		printf("%2d ", i + 1);
		for (int j = 0; j < 10; j++)
		{
			printf("%d ", tabuleiro[i][j]);
		}
		printf("\n");
	}

	// Nível Mestre - Habilidades Especiais com Matrizes
	// Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
	// Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
	// Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

	// Exemplos de exibição das habilidades:
	// Exemplo para habilidade em cone:
	// 0 0 1 0 0
	// 0 1 1 1 0
	// 1 1 1 1 1

	// Exemplo para habilidade em octaedro:
	// 0 0 1 0 0
	// 0 1 1 1 0
	// 0 0 1 0 0

	// Exemplo para habilidade em cruz:
	// 0 0 1 0 0
	// 1 1 1 1 1
	// 0 0 1 0 0

	return 0;
}
