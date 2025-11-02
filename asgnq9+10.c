#include <stdio.h>
int main() {
    int a,count;
    printf("Enter the length of the score array: ");
    scanf("%d",&a);
    int arr[a] ;
    for (int i=0;i<a;i++) {
        printf("Enter the score: ");
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<a;j++) {
        if (arr[j]==99) {
            count++;
            //if you want first occurence of 99 then break;
            printf("The index at which 99 score is present is %d \n",j);
        }
        else {
            continue;
        }
    }
    printf("The number of 99 score in the marks array is %d",count);

}