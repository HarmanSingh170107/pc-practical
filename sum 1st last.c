#include <stdio.h>

int main(){

    int a;

    scanf("%d",&a);

    int f=a/10000;

    int last= (a/10)%10;

    int sum = f+last;

    printf("%d",sum);

    return 0;
}