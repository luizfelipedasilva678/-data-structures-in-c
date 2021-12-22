#include<stdio.h>

int recurPotencia(int number, int n)
{
   if(n == 0){
        return 1;
   } else {
        return number * recurPotencia(number, n-1);
   }
}

int main(void) {
    printf("Resdultado %d", recurPotencia(9,2));

    return 0;
}