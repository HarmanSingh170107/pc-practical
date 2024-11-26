#include <stdio.h>
#include <math.h>
int main(){

    int a;double fact ;

    scanf("%d",&a);

    fact = tgamma(a+1);

    printf("%.0f\n",fact);

    return 0;
}