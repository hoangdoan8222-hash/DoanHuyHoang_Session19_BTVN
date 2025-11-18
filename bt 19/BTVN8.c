#include <stdio.h>
#define MAX 100

int isPrime(int n) {
    if (n < 2) return 0;
    int i;
    for (i = 2; i*i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void inputArray(int *arr, int n) {
    int *ptr = arr;
    int *end = arr + n;
    for (; ptr < end; ptr++) {
        printf("Nhap phan tu: ");
        scanf("%d", ptr);
    }
}

void printEven(int *arr, int n) {
    int *ptr = arr;
    int *end = arr + n;
    printf("Cac phan tu chan: ");
    for (; ptr < end; ptr++) {
        if (*ptr % 2 == 0) {
            printf("%d ", *ptr);
        }
    }
    printf("\n");
}

void printPrime(int *arr, int n) {
    int *ptr = arr;
    int *end = arr + n;
    printf("Cac phan tu nguyen to: ");
    for (; ptr < end; ptr++) {
        if (isPrime(*ptr)) {
            printf("%d ", *ptr);
        }
    }
    printf("\n");
}

void reverseArray(int *arr, int n) {
    int i;
    for (i = 0; i < n/2; i++) {
        int temp = *(arr + i);
        *(arr + i) = *(arr + n - 1 - i);
        *(arr + n - 1 - i) = temp;
    }
    printf("Mang da duoc dao nguoc.\n");
}

void sortAscending(int *arr, int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
    printf("Mang da sap xep tang dan.\n");
}

void sortDescending(int *arr, int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (*(arr + i) < *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
    printf("Mang da sap xep giam dan.\n");
}

int searchElement(int *arr, int n, int x) {
    int *ptr = arr;
    int *end = arr + n;
    int index = 0;
    for (; ptr < end; ptr++, index++) {
        if (*ptr == x) {
            return index; 
        }
    }
    return -1; 
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

int main() {
    int arr[MAX];
    int n = 0;
    int choice;
    int running = 1;

    while (running) {
        printf("\n===== MENU =====\n");
        printf("1. Nhap vao so phan tu va gia tri mang\n");
        printf("2. In ra cac phan tu chan\n");
        printf("3. In ra cac phan tu la so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("6. Tim kiem mot phan tu\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
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
                if (n > 0)
                    printEven(arr, n);
                else
                    printf("Mang chua duoc nhap!\n");
                break;

            case 3:
                if (n > 0)
                    printPrime(arr, n);
                else
                    printf("Mang chua duoc nhap!\n");
                break;

            case 4:
                if (n > 0)
                    reverseArray(arr, n);
                else
                    printf("Mang chua duoc nhap!\n");
                break;

            case 5:
                if (n > 0) {
                    int subChoice;
                    printf("1. Sap xep tang dan\n");
                    printf("2. Sap xep giam dan\n");
                    printf("Lua chon: ");
                    scanf("%d", &subChoice);
                    if (subChoice == 1)
                        sortAscending(arr, n);
                    else if (subChoice == 2)
                        sortDescending(arr, n);
                    else
                        printf("Lua chon khong hop le!\n");
                } else {
                    printf("Mang chua duoc nhap!\n");
                }
                break;

            case 6:
                if (n > 0) {
                    int x;
                    printf("Nhap gia tri can tim: ");
                    scanf("%d", &x);
                    int pos = searchElement(arr, n, x);
                    if (pos != -1)
                        printf("Tim thay %d o vi tri %d\n", x, pos);
                    else
                        printf("Khong tim thay %d trong mang\n", x);
                } else {
                    printf("Mang chua duoc nhap!\n");
                }
                break;

            case 7:
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

