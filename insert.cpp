#include <stdio.h>
void insertNumber(int arr[], int *n, int num) {
    int i;
    for (i = *n - 1; (i >= 0 && arr[i] > num); i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = num;
    (*n)++;
}

int main() {
    int arr[100], n, num;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted order: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to be inserted: ");
    scanf("%d", &num);
    insertNumber(arr, &n, num);
    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

