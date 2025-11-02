#include <stdio.h>

// Function to find a peak element
int findPeakElement(int arr[], int n) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if mid is a peak element
        // Handle edge cases for first and last elements
        if ((mid == 0 || arr[mid] >= arr[mid - 1]) &&
            (mid == n - 1 || arr[mid] >= arr[mid + 1])) {
            return arr[mid]; // Found a peak
        }
        // If the element to the left is greater, search in the left half
        else if (mid > 0 && arr[mid - 1] > arr[mid]) {
            high = mid - 1;
        }
        // If the element to the right is greater, search in the right half
        else {
            low = mid + 1;
        }
    }
    return -1; // No peak found (should not happen in a non-empty array with distinct elements)
}

int main() {
    int arr1[] = {1, 3, 20, 4, 1, 0};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Peak element in arr1: %d\n", findPeakElement(arr1, n1));

    int arr2[] = {5, 10, 20, 15};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Peak element in arr2: %d\n", findPeakElement(arr2, n2));

    int arr3[] = {10, 20, 15, 2, 23, 90, 67};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Peak element in arr3: %d\n", findPeakElement(arr3, n3));

    int arr4[] = {1};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    printf("Peak element in arr4: %d\n", findPeakElement(arr4, n4));

    int arr5[] = {1, 2, 3, 4, 5};
    int n5 = sizeof(arr5) / sizeof(arr5[0]);
    printf("Peak element in arr5: %d\n", findPeakElement(arr5, n5));

    int arr6[] = {5, 4, 3, 2, 1};
    int n6 = sizeof(arr6) / sizeof(arr6[0]);
    printf("Peak element in arr6: %d\n", findPeakElement(arr6, n6));

    return 0;
}
