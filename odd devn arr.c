#include <stdio.h>

int main(){

    int n;
    
    printf("Enter the number of elements:");
    scanf("%d", &n);
    
    int arr[n],odd[n],even[n];
    int oddc=0,evenc=0;



    for (int i = 0;i<n; i++){

        scanf("%d",&arr[i]);

        if (arr[i] % 2 == 0){

            even[evenc++]=arr[i];

        }

        else{

            odd[oddc++]=arr[i];

        }

    }

    for (int i = 0;i<evenc; i++){
//copy array
        printf("e%d",even[i]);

    }

     for (int i = 0;i<oddc; i++){
//copy array
        printf("o%d",odd[i]);
    }

    return 0;
}