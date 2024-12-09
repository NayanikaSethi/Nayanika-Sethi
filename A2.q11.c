#include <stdio.h>

int main() {
    int arr[100], n, i, pos, value;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert: ");
    scanf("%d", &pos);

    if (pos > n + 1 || pos < 1)
     {
        printf("Invalid position!\n");
    } else {
        printf("Enter the value to insert: ");
        scanf("%d", &value);

        for (i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }

        arr[pos - 1] = value;

        n++; 
        printf("Array after insertion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}