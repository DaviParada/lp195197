/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1024
Data        : 07/05/2026
Objetivo    : Criando uma criptografia
Aprendizado : Manipulção de strings
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main() {
    char vet[1001];
    int N;
    int tamanho = strlen(vet);
    char aux;
    
    scanf("%d", &N);
    getchar();
    
    for(int i = 0; i < N; i++){
        
        fgets(vet, 1001, stdin);
        vet[strcspn(vet,"\n")] = '\0';

        /* Subindo +3 na tabela ASCII */
        for(int j = 0; vet[j] != '\0' ; j++){
            if((vet[j] >= 'A' && vet[j] <= 'Z') || (vet[j] >= 'a' && vet[j] <= 'z')){
            vet[j] += 3;
            }
        }


        /* Invertendo a string */
        int tamanho = strlen(vet);
        char aux;

        for(int q = 0; q < tamanho/2; q++){
            aux = vet[q];
            vet[q] = vet[tamanho -1 -q];
            vet[tamanho -1 -q] = aux;
        }


        /* Andando -1 na tabela ASCII, somente metade dos caracteres */
        for(int o = tamanho / 2; vet[o] != '\0'; o++){
                vet[o] -= 1;
            }

        printf("%s\n", vet);

    }

    return 0;
}
