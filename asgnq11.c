#include <stdio.h>
int main() {
    int a,evencount=0,oddcount=0;
    printf("Enter the length of the array: ");
    scanf("%d",&a);
    int arr[a] ;
    int even_array[a],odd_array[a];
    for (int i=0;i<a;i++) {
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<a;j++) {
        if (arr[j]%2==0) {
            even_array[evencount]=arr[j];
            evencount++;
        }
        else {
            odd_array[oddcount]=arr[j];
            oddcount++;
        }
    }
}