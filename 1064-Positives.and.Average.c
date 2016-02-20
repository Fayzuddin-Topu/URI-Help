#include <stdio.h>

int main() {

    int i;
    int positive = 0;
    float num, sum, avg;
    sum = 0;
    avg = 0;

    for(i=0; i<6; i++){
        scanf("%f", &num);
        if(num>0){
            sum += num;
            positive++;
        }
        else
            continue;
    }
    printf("%d valores positivos\n", positive);
    avg = sum/positive;
    printf("%.1f\n", avg);

    return 0;
}
