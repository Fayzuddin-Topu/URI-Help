#include <stdio.h>

int main() {

    int NUMBER, hours;
    float SALARY,per_hour;
    scanf("%d %d", &NUMBER, &hours);
    scanf("%f", &per_hour);

    SALARY = hours*per_hour;

    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2f\n", SALARY);

    return 0;
}
