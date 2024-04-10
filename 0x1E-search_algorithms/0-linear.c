#include <stdio.h>

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }

    for (size_t i = 0; i < size; i++) {
        printf("Comparing value %d with array[%zu] = %d\n", value, i, array[i]);
        if (array[i] == value) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int value = 30;
    size_t size = sizeof(arr) / sizeof(arr[0]);

    int index = linear_search(arr, size, value);

    if (index != -1) {
        printf("Value %d found at index %d\n", value, index);
    } else {
        printf("Value %d not found in the array\n", value);
    }

    return 0;
}
