/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1031
Data        : 18/06/2026
Objetivo    : Descobrir o números de saltos para uma cidade ter energia na crise
Aprendizado : Utilização de recursão
-------------------------------------------------------------------------- */
#include <stdio.h>

int desligar(int divisoes, int saltos){

    /*caso base */
    if(divisoes == 1){
        return 0;
    }

    return ((desligar(divisoes-1, saltos) + saltos) % divisoes);
}

int main (){
    int divisoes;

    scanf("%d", &divisoes);
    while(divisoes != 0){
        int saltos = 1;

        while(1){
            int ligado = desligar(divisoes-1,saltos);

            if(ligado == 11){
                printf("%d\n", saltos);
                break;
            }

            saltos++;
        }

        scanf("%d", &divisoes);

    }
}
