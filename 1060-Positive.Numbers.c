#include <stdio.h>

int main() {

    int i;
    int positive = 0;
    float num;

    for(i=0; i<6; i++){
        scanf("%f", &num);
        if(num>0){
            positive++;
        }
        else
            continue;
    }
    printf("%d valores positivos\n", positive);

    return 0;
}
