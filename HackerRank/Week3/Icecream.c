#include <stdio.h>
#include <stdlib.h>

int* icecreamParlor(int m, int arr_count, int* arr, int* result_count) {
    *result_count = 2;
    int *result = (int*)malloc(2 * sizeof(int));

    for (int i = 0; i < arr_count - 1; i++) {
        for (int j = i + 1; j < arr_count; j++) {
            if (arr[i] + arr[j] == m) {
                result[0] = i + 1;
                result[1] = j + 1;
                return result;
            }
        }
    }
    return result;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int m, n;
        scanf("%d", &m);
        scanf("%d", &n);

        int *arr = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int result_count;
        int* result = icecreamParlor(m, n, arr, &result_count);

        for (int i = 0; i < result_count; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");

        free(arr);
        free(result);
    }

    return 0;
}
