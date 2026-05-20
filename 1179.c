/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1179
Data        : 20/05/2026
Objetivo    : Manipular arrays
Aprendizado : Utilização de arrays
-------------------------------------------------------------------------- */
#include <stdio.h>
 
int main() {
    int par[5];
    int impar[5];
    int num, qtdPares = 0, qtdImpares = 0;
    
    for(int i = 0; i < 15; i++){
        scanf("%d", &num);
        
        if(num % 2 == 0){
            par[qtdPares] = num;
            qtdPares++;
            if(qtdPares == 5){
                for(int q = 0; q < 5; q++){
                    printf("par[%d] = %d\n", q, par[q]);
                }
                qtdPares = 0;
            }
            
        }else{
            impar[qtdImpares] = num;
            qtdImpares++;
            if(qtdImpares == 5){
                for(int w = 0; w < 5; w++){
                    printf("impar[%d] = %d\n", w, impar[w]);
                }
                qtdImpares = 0;
            }
        }
    }
    if(qtdImpares > 0){
        for(int a = 0; a < qtdImpares; a++){
            printf("impar[%d] = %d\n", a, impar[a]);
        }
    }
    
    if(qtdPares > 0){
        for(int j = 0; j < qtdPares; j++){
            printf("par[%d] = %d\n", j, par[j]);
        }
    }
 
    return 0;
}
