#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas, colunas;
    int **matriz;

    scanf("%d", &linhas);
    scanf("%d", &colunas);

    matriz = (int **)malloc(linhas * sizeof(int *));

    if (colunas == 0 || linhas == 0){
        printf("[matriz vazia]");
    }
    else{

    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    }
// mostrar matriz

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
