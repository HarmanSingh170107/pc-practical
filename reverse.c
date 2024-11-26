#include <stdio.h>

int main(){

    int a ; int rev=0;

    scanf("%d",&a);

    while (a>0){

        int rem=a%10;

        rev = rev*10 + rem;
        
        a/=10;
    }
    printf("%d",rev);

    return 0;
}