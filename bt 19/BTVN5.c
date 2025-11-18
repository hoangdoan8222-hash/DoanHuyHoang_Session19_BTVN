#include <stdio.h>
#define MAX 100  

int compareArrays(int *a, int *b, int n) {
    int *pa = a;
    int *pb = b;
    int *end = a + n;

    for (; pa < end; pa++, pb++) {
        if (*pa != *pb) {
            return 0; 
        }
    }

    return 1;  
}

int main() {
    int n;
    int a[MAX], b[MAX];
    int i;

    printf("Nhap so phan tu cua hai mang (toi da 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

    printf("Nhap gia tri cho mang a:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Nhap gia tri cho mang b:\n");
    for (i = 0; i < n; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }

    if (compareArrays(a, b, n)) {
        printf("Hai mang giong nhau.\n");
    } else {
        printf("Hai mang khac nhau.\n");
    }

    return 0;
}

