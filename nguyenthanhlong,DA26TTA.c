#include <stdio.h>

int main() {
    int a, b;

    // Nhập vào 2 số nguyên
    printf("Nhap so nguyen thu nhat (a): ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu hai (b): ");
    scanf("%d", &b);

    // Tính và xuất tổng, hiệu, tích
    printf("\n--- KET QUA ---\n");
    printf("Tong: %d + %d = %d\n", a, b, a + b);
    printf("Hieu: %d - %d = %d\n", a, b, a - b);
    printf("Tich: %d * %d = %d\n", a, b, a * b);

    // Kiểm tra điều kiện mẫu số khác 0 trước khi chia
    if (b != 0) {
        // Ép kiểu (float) để lấy được kết quả số thập phân chính xác
        float thuong = (float)a / b;
        printf("Thuong: %d / %d = %.2f\n", a, b, thuong);
    } else {
        printf("Thuong: Khong the chia cho 0!\n");
    }

    return 0;
}
