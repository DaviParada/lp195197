/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1017
Data        : 20/05/2026
Objetivo    : Calcular qtd de litros gastos
Aprendizado : Utilização de funções
-------------------------------------------------------------------------- */
#include <stdio.h>

float calcularLitros(int Vmedia, int horas){
    int distancia;
    float litros;
    
    distancia = Vmedia * horas;
    litros = distancia/12.0;
    
    return litros;
    
}


int main() {
    int horas, Vmedia;
    
    scanf("%d", &horas);
    scanf("%d", &Vmedia);
    
    printf("%.3f\n", calcularLitros(Vmedia, horas));

    return 0;
}
