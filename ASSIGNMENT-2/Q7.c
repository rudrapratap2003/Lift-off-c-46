#include<stdio.h>
int main(){
    int arr[10], temp;                
    printf("Enter 10 integers: \n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    int j = 0;
    for(int i = 0; i < 10; i++){
        if(arr[i] < 0){
            if(i != j){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
    printf("Sorted Array: \n");
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}