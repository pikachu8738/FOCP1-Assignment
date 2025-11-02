#include <stdio.h>
int main() {
    int x,y;
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("\n");
    printf("Enter the second number: ");
    scanf("%d",&y);
    printf("\n");
    while (x!=y) {
        if (x>y) {
            x-=y;
        }
        else {
            y-=x;
        }
    }
    printf ("The HCF of the inputted numbers is : %d",x);
}