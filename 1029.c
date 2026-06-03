/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1029
Data        : 03/06/2026
Objetivo    : Sequência de Fibonacci
Aprendizado : Utilização de recursão e ponteiros
-------------------------------------------------------------------------- */
#include <stdio.h>

int fibonacci(int num, int *contador){
    (*contador)++;
    /* caso base */
    if(num == 0 || num == 1){
        if(num == 0){
            return 0;
        }else{
            return 1;
        }
    }
    
    /* caso recursivo */
    return fibonacci(num-1, contador) + fibonacci(num-2, contador);
    
}

 
int main() {
    int N, num, resultado, chamadas;
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        scanf("%d", &num);
        chamadas = 0;
        resultado = fibonacci(num, &chamadas);
        printf("fib(%d) = %d calls = %d\n", num, (chamadas-1), resultado);
    }
 
    return 0;
}
