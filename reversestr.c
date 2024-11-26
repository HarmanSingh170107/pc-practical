#include <stdio.h>
#include <string.h>

void reversestr(char str[]){

    int length=strlen(str);
    int left=0;
    int right=length-1;

    while(left<right){

        char temp=str[left];

        str[left]=str[right];

        str[right]=temp;

        left++;
        right--;

    } 

}

int main(){

    char str[100];

    printf("enter a sting:");
    scanf("%s",str);

    reversestr(str);

    printf("%s",str);

    return 0;
}