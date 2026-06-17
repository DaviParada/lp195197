/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1169
Data        : 17/06/2026
Objetivo    : Quantos kg de grãos existem em determinada qtd de casas do tabuleiro
Aprendizado : Utilização do unsigned long long int
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <math.h>

int main(){
    unsigned long long int qtd = 1;  /*%llu*/
    int N, count = 0;
    int num_casas;
    unsigned long long int kg;

    scanf("%d", &N);

    while(count < N){
        scanf("%d", &num_casas);

        
        kg = (unsigned long long) (pow(2, num_casas)/ 12000);
        printf("%llu kg\n", kg);

        qtd = 1;
        count++;
    }
}
