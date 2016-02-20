#include <stdio.h>

int main() {

    int X;
    float Y,res;
    scanf("%d %f", &X, &Y);

    res = X/Y;
    printf("%.3f km/l\n", res);

    return 0;
}
