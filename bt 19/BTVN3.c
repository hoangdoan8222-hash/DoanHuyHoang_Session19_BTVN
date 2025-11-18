#include <stdio.h>
#define MAX 100  

void average(int *arr, int n, float *result) {
    int *ptr = arr;
    int *end = arr + n;
    int sum = 0;

    for (; ptr < end; ptr++) {
        sum += *ptr;  
    }

    *result = (float)sum / n; 
}

int main() {
    int n;
    int arr[MAX];
    float avg;
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

    average(arr, n, &avg);

    printf("Gia tri trung binh cua mang la: %.2f\n", avg);

    return 0;
}

