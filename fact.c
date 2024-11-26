#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {

    if (n==0 || n==1){

        return 1;

    }

    return n*factorial(n-1);
}

int main() {

    int n;

    printf("enter the number for factorial finding");

    scanf("%d",&n);

    printf("Factorial of %d is %lld\n",n,factorial(n));

    return 0;

}