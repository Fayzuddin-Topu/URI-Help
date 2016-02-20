#include <stdio.h>

int main() {

    int A,B,C,D,DIFERENCA,a,b;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    a = A*B;
    b = C*D;
    DIFERENCA = a-b;

    printf("DIFERENCA = %d\n", DIFERENCA);

    return 0;
}
