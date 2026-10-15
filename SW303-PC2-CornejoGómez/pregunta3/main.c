#include <stdio.h>
#include "racional.h"

int main() {
    int n1, d1, n2, d2;
    int nr, dr;

    // entrada de datos
    scanf("%d %d", &n1, &d1);
    scanf("%d %d", &n2, &d2);

    if (d1 == 0 || d2 == 0) return 1;

    sumar(n1, d1, n2, d2, &nr, &dr);
    
    // salida del resultado
    printf("%d / %d\n", nr, dr);

    return 0;
}