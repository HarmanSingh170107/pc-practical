#include <stdio.h>

int isprime(int n){

    if (n<=1){

        return 0;

    }
    
    for (int i=2;i*i<=n;i++){

        if (n%i==0){

            return 0;

        }

    }
    return 1;
}

int main(){

    printf("prime");

    for (int i; i<=100;i++){

        if (isprime(i)){

            printf("%d",i);

        }

    }
    printf("\n");
    return 0;
}