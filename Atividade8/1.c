#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int temp;
    int swapped;

    do {
        swapped = 0;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = 1;
            }
        }
    } while (swapped);
}

int main() {
    int n;

    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Digite os elementos do array:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    printf("Array ordenado:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
