/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1013
Data        : 07/04/2026
Objetivo    : Exibir o maior valor entre dois valores
Aprendizado : Utilização do scanf e tipos de variáveis
-------------------------------------------------------------------------- */


#include <stdio.h>
 
int main() {
    int a, b, c, maior;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    maior = (a+b+abs(a-b))/2;
    maior = (maior+c+abs(maior-c))/2;
    
    printf("%d eh o maior\n", maior);
 
    return 0;
}
