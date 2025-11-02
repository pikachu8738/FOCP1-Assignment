#include <stdio.h>
int main() {
    int n;
    int count,first=0,second=1;
    printf("Enter the number of terms you want the fibonacci sequence to: ");
    scanf("%d",&n);
    for (int i=0 ; i<n; i++) {
        if (i<=1) {
        count=i;}
        else {
        count=first + second ;
        first=second;
        second = count;
    }
    printf("%d",count);
}
}