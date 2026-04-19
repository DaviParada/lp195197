/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 2757
Data        : 09/04/2026
Objetivo    : Maior entre 100 números sem usar Array
Aprendizado : Utilização de estruras de repetição e condicionais
-------------------------------------------------------------------------- */
 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, maior, valor , posicao = 1;
    
    for(i=0; i<100; i++){
        scanf("%d", &valor);
        if(i == 0 || valor > maior){
            maior = valor;
            posicao = i + 1;
        }
    }
    
    printf("%d\n", maior);
    printf("%d\n", posicao);
    
    return 0;
}
