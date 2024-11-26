#include <stdio.h>

void sortdesc(int arr[], int size){

    for (int i=0; i < size - 1; i++){

        for(int j= i+1; j<size;j++){

            if (arr[i] < arr[j]){

                int temp = arr[i];

                arr[i]=arr[j];

                arr[j]=temp;


            }
        }
    }

}

int main(){

    int arr[2],arr2[2],n = 2,merged[4];


    for (int i = 0;i<n; i++){

        scanf("%d",&arr[i]);

    }

    for (int i = 0;i<n; i++){

        scanf("%d",&arr2[i]);

    }

    for (int i = 0; i<n; i++) {
       
       merged[i]=arr[i];

       merged[i+n]=arr2[i];

    }

    sortdesc(merged,4);

    for (int i = 0;i<4; i++){

        printf("%d",merged[i]);

    }
    return 0;
}