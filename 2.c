#include <stdio.h>

int main(){

    int a,b;

    printf(":Enter the numbers:");

    scanf("%d %d",&a,&b);

    float c = (1.0/3)*3.14*a*a*b;

    printf("%.2f",c);

    return 0;
}