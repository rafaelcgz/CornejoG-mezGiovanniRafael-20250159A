#include "racional.h"
#include <stdio.h>

// auxiliar para primos
static int es_primo(int n) {
    if (n <= 1) return 0;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return 0;
        i++;
    }
    return 1;
}

// mcd recursivo
int mcd(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    if (b == 0) return a;
    return mcd(b, a % b);
}

void simplificar(int *num, int *den) {
    int d = mcd(*num, *den);
    *num /= d;
    *den /= d;
    // arreglar signo negativo en denominador
    if (*den < 0) {
        *num = -(*num);
        *den = -(*den);
    }
}

void sumar(int n1, int d1, int n2, int d2, int *n_res, int *d_res) {
    *n_res = (n1 * d2) + (n2 * d1);
    *d_res = d1 * d2;
    simplificar(n_res, d_res);
}