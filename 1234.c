/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1234
Data        : 30/04/2026
Objetivo    : Escrever letras alternadas entre maiúsculas e minúsculas
Aprendizado : Utilização da biblioteca ctype e da função fgets
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char palavra[1000];
    int i, contador;

    while (fgets(palavra, 1000, stdin) != NULL) {
        
        palavra[strcspn(palavra, "\n")] = '\0';

        contador = 0;

        for (i = 0; palavra[i] != '\0'; i++) {
            
            if (palavra[i] != ' ') {
                
                if (contador % 2 == 0) {
                    palavra[i] = toupper(palavra[i]);
                } else {
                    palavra[i] = tolower(palavra[i]);
                }

                contador++;
            }
        }

        printf("%s\n", palavra);
    }

    return 0;
}
