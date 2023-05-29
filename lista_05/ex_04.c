/*A quarta, é o menor valor de X > 0 tal que seja par a soma (arredondada se não for inteira) da série:*/

#include <stdio.h>
#include <math.h>

int main() {
    int x = 1, i = 1; 
    int somatoria = 1;
    while (somatoria%2 != 0) {
        if(i%2 != 0) {
            somatoria += (pow(x, 25))/1;
            //printf("%d", somatoria);
        }
        else {
            somatoria -= (pow(x, 25))/1;
        }
        x++;
        i++;
    }
    printf("\nSOMATORIA: %d", somatoria);
    return 0;
}