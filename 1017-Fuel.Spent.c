#include <stdio.h>

int main() {

    float time, speed;
    float cost;

    scanf("%f %f", &time, &speed);
    cost = (time*speed)/12;
    printf("%.3f\n", cost);

    return 0;
}
