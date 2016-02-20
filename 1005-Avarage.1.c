#include<stdio.h>
int main()
{
     float a,b,c,d,MEDIA;
     scanf("%f%f",&a,&b);

     c=(a*3.5)+(b*7.5);
     MEDIA=c/(3.5+7.5);

     printf("MEDIA = %.5f\n",MEDIA);

     return 0;
}
