/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1435
Data        : 18/06/2026
Objetivo    : Imprimir a matriz com camadas
Aprendizado : Matriz
-------------------------------------------------------------------------- */
#include <stdio.h>

int preenchimento(int N, int i, int j){
    int distancia_topo = i;
    int distancia_esquerda = j;
    int distancia_baixo = (N-1) - i;
    int distancia_direita = (N-1) - j;
    int menor = distancia_topo;

    if(distancia_esquerda < menor){
        menor = distancia_esquerda;
    }
    if(distancia_baixo < menor){
        menor = distancia_baixo;
    }
    if(distancia_direita < menor){
        menor = distancia_direita;
    }

    return menor+1;

}

int main(){
    int N;
    
    scanf("%d", &N);

    while(N != 0){

        for(int i = 0;i < N;i++){
            for(int j = 0; j < N; j++){
                int valor = preenchimento(N, i, j);
                if(j == 0){
                    printf("%3d", valor);
                }else{
                    printf(" %3d", valor);
                }
            }
            printf("\n");
        }
        printf("\n");

        scanf("%d", &N);
    }
    return 0;
}
