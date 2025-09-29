/*

    Name: MultiplicaMatrizes.cpp

    Author: Fabio.Fontes

    Date: 29/09/25 10:18

    Description: Programa que faz a multiplicação de duas matrizes

*/

#include <stdio.h>
 
void imprimirMatriz(int M[3][3], int linhas, int colunas);
 
int main()

{

    int matA[3][3], matB[3][3], matC[3][3];

    int m, n, p; 

    int i, j, k;
 
 
    puts("Digite a ordem da primeira matriz: ");

    scanf("%d %d", &m, &n);
 
    puts("Digite da segunda matriz: ");

    scanf("%d", &p);
 
 
    puts("Digite os elementos da primeira matriz: ");

    for(i = 0; i < m; i++)

        for(j = 0; j < n; j++)

            scanf("%d", &matA[i][j]);
 
    puts("Digite os elementos da segunda matriz: ");

    for(i = 0; i < n; i++)

        for(j = 0; j < p; j++)

            scanf("%d", &matB[i][j]);
 
 
    for(i = 0; i < m; i++) {

        for(j = 0; j < p; j++) {

            matC[i][j] = 0;

            for(k = 0; k < n; k++) {

                matC[i][j] += matA[i][k] * matB[k][j];

            }

        }

    }
 
    puts("\nPrimeira matriz:");

    imprimirMatriz(matA, m, n);
 
    puts("Segunda matriz:");

    imprimirMatriz(matB, n, p);
 
    puts("Multiplicacao das matrizes:");

    imprimirMatriz(matC, m, p);
 
    return 0;

}
 
void imprimirMatriz(int M[3][3], int linhas, int colunas)

{

    for(int i = 0; i < linhas; i++) {

        for(int j = 0; j < colunas; j++) {

            printf("%d\t", M[i][j]);

        }

        puts("");

    }

    puts("");

}

 
