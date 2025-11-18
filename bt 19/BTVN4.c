#include <stdio.h>
#define MAX 100  

int countValue(int *arr, int n, int x) {
    int *ptr = arr;
    int *end = arr + n;
    int count = 0;

    for (; ptr < end; ptr++) {
        if (*ptr == x) {
            count++;
        }
    }

    return count;
}

int main() {
    int n, x;
    int arr[MAX];
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

    printf("Nhap gia tri x can dem: ");
    scanf("%d", &x);

    int count = countValue(arr, n, x);

    printf("Gia tri %d xuat hien %d lan trong mang.\n", x, count);

    return 0;
}

