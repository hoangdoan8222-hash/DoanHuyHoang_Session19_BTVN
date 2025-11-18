#include <stdio.h>
#define MAX 100  

int findMax(int *ptr, int n) {
    int max = *ptr;
    int *end = ptr + n;

    for (; ptr < end; ptr++) {
        if (*ptr > max) {
            max = *ptr;
        }
    }

    return max;
}

int main() {
    int n;
    int arr[MAX]; 
    int i;

    printf("Nhap so phan tu cua mang (toi da 100): ");
    scanf("%d", &n);

    if (n > MAX || n <= 0) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

    
    for (i = 0; i < n; i++) {
        printf("Nhap arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Phan tu lon nhat trong mang la: %d\n", findMax(arr, n));

    return 0;
}

