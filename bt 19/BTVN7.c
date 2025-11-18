#include <stdio.h>
#define MAX 100

void inputArray(int *arr, int n) {
    int *ptr = arr;
    int *end = arr + n;
    for (; ptr < end; ptr++) {
        printf("Nhap phan tu: ");
        scanf("%d", ptr);
    }
}

void printArray(int *arr, int n) {
    int *ptr = arr;
    int *end = arr + n;
    printf("Cac phan tu trong mang: ");
    for (; ptr < end; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");
}

int sumArray(int *arr, int n) {
    int *ptr = arr;
    int *end = arr + n;
    int sum = 0;
    for (; ptr < end; ptr++) {
        sum += *ptr;
    }
    return sum;
}

int maxArray(int *arr, int n) {
    int *ptr = arr;
    int *end = arr + n;
    int max = *ptr;
    for (; ptr < end; ptr++) {
        if (*ptr > max) {
            max = *ptr;
        }
    }
    return max;
}

int lengthArray(int n) {
    return n;  
}

int main() {
    int arr[MAX];
    int n = 0;
    int choice;
    int running = 1;

    while (running) {
        printf("\n===== MENU =====\n");
        printf("1. Nhap vao so phan tu va gia tri mang\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu cua mang (toi da 100): ");
                scanf("%d", &n);
                if (n <= 0 || n > MAX) {
                    printf("So phan tu khong hop le!\n");
                    n = 0;
                } else {
                    inputArray(arr, n);
                }
                break;
            case 2:
                if (n > 0) {
                    printArray(arr, n);
                } else {
                    printf("Mang chua duoc nhap!\n");
                }
                break;
            case 3:
                if (n > 0) {
                    printf("Do dai mang la: %d\n", lengthArray(n));
                } else {
                    printf("Mang chua duoc nhap!\n");
                }
                break;
            case 4:
                if (n > 0) {
                    printf("Tong cac phan tu trong mang: %d\n", sumArray(arr, n));
                } else {
                    printf("Mang chua duoc nhap!\n");
                }
                break;
            case 5:
                if (n > 0) {
                    printf("Phan tu lon nhat trong mang: %d\n", maxArray(arr, n));
                } else {
                    printf("Mang chua duoc nhap!\n");
                }
                break;
            case 6:
                running = 0;
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
                break;
        }
    }

    return 0;
}

