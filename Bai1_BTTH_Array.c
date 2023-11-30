#include <stdio.h>

void bubbleSort(int arr[], int n){
    int i, j;
    for (i = 0;i < n-1;i++) {
        for (j =0;j< n-i-1; j++) {
            if (arr[j]> arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int arr[] = {71, 72, 52, 30, 01, 62, 87};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    
    printf("Mang truoc khi sap xep: \n");
    for (i= 0;i< n;i++) {
        printf("%d ", arr[i]);
    }
    bubbleSort(arr, n);
    
    printf("\nMang sau khi sap xep (Bubble Sort): \n");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}
