#include <stdio.h>

int main(){

    int n;

    // Ask user for the number of terms in the Fibonacci series
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int a=0,b=1,next;


    printf("Fib:%d\n%d\n",a,b);

    for (int i=2;i<n;i++){

        next=a+b;

        printf("%d\n",next);
        a=b;

        b=next;

    }
    printf("\n");
    return 0;
}