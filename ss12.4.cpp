#include <stdio.h>

// Hàm t?m s? l?n nh?t trong m?ng
int timSoLonNhat(int arr[], int kichThuoc) {
    if (kichThuoc <= 0) {
        printf("Mang rong, khong co gia tri lon nhat.\n");
        return -1; // Tr? v? -1 n?u m?ng r?ng
    }

    int max = arr[0]; // Gi? s? ph?n t? ð?u tiên là l?n nh?t
    for (int i = 1; i < kichThuoc; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int mang[] = {1, 5, 3, 9, 2};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    int soLonNhat = timSoLonNhat(mang, kichThuoc);
    if (soLonNhat != -1) {
        printf("So lon nhat trong mang la: %d\n", soLonNhat);
    }

    return 0;
}

