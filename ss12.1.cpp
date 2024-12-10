#include <stdio.h>

// Hàm tính t?ng 2 s?
int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    printf("Nhap so thu nhat: ");
    scanf("%d", &x);
    printf("Nhap so thu hai: ");
    scanf("%d", &y);

    int tong = tinhTong(x, y);
    printf("Tong cua %d va %d la: %d\n", x, y, tong);

    return 0;
}

