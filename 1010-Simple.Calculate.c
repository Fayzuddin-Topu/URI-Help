#include <stdio.h>

int main() {

   int pcode, punit[2], i;
   float total, prize[2];

   for(i=0; i<2; i++){
        scanf("%d %d %f", &pcode, &punit[i], &prize[i]);
   }
   total = (punit[0]*prize[0])+(punit[1]*prize[1]);
   printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
