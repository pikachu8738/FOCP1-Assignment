#include <stdio.h>
int main() {
    int arr[6] = {1,2,3,4,5};
    // insertion at the start of the array
    for (int i=5; i<0;i++){
        arr[i]=arr[i-1];
    }
    printf("Enter the element you want in the beginning of the aray: ");
    scanf("%d",arr[0]);
    // insertion at the end of the aray 
    arr[5]=6;
    // insertion at specific index 
    int a;
    printf("Enter the index you want the value at: ");
    scanf("%d",&a);
    for (int j=5;j>a;j--){
        arr[j]=arr[j-1];
    }
    printf("Enter the new value at index: ");
    scanf("%d",&arr[a]);
}