#include <stdio.h>

int main() {

    int x,y,i;
    int add = 0;
    scanf("%d %d", &x, &y);

    if(x<y){
        for(i=x+1; i<y; i++){
            if(i%2){
                add += i;
            }
        }

    }
    else
        for(i=y+1; i<x; i++){
            if(i%2){
                add += i;
            }
        }

    printf("%d\n", add);

    return 0;
}
