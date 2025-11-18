#include <stdio.h>
#define MAX 100  

void countEvenOdd(int *arr, int n, int *even, int *odd) {
    int *ptr = arr;
    int *end = arr + n;
    *even = 0;
    *odd = 0;

    for (; ptr < end; ptr++) {
        if (*ptr % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
}

int main() {
    int n;
    int arr[MAX];
    int even, odd;
    int i;

    printf("Nhap so phan tu cua mang (toi da 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Nhap arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    countEvenOdd(arr, n, &even, &odd);

    printf("So phan tu chan: %d\n", even);
    printf("So phan tu le: %d\n", odd);

    return 0;
}

