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
    int j=0;
    int count = sizeof(arr)/sizeof(arr[0]);
    int duplicate=0;
    while (j!=count) {
        int w = arr[j];
        for (int k=0;k<count;k++) {
            if (arr[k]==w) {
                duplicate++;
            }
            else {
                continue;
            }
        }
        if (duplicate>1) {
            printf("The duplicate element is: %d",w);
        }
        else {
            printf("%d",-1);
        }
    }
}