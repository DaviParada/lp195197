/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1030
Data        : 17/06/2026
Objetivo    : Quem irá sair vivo da caverna
Aprendizado : Utilização de recursão
-------------------------------------------------------------------------- */
#include <stdio.h>

int quem_fica_vivo(int pessoas, int salto){
    if(pessoas == 1){
        return 0;
    }

    return ((quem_fica_vivo(pessoas-1, salto) + salto) % pessoas);
}

int main(){
    int N;
    int n, k;

    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d %d", &n, &k);
        printf("Case %d: %d\n", (i+1), (quem_fica_vivo(n,k) + 1 ));
    }
}
