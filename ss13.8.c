#include <stdio.h>

// Hàm t?m ý?c chung l?n nh?t (UCLN)
int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Gán giá tr? cho hai s? nguyên
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);

    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    // T?m UCLN b?ng cách g?i hàm gcd
    int result = ucln(num1, num2);

    // In k?t qu?
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", num1, num2, result);

    return 0;
}

