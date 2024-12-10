#include <stdio.h>

// Hàm tính giai th?a
long long tinhGiaiThua(int n) {
    if (n < 0) {
        printf("Khong tinh duoc giai thua cho so am.\n");
        return -1; // Tr? v? -1 n?u n âm
    }
    long long giaiThua = 1;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    return giaiThua;
}

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    long long ketQua = tinhGiaiThua(n);
    if (ketQua != -1) {
        printf("Giai thua cua %d la: %lld\n", n, ketQua);
    }

    return 0;
}

