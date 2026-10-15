#include <stdio.h>

// a) funcion de ackermann recursiva
int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    } else {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

// c) version con contador estatico
int ackermann_con_contador(int m, int n) {
    static int cont = 0; // static para que conserve su valor entre llamadas recursivas
    cont++;

    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return ackermann_con_contador(m - 1, 1);
    } else {
        return ackermann_con_contador(m - 1, ackermann_con_contador(m, n - 1));
    }
}

int main() {
    int res = ackermann(3, 4);
    printf("Resultado: %d\n", res);
    
    return 0;
}