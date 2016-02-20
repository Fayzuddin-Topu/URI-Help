#include <stdio.h>

int main() {

   int i,num;
   int count = 0;

   for(i=0; i<5; i++){
       scanf("%d", &num);
       if(!(num%2)){
           count++;
       }
       else{
           continue;
       }
   }
   printf("%d valores pares\n", count);

    return 0;
}
