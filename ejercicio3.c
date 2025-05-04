#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

int findLargestLine(int matrix [][SIZE]) {
        int maximo= 0;
//Se recorren las diagonales principales (de izquierda a derecha)
        for(int i=0; i<SIZE; i++) {
                for (int j=0; j<SIZE; j++) {
                        if (matrix[i][j] == 1) {
                                int largo = 1;
                                int x= i + 1, y = j + 1;
		//Recorrer la diagonal hacia abajo-derecha
                while (x < SIZE && y < SIZE && matrix[x][y] == 1) {
                        largo++;
                        x++;
                        y++;
                }
		//Se actualiza el máximo de 1's en diagonal
                if (largo > maximo) {
                        maximo = largo;
                        }
                }
        }
}       
//Se recorre las diagonales secundarias (de derecha a izquierda)
   for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matrix[i][j] == 1) {
                int largo2 = 1;
                int x = i + 1, y = j - 1;


                //Se recorre la diagonal hacia abajo-izquierda
                while (x < SIZE && y >= 0 && matrix[x][y] == 1) {
                    largo2++;
                    x++;
                    y--;
                }

		//Se actualiza el máximo de 1's en diagonal
                if (largo2 > maximo) {
                    maximo = largo2;
                }
            }
        }
    }

    return maximo;
}

//Se crea la función para crear la matriz aleatoria
void matriz_aleatoria(int matrix[SIZE][SIZE]) {
	//se utiliza el time(null) para obtener 100% aleatorio
        srand(time(NULL));
	//Se crea la matriz, en un rango de 0 a 1
        for(int i = 0; i < SIZE; i++) {
                for (int j = 0; j < SIZE; j++) {
                        matrix[i][j] = rand () % 2;
                }
        }
}

//Se crea la función para imprimir la matriz, la cual recorre y al final imprime
void imprimir_matriz(int matrix[SIZE][SIZE]) {
        printf("Matriz generada:\n");
        for (int i = 0; i < SIZE; i++) {
                for (int j = 0; j < SIZE; j++) {
                        printf("%d ", matrix[i][j]);
                }
                printf("\n");
        }
}

int main() {
	int matrix[SIZE][SIZE];
	//Se llama la función que creará la matriz aleatoria
	matriz_aleatoria(matrix);
	//Se llama la función que va a estar imprimiendo la matriz
	imprimir_matriz(matrix);
	int linea_larga = findLargestLine(matrix);
	printf("El tamaño de la secuencia de 1's más grande en diagonal es: %d\n", linea_larga);

	return 0;
}

	
