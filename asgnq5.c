#include <stdio.h>
int main () {
    int arr[2];
    for (int i =0; i<2;i++) {
        printf("Enter the coordinates: ");
        scanf("%d",&arr[i]);
    }
    if (arr[0]>0 && arr[1]>0) {
        printf("The given coordinates are present in the first quadrant");
    }
    else if (arr[0]<0 && arr[1]>0) {
        printf("The given coordinates are in second quadrant");
    }
    else if (arr[0]>0 && arr[1]<0) {
        printf("The given coordinates are in third quadrant");
    }
    else {
        printf("The given quadrants are in the fourth quadrant");
    }
}