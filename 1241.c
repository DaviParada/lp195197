/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1241
Data        : 06/05/2026
Objetivo    : Verificar se um número encaixa no outro 
Aprendizado : Utilização da lógica com strings / Difícil
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h> 

int main() {
    int N;
    char A[1001], B[1001];
    int encaixa;

    if (scanf("%d", &N) != 1) return 0;

    for (int i = 0; i < N; i++) {
        scanf("%s %s", A, B);

        int lenA = strlen(A);
        int lenB = strlen(B);
        
        encaixa = 1; 

        if (lenB > lenA) {
            encaixa = 0; 
        } else {
            for (int j = 0; j < lenB; j++) {
                if (A[lenA - lenB + j] != B[j]) {
                    encaixa = 0;
                    break;
                } 
            } 
        } 

        if (encaixa) {
            printf("encaixa\n");
        } else {
            printf("nao encaixa\n");
        }
    } 

    return 0;
}
