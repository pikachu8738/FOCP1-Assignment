#include <stdio.h>
int main() {
    int arr[10] = {1,2,3,4,5,6,7,8};
    int count= sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i<count;i++) {
        arr[i]=arr[i+1];
    } 
    // deletion of last index 
    arr[count-1]=0;
    // deletion of specific index
    int a;
    printf("Enter the index you want to delete the value of: ");
    scanf("%d",&a);
    for (int j=a;j<count;j++) {
        arr[j]=arr[j+1];
    }
}