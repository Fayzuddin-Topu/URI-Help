#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    int i, j;

    for (i=0; i<n; i++)
    {
        scanf("%d", &j);
        if (j==0)
            printf("NULL\n");

        else
        {
            if (j%2==0)
                printf("EVEN ");
            else
                printf("ODD ");

            if (j>0)
                printf("POSITIVE\n");
            else
                printf("NEGATIVE\n");
        }
    }

    return 0;

}
