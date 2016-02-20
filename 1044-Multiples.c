#include <stdio.h>

int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    int check=1;

    if (a>b)
    {
        if (a%b)
            check=0;
    }

    if (a<b)
    {
        if (b%a)
            check=0;
    }

    if (check==0)
        printf("Nao sao Multiplos\n");
    else
        printf("Sao Multiplos\n");

    return 0;
}
