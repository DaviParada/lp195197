/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 2552
Data        : 18/06/2026
Objetivo    : Construir o jogo do pão de queijo
Aprendizado : Matrizes
-------------------------------------------------------------------------- */
#include <stdio.h>

int main(){
    int N, M;
    int i, j;

    while (scanf("%d %d", &N, &M) != EOF){
        int matriz[100][100];
        for (i = 0; i < N; i++){
            for (j = 0; j < M; j++){
                scanf("%d", &matriz[i][j]);
            }
        }

        for (i = 0; i < N; i++){
            for (j = 0; j < M; j++){
                if ((matriz[i][j]) == 1){
                    printf("9");
                }
                else{
                    int contador = 0;
                    if (i > 0 && matriz[i - 1][j] == 1){
                        contador++;
                    }
                    if (i < N - 1 && matriz[i + 1][j] == 1){
                        contador++;
                    }
                    if (j > 0 && matriz[i][j - 1] == 1){
                        contador++;
                    }
                    if (j < M - 1 && matriz[i][j + 1] == 1){
                        contador++;
                    }
                    printf("%d", contador);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
