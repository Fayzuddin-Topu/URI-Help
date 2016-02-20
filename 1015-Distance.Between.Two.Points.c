#include <stdio.h>

int main() {

    float x1,y1,x2,y2,X,Y,dis;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    X = (x2-x1)*(x2-x1);
    Y = (y2-y1)*(y2-y1);
    dis = sqrt(X+Y);

    printf("%.4f\n", dis);

    return 0;
}
