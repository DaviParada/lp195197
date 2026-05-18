/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Davi de Oliveira Parada
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1015
Data        : 18/05/2026
Objetivo    : Distancia entre dois pontos
Aprendizado : Utilização de função e ponteiros 
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <math.h>
 
double distancia(double *x1, double *x2, double *y1, double *y2){
    double resultado;

    resultado = sqrt( pow( (*x2-*x1), 2) + pow( (*y2-*y1), 2) );
    
    return resultado;
}


int main() {
    double x1, x2;
    double y1, y2;
    
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    
    printf("%.4lf\n", distancia(&x1, &x2, &y1, &y2));

    return 0;
}
