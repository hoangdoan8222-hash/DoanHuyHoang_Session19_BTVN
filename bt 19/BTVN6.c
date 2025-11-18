#include <stdio.h>
#define MAX 100 

void copyArray(int *src, int *dest, int n) {
    int *pSrc = src;
    int *pDest = dest;
    int *end = src + n;

    for (; pSrc < end; pSrc++, pDest++) {
        *pDest = *pSrc;  
    }
}

int main() {
    int n;
    int A[MAX], B[MAX];
    int i;

    printf("Nhap so phan tu cua mang (toi da 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

    printf("Nhap gia tri cho mang A:\n");
    for (i = 0; i < n; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    copyArray(A, B, n);

    printf("Mang B sau khi sao chep la:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}

