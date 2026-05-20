/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1046
Data        : 20/05/2026
Objetivo    : Calcular tempo de duracao
Aprendizado : Utilização de funções e atirmetica de relogios
-------------------------------------------------------------------------- */
#include <stdio.h>

int calcularDuracao(int start, int end){
    int duracao;
    
    if(start == end){
        duracao = 24;
    }else{
        duracao = ( (end - start) + 24 ) % 24;
    }
    
    return duracao;

}

int main() {
    int start, end;
    
    scanf("%d", &start);
    scanf("%d", &end);
    
    printf("O JOGO DUROU %d HORA(S)\n", calcularDuracao(start, end));
 
    return 0;
}
