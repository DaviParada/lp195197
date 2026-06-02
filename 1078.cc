/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C++
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1078
Data        : 28/04/2026
Objetivo    : Tabuada de determinado valor N
Aprendizado : Utilização de comandos básicos de C++
-------------------------------------------------------------------------- */
#include <iostream>

int main(){
    int N, i, resultado;
    
    std::cin >> N;
    
    if(2 < N && N < 1000){
        for(i = 1; i <= 10; i++){
            resultado = N * i;
            std::cout << N << "x" << i << "=" << resultado << std::endl;
        }
    }else{
        return 1;
    }
    
    return 0;

}
