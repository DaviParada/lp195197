/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C++
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1383
Data        : 17/06/2026
Objetivo    : Verificar se uma matriz é uma possível solução do jogo Sudoku
Aprendizado : Utilização de funções, matrizes, entrada e saída de dados em C++
-------------------------------------------------------------------------- */
#include <iostream>
using namespace std;


bool verificacao_linha(int matriz[9][9]){
    for(int i = 0; i < 9; i++){
        bool visto[10] = {false};
        for(int j = 0; j < 9; j++){
            int numero = matriz[i][j];

            if(numero < 1 || numero > 9){
                return false;
            }

            if(visto[numero]){
                return false;
            }

            visto[numero] = true;

        }
    }  
    return true;
}

bool verificacao_coluna(int matriz[9][9]){
    for(int j = 0; j < 9; j++){
        bool visto[10] = {false};
        for(int i = 0; i < 9; i++){
            int numero = matriz[i][j];

            if(numero < 1 || numero > 9){
                return false;
            }

            if(visto[numero]){
                return false;
            }

            visto[numero] = true;

        }
    }
    return true;
}

bool verificacao_bloco(int matriz[9][9]){
    for(int bloco = 0; bloco < 9; bloco++){

        int inicio_linha = (bloco / 3) * 3;
        int inicio_coluna = (bloco % 3) * 3;
        bool visto[10] = {false};

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3;j++){
                int numero = matriz[inicio_linha + i][inicio_coluna + j];

                if(numero < 1 || numero > 9){
                    return false;
                }

                if(visto[numero]){
                    return false;
                }

                visto[numero] = true;

            }
        }
    }
    return true;
}




int main(){
    int N, count = 1;
    int matriz[9][9];

    cin >> N;

    while(count <= N){
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                cin >> matriz[i][j];
            }
        }

        if(verificacao_linha(matriz) && verificacao_coluna(matriz) && verificacao_bloco(matriz)){
            cout << "Instancia " << count << "\n";
            cout << "SIM\n\n";
        } else{
            cout << "Instancia " << count << "\n";
            cout << "NAO\n\n";
        }

        count++;
    }
}
