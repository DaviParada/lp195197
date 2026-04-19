#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int array[100];
    int i, maior, novoMaior, posicao;
    
    scanf("%d", &array[0]);
    maior = array[0];
    posicao = 1;
    
    for(i=1; i < 100; i++){
        scanf("%d", &array[i]);
        novoMaior = ( (maior + array[i] + abs(maior - array[i])) / 2 );
        
        if(novoMaior != maior)
            posicao = i + 1;
           
        maior = novoMaior;
    }
    
    printf("%d\n", maior);
    printf("%d\n", posicao);


    return 0;
}
