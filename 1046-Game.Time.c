#include <stdio.h>

int main() {

    int start, end, x;
    scanf("%d %d", &start, &end);

    if(start > end){
        x = (24 - start) + end;
        printf("O JOGO DUROU %d HORA(S)\n", x);
    }
    else if(start < end){
        x = end - start;
        printf("O JOGO DUROU %d HORA(S)\n", x);
    }
    else if(start == end){
        printf("O JOGO DUROU %d HORA(S)\n", 24);
    }

    return 0;
}
