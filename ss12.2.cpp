#include <stdio.h>

// Hàm in t?t c? ph?n t? c?a m?ng
void inMang(int arr[], int kichThuoc) {
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int mang[] = {1, 2, 3, 4, 5};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    printf("Cac phan tu trong mang la: ");
    inMang(mang, kichThuoc);

    return 0;
}

