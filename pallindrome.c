#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int length = strlen(str);
    int left=0;
    int right= strlen(str)-1;

    while(left<right){

        if (str[left]==str[right]){

            return 1;

        }
        left++;
        right--;

    }

    return 0;
}

int main(){

    char str[100];

    printf("Enter a string:");

    scanf("%s",str);

    if(isPalindrome(str)){

        printf("Hell yeah");

    }
    else{

        printf("Hell no");

    }
    return 0;
}