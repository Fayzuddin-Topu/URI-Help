#include <stdio.h>

int main() {

    float sal;

    scanf("%f", &sal);

    int raise;

    if (sal <= 400)
        raise = 15;
    else if (sal <= 800)
            raise = 12;
    else if (sal <= 1200)
            raise = 10;
    else if (sal<=2000)
            raise = 7;
    else
        raise = 4;

    float gain = sal * raise/100;

    printf("Novo salario: %.2f\n", sal+gain);
    printf("Reajuste ganho: %.2f\n", gain);
    printf("Em percentual: %d %c\n", raise, 37);


    return 0;
}
