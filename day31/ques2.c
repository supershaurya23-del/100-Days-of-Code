// Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>
    
    void reverse(int arr[], int n);
    void printArr(int arr[], int n);

    int main(){
        int n;
        printf(" enter number of elements : ");
        scanf("%d", &n);
        int arr[n];
        printf("enter %d elements : ", n);
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        reverse(arr, n);
        printf("reversed arr : " );
        printArr(arr, n);
        return 0;
    }
    void reverse(int arr[], int n){
        for(int i=0; i<n/2; i++){
            int temp= arr[i];
            arr[i]= arr[n-i-1];
            arr[n-i-1]= temp;
        }
    }
void printArr(int arr[], int n){
for (int i=0; i<n; i++){
printf("%d\t", arr[i]);
}
printf("\n");

}
