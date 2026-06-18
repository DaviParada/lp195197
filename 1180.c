/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1180
Data        : 18/06/2026
Objetivo    : Descobrir o menor número que está em um vetor e indicar a posição
Aprendizado : Manipulação de vetores
-------------------------------------------------------------------------- */
#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int vetor[N];

    for(int i = 0; i < N; i++){
        scanf("%d", &vetor[i]);
    }

    int menor = vetor[0];
    int posicao = 0;

    for(int j = 1; j < N; j++){
        if(vetor[j] < menor){
            menor = vetor[j];
            posicao = j;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
}
