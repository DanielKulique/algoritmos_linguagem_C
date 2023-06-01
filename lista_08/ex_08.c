#include <stdio.h>
#include <math.h>

#define _USE_MATH_DEFINES

float angulo_c(float b);
float AC(float x, float b, float c);
float BC(float x, float c);
double pi = 3.14159;

int main () {
    float x1=0, b1=0, ac1=0, bc1=0, c1=0;
    printf("\nDigite o valor da distancia x: ");
    scanf("%f", &x1); 
    printf("\nDigite o valor do angulo b: ");
    scanf("%f", &b1); 
    c1 = angulo_c(b1);
    ac1 = AC(x1, b1, c1);
    bc1 = BC(x1, c1);
    printf("\nDistancia de AC = [%.2f]\nDistancia de BC = [%.2f]", ac1, bc1);
}

float angulo_c(float b) {
    float c=0;
    c = 90 - b;
    printf("\nC = %.2f", c);
    return c;
}
float AC(float x, float b, float c) {
    float ac=0;
    ac = ((sin((b*pi)/180)*x)/sin((c*pi)/180));
    printf("\nAC = %.2f", ac);
    return ac;
}
float BC(float x, float c) {
    float bc=0;
    bc = ((sin((90*pi)/180)*x)/sin((c*pi)/180));
    printf("\nBC = %.2f", bc);
    return bc;
}
