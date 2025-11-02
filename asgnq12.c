#include <stdio.h>
int main() {
    int a;
    printf("Enter the length of the array: ");
    scanf("%d",&a);
    int arr[a] ;
    for (int i=0;i<a;i++) {
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min =arr[0];
    for (int j=1;j<a;j++) {
        if (max<arr[j]){
            max=arr[j];
        }
        else if (min>arr[j]) {
            min = arr[j];
        }
        else {
            continue;
        }
    }
}