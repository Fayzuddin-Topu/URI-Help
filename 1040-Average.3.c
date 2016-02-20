#include <stdio.h>
void exam(float x);
int main() {

    float n1,n2,n3,n4,media;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    printf("Media: %.1f\n", media);

    if(media >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if(media < 5.0){
        printf("Aluno reprovado.\n");
    }
    else if(media >= 5.0 && media < 6.9){
        printf("Aluno em exame.\n");
        exam(media);
    }

    return 0;
}

void exam(float x)
{
    float media2, n;

    scanf("%f", &n);
    printf("Nota do exame: %.1f\n", n);

    media2 = (x + n)/2;

    if(media2 >= 5.0)
        printf("Aluno aprovado.\n");
    else
        printf("Aluno reprovado.\n");

    printf("Media final: %.1f\n", media2);
}
