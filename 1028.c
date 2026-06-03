/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1028
Data        : 03/06/2026
Objetivo    : Descobrir o número de pilhas com o max de figurinhas
Aprendizado : Utilização de recursão
-------------------------------------------------------------------------- */
#include <stdio.h>

int mdc(int num1, int num2){
    /* Caso base */
    if(num2 == 0){
        return num1;
    }
    /* Caso recursivo */
    return mdc(num2, num1%num2);
}


int main() {
    int N, num1, num2;
    
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        scanf("%d %d", &num1, &num2);
        printf("%d\n", mdc(num1, num2));
    }
 
    return 0;
}
