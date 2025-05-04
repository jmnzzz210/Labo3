#include <stdio.h>

#define SIZE 5

int findLargestLine(int matrix [][SIZE]) {
	int maximo= 0;
     	//Recorrer diagonales principales (de izquierda a derecha)
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
		if (largo > maximo) {
			maximo = largo;
		}
	     }
	   }
	}

   //Recorrer diagonales secundarias (de derecha a izquierda)
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matrix[i][j] == 1) {
                int largo2 = 1;
                int x = i + 1, y = j - 1;

                // Recorrer la  diagonal hacia abajo-izquierda
                while (x < SIZE && y >= 0 && matrix[x][y] == 1) {
                    largo2++;
                    x++;
                    y--;
                }

                if (largo2 > maximo) {
                    maximo = largo2;
                }
            }
        }
    }

    return maximo;
}


int main() {
	int matrix [SIZE][SIZE] = {
		{0,1,1,1,0},
		{0,1,1,1,1},
		{1,1,1,1,0},
		{0,1,1,0,1},
		{1,0,1,0,1},
	};
	//Se utiliza la función creada anteriormente
	int largestLine =findLargestLine(matrix);
	printf("El tamaño de la secuencia de 1's más grande es %d\n", largestLine);
	return 0;
}
