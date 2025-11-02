#include <stdio.h>
int main() {
    int a,lastelement;
    printf("Enter the length of the array: ");
    scanf("%d",&a);
    int arr[a] ;
    for (int i=0;i<a;i++) {
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }
    lastelement=arr[a-1];
    for (int j = a-1; j>0;j--) {
        arr[j]=arr[j-1];
    }
    arr[0]=lastelement;
}