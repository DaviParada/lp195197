/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1078
Data        : 28/04/2026
Objetivo    : Tabuada de determinado valor N
Aprendizado : Utilização de comandos básicos de C
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
    int N, i;
    scanf("%d", &N);
    if(2 < N < 1000){
        for(i = 1; i <= 10; i++){
            printf("%d x %d = %d", i, N, i*N);
        }
    }else{
        return 1;
    }
}
