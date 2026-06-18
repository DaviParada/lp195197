/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1175
Data        : 18/06/2026
Objetivo    : Imprimir vetor trocando o primeiro termo com o último
Aprendizado : Vetores
-------------------------------------------------------------------------- */
#include <stdio.h>

int main(){
    int vetor[20];

    for(int i = 19;i >= 0; i--){
        scanf("%d", &vetor[i]);
    }
    for(int i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, vetor[i]);
    }
}
