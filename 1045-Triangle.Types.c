#include <stdio.h>

int main() {

    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    float tmp;

    if (a<b)
    {
        tmp=a;
        a=b;
        b=tmp;
    }
    if (a<c)
    {
        tmp=a;
        a=c;
        c=tmp;
    }
    if (b<c)
    {
        tmp=b;
        b=c;
        c=tmp;
    }


    if (a>=b+c)
        printf("NAO FORMA TRIANGULO\n");
    else
    {
        if (pow(a,2)==pow(b,2)+pow(c,2))
            printf("TRIANGULO RETANGULO\n");
        else
            if (pow(a,2)>pow(b,2)+pow(c,2))
                printf("TRIANGULO OBTUSANGULO\n");
            else
                if (pow(a,2)<pow(b,2)+pow(c,2))
                    printf("TRIANGULO ACUTANGULO\n");

        if ((a==b) && (b==c))
            printf("TRIANGULO EQUILATERO\n");
        else
            if ((a==b) || (b==c) || (c==a))
                printf("TRIANGULO ISOSCELES\n");

    }

    return 0;
}
