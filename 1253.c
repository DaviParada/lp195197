/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1253
Data        : 30/04/2026
Objetivo    : Decifrar um sistema de criptografia
Aprendizado : Utilização da tabela ASCII
-------------------------------------------------------------------------- */
#include <stdio.h>
 
int main() {
    char frase[51];
    int num_testes,num_deslocamento, i, caso;
    
    scanf("%d", &num_testes);
    
    for(caso = 0; caso < num_testes; caso++){
        
        scanf("%s", frase);
        scanf("%d", &num_deslocamento);
        
        for(i = 0; frase[i] != '\0'; i++){
            
            frase[i] = frase[i] - num_deslocamento;
            
            if(frase[i] < 'A'){
                frase[i] = frase[i] + 26;
            }
            
        }
        
        printf("%s\n", frase);
        
    }

    return 0;
}
