/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1441
Data        : 03/06/2026
Objetivo    : Retornar o maior valor das Sequencias de Granizo
Aprendizado : Utilização de recursão
-------------------------------------------------------------------------- */
#include <stdio.h>

int granizo(int num, int *maior){
    if(num > *maior){
        *maior = num;
    }
    
    /*caso base */
    if(num == 1){
        return *maior;
    }
    
    /* caso recursivo */
    if(num % 2 == 0){
        return granizo(num/2, maior);
    }else{
        return granizo(3*num + 1, maior);
    }
}


int main() {
    int num, maior;
    while(scanf("%d",&num) == 1 && num != 0){
        maior = num;
        printf("%d\n",granizo(num, &maior));
    }
    return 0;
}
