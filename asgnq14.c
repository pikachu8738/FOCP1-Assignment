#include <stdio.h>
int main() {
    int a,count=0;
    printf("Enter the length of the array: ");
    scanf("%d",&a);
    int arr[a] ;
    for (int i=0;i<a;i++) {
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<a;j++) {
        int isprime=1;
        if (arr[j]==0 || arr[j]==1){
            isprime=0;
        }
        else {
            for (int k=2;k<arr[j];k++) {
                if (arr[j]%k==0) {
                    isprime=0;
                    break;
                }
                else {
                    continue;
                }
            }
        }
        if (isprime==1){
            count++;
        }
        else{
            continue;
        }
    }
    printf("The total number of prime numbers in the array inputted are: %d",count);
}