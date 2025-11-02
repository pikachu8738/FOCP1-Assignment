#include <stdio.h>
int main() {
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    while (b!=0) {
        int carry = a & b;
        a = a^b;
        b = carry <<1;
    }
    int x= ~b;
    int i =1;
    while (i !=0) {
        int j = x & i;
        x = x ^ j;
        i = j<<1;
    }
    while (x!=0) {
        int k = a & x; 
        a= a^x ;
        x= k<<1;
    }
    printf("The result after subtraction is: %d",a-b);
}