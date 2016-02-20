#include <stdio.h>

int main() {

    int a, count;

    scanf("%d", &a);
    count=0;

    do
    {
        if (a%2)
        {
            printf("%d\n", a);
            count++;
        }
    a++;
    } while (count<6);

    return 0;

}
