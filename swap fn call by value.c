#include <stdio.h>

void swapbyvalue(int a , int b){

    int temp=a;
    a=b;
    b=temp;
    printf("swaps a=%d b=%d\n",a,b);
}

int main(){

    int x=5,y=10;

    printf("originally x=%d y=%d",x,y);

    swapbyvalue(x,y);

    return 0;

}