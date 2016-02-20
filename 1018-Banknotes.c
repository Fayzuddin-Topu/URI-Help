#include <stdio.h>

void main () {

    int m;
    scanf("%d", &m);

    printf("%d\n", m);

    int a, b, c, d, e, f, g;

    a = m/100;
    m = m - a*100;

    b = m/50;
    m = m - b*50;

    c = m/20;
    m = m - c*20;

    d = m/10;
    m = m - d*10;

    e = m/5;
    m = m - e*5;

    f = m/2;
    m = m - f*2;

    g = m;


    printf("%d nota(s) de R$ 100,00\n", a);
    printf("%d nota(s) de R$ 50,00\n", b);
    printf("%d nota(s) de R$ 20,00\n", c);
    printf("%d nota(s) de R$ 10,00\n", d);
    printf("%d nota(s) de R$ 5,00\n", e);
    printf("%d nota(s) de R$ 2,00\n", f);
    printf("%d nota(s) de R$ 1,00\n", g);

    return 0;
}
