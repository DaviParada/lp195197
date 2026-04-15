/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1071
Data        : 14/04/2026
Objetivo    : Ler dois valores inteiros e mostrar a soma entre eles
Aprendizado : Utilização de laços de repetição
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int X, Y, i, soma = 0;
    int menor, maior;
    
    scanf("%d", &X);
    scanf("%d", &Y);
    
    menor = (X+Y-abs(X-Y))/2;
    maior = (X+Y+abs(X-Y))/2;
    
    for(i = menor+1; i < maior; i++){
        if(i % 2 != 0){
            soma += i;
        }
    }
    
    printf("%d\n", soma);
   
    return 0;
}
