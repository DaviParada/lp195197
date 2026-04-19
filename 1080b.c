





#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, maior, valor , posicao = 1;
    
    for(i=0; i<100; i++){
        scanf("%d", &valor);
        if(i == 0 || valor > maior){
            maior = valor;
            posicao = i + 1;
        }
    }
    
    printf("%d\n", maior);
    printf("%d\n", posicao);
    
    return 0;
}
