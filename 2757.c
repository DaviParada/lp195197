/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 2757
Data        : 09/04/2026
Objetivo    : Exibir números com preenchimento
Aprendizado : Utilização de mascaras e preenchimento
-------------------------------------------------------------------------- */




#include <stdio.h>
 
int main() {
    int A, B, C;
    
    scanf("%d", &A);
    if(-10000 >= A >= 10000){
        return 1;
    }
    scanf("%d", &B);
    if(0 >= B >= 99){
        return 1;
    }
    scanf("%d", &C);
    if(0 >= C >= 999){
        return 1;
    }
    
    printf("A = %d, B = %d, C = %d\n", A, B, C);
    printf("A = %10d, B = %10d, C = %10d\n", A, B, C);
    printf("A = %010d, B = %010d, C = %010d\n", A, B, C);
    printf("A = %-10d, B = %-10d, C = %-10d\n", A, B, C);
    
    return 0;
}
