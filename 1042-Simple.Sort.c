#include <stdio.h>

int main() {

    int a,b,c,g,m,s,x;
    scanf("%d %d %d", &a, &b, &c);
    g=a;
    m=b;
    s=c;

    if(g<m){
        x=g;
        g=m;
        m=x;
    }
    if(m<s){
        x=m;
        m=s;
        s=x;
    }
    if(g<m){
        x=g;
        g=m;
        m=x;
    }

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", s,m,g,a,b,c);

    return 0;
}
