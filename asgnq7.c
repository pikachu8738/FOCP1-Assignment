#include <stdio.h>
int main() {
    for (int i=1;i<=10;i++){
        if (i==1 || i==9) {
            printf("0");
        }
        else {
            printf(" ");
        }
    }
    printf("\n");
    for (int j=1; j<=3;j++) {
        for (int k=1;k<=10;k++) {
            if (j==1) {
                if (k==1 || k == 10) {
                    printf("0");
                }
                else if (k==2 || k==9) {
                    printf("1");
                }
                else {
                    printf(" ");
                }
            }
            if (j==2) {
                if (k==1 || k==3 || k==8 || k==10) {
                    printf("0");
                }
                else if (k==2 || k==9) {
                    printf("1");
                }
                else {
                    printf(" ");
                }
            }
            if (j==3) {
                if (k%2==0 && k!=6) {
                    printf("1");
                }
                else if (k==5 || k==6) {
                    printf(" ");
                }
                else {
                    printf("0");
                }
            }
        }
        printf("\n");
    }
    for (int p=1;p<=10;p++) {
        if (p%2==0 && p!=6 && p!=8) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
}