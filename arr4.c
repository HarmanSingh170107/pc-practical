#include <stdio.h>

int main(){

    int arr[5],arr2[5],n = 5;


    for (int i = 0;i<n; i++){

        scanf("%d",&arr[i]);

    }

    for (int i = 0;i<n; i++){

        arr2[i]=arr[i];

    }

    for (int i = n-1; i >= 0; i--) {
        printf("%d ", arr2[i]);  // Print array elements
    }

    return 0;
}