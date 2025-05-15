#include <stdio.h>

void suma_diagonales(int n, int matriz[n][n], int principal, int secundaria) {

	//Iniciar los valores en 0
    principal = 0;
    secundaria = 0;
    
    //Se recorre la matriz y se suma al valor de principal o secundaria

   for (int i = 0; i < tamaño; i++) {
        sumaPrincipal += matriz[i][i]; // Diagonal principal
        sumaSecundaria += matriz[i][tamaño - 1 - i]; // Diagonal secundaria
    }
}

void imprimir_matriz(int n, int matriz[n][n]) {
   //Se recorre toda la matriz para imprimirla
       	for(int i = 0; i < n; i++) {
       	 for(int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    //Prueba 1
    int matriz1[2][2] = {
        {1, 2},
        {3, 4}
    };
    int diag_principal1, diag_secundaria1;
    suma_diagonales(2, matriz1, &diag_principal1, &diag_secundaria1);
    
     printf("Caso 1: Matriz 2x2\n");
   
     printf("Matriz 1:\n");
     imprimir_matriz(2, matriz1);
     printf("Diagonal principal: %d\n", diag_principal1);
     printf("Diagonal secundaria: %d\n", diag_secundaria1);
     printf("Suma total: %d\n\n", diag_principal1 + diag_secundaria1);

    //Prueba 2
    int matriz2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int diag_principal2, diag_secundaria2;
    suma_diagonales(3, matriz2, &diag_principal2, &diag_secundaria2);
   
    printf("Caso 2: Matriz 3x3\n");
    printf("Matriz 2:\n");
    imprimir_matriz(3, matriz2);
    printf("Diagonal principal: %d\n", diag_principal2);
    printf("Diagonal secundaria: %d\n", diag_secundaria2);
    printf("Suma total: %d\n\n", diag_principal2 + diag_secundaria2);

    //Prueba 3
    int matriz3[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int diag_principal3, diag_secundaria3;
    suma_diagonales(4, matriz3, &diag_principal3, &diag_secundaria3);
   
    printf("Caso 3: Matriz 4x4\n");
    printf("Matriz 3:\n");
    imprimir_matriz(4, matriz3);
    printf("Diagonal principal: %d\n", diag_principal3);
    printf("Diagonal secundaria: %d\n", diag_secundaria3);
    printf("Suma total: %d\n", diag_principal3 + diag_secundaria3);

    return 0;
}
