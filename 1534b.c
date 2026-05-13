/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1534
Data        : 13/05/2026
Objetivo    : Imprimir uma matriz estabelecendo prioridade
Aprendizado : Utilização do matrizes e ponteiros
-------------------------------------------------------------------------- */
#include <stdio.h>
 
int main() {
    int N;
    
    while(scanf("%d", &N) != EOF){
        int matriz[70][70];
        
        //Coloando a prioridade do 2 e 1
        for(int i=0; i < N; i++){
            for(int j=0; j < N;j++){
                
                if(j == N - 1 - i){
                    *( *(matriz+i) + j) = 2;
                }
                else if(i == j){
                    *( *(matriz+i) + j) = 1;
                }
                else{
                    *( *(matriz+i) + j) = 3;
                }
            }
        }
        
        //Imprimindo a matriz
        for(int i=0; i < N; i++){
            for(int j=0; j < N; j++){
               printf("%d",* ( *(matriz+i) + j) );
            }
            printf("\n");
        }
    }
    
    return 0;
}
