#include <stdio.h>
#include <math.h>
int main() {
    int x,count=0,a,result=0,remainder,c;
    printf("Enter the number to be checked for armstrong: ");
    scanf("%d",&x); 
    a=x;
    c=x;
    while (a!=0) {
        a/=10;
        ++count;
    }
    printf ("The number of digits in the number inputted are: %d \n",count);
    while (c!=0) {
        remainder=c%10;
        result += pow(remainder,count);
        c=c/10;
    }
    if (result==x) {
        printf("The number inputted is an armstrong number");
    }
    else {
        printf("The number inputted is not an armstrong number");
    }
    return 0;
}