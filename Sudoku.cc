/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C++
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : Projeto do jogo Sudoku
Data        : 18/06/2026
Objetivo    : Fazer um jogo sudoku
Aprendizado : Principalmente manipulação de matrizes e funções
-------------------------------------------------------------------------- */
#include <iostream>
using namespace std;


bool verificacao_linha(int matriz[9][9]){
    for(int i = 0; i < 9; i++){
        bool visto[10] = {false};
        for(int j = 0; j < 9; j++){
            int numero = matriz[i][j];

            if(numero == 0){
                continue;
            }

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

            if(numero == 0){
                continue;
            }

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

                if(numero == 0){
                    continue;
                }

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

void imprimir_tabuleiro(int matriz[9][9]){
    
    for(int i = 0; i < 9;i++){
        for(int j = 0; j < 9; j++){

            if(matriz[i][j] == 0){
                cout << " .";
            }else{
                cout << " " << matriz[i][j];
            }

            if((j+1) % 3 == 0 && j < 8){
                cout << " |";
            }
        }

        cout << "\n";

        if((i+1) % 3 == 0 && i < 8){
            cout << "-------+-------+------\n";
        }

    }
}

bool verificacao_vitoria(int matriz[9][9]){
    for(int i = 0;i < 9; i++){
        for(int j = 0; j< 9; j++){
            if(matriz[i][j] == 0){
                return false;
            }
        }
    }

    return true;
}


int main(){
    int matriz[9][9] = {
    {5, 3, 0, 0, 7, 0, 0, 0, 0},
    {6, 0, 0, 1, 9, 5, 0, 0, 0},
    {0, 9, 8, 0, 0, 0, 0, 6, 0},
    {8, 0, 0, 0, 6, 0, 0, 0, 3},
    {4, 0, 0, 8, 0, 3, 0, 0, 1},
    {7, 0, 0, 0, 2, 0, 0, 0, 6},
    {0, 6, 0, 0, 0, 0, 2, 8, 0},
    {0, 0, 0, 4, 1, 9, 0, 0, 5},
    {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };
    int matriz_original[9][9] = {
    {5, 3, 0, 0, 7, 0, 0, 0, 0},
    {6, 0, 0, 1, 9, 5, 0, 0, 0},
    {0, 9, 8, 0, 0, 0, 0, 6, 0},
    {8, 0, 0, 0, 6, 0, 0, 0, 3},
    {4, 0, 0, 8, 0, 3, 0, 0, 1},
    {7, 0, 0, 0, 2, 0, 0, 0, 6},
    {0, 6, 0, 0, 0, 0, 2, 8, 0},
    {0, 0, 0, 4, 1, 9, 0, 0, 5},
    {0, 0, 0, 0, 8, 0, 0, 7, 9}      
    };



    bool jogando = true;
    int linha, coluna, valor;

    while(jogando){
        imprimir_tabuleiro(matriz);

        cout << "Digite a linha (0-8): ";
        cin >> linha;
        cout << "Digite a coluna (0-8): ";
        cin >> coluna;


        if(linha < 0 || linha > 8 || coluna < 0 || coluna > 8){
            cout << "Valores invalidos!";
            cout << "======================================";           
            continue;
        }

        if(matriz_original[linha][coluna] != 0){
            cout << "Nao e possivel alterar esse valor!";
            cout << "======================================";
            continue;
        }



        cout << "Digite o valor (1-9): ";
        cin >> valor;

        if(valor < 1 || valor > 9){
            cout << "Valores invalidos!";
            cout << "======================================";
            continue;
        }

        matriz[linha][coluna] = valor;

        if(verificacao_linha(matriz) == false || verificacao_coluna(matriz) == false || verificacao_bloco(matriz) == false){
            cout << "Jogada invalida! Tente novamente.\n";
            matriz[linha][coluna] = 0;
        }else{
            cout << "Boa jogada!\n";

            if(verificacao_vitoria(matriz)){
                cout << "\n";
                imprimir_tabuleiro(matriz);
                cout << "\nParabéns, você ganhou!!\n";
                jogando = false;
            }
        }
        cout << "======================================\n";
    }

}
