#include <stdio.h>

int main(){

    int a,b,c,large ;

    scanf("%d%d%d",&a,&b,&c);

    large = (a>b) ? ( (a>c) ? a:c ) : ((b>c) ? b: c);

    printf("%d\n",large);

    return 0;
}