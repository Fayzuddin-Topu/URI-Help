#include <stdio.h>

int main() {

    int n,i,a;
    int in = 0;
    int out = 0;

    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        scanf("%d", &a);
        if((a<=20) && (a>=10)){
            in++;
        }
        else{
            out++;
        }
    }


    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;

}
