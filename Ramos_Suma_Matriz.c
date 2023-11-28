// Suma de matrices
// Usuario Ingrese dimenciones de la matriz
// #aleatorios entre 0 y 100
// Imprima las matrices
// Colocamos las bibliotecas que se utilizaran para el codigo
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // ingreso y reconocimiento de variables y generacion del codigo
    int n, m;
    // Escaneamos la dimension de la matriz que ingrese el usuario
    printf("Ingrese el valor para filas: ");
    scanf("%d", &n);
    printf("Ingrese el valor para columnas: ");
    scanf("%d", &m);
    // Agregamos la matriz con los numeros aliatorios y la imrpimimos
    int matrix1[n][m];
    printf("La primera matriz es: \n");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            matrix1[i][j] = rand() % 101;
            ;
            printf("%d\t", matrix1[i][j]);
        }
    }
    // Colocamos la segunada matriz con numeros aleatorios que se van a sumar y la imprimimos
    int matrix2[m][n];
    printf("\n");
    printf("\nLa segunda matriz es: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix2[i][j] = rand() % 101;
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    // Colocamos la tercera matriz para que guarde el resultado matricial y imprimimos las misma
    int matrixresult[n][m];
    printf("\n");
    printf("\nEl resultado de la suma de las matrices es : \n ");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            matrixresult[i][j] = matrix1[i][j] + matrix2[i][j];
            // Imprimimos la matriz resultante
            printf("%d\t", matrixresult[i][j]);
        }
    }
    return 0;
}