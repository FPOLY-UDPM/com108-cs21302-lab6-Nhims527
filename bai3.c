/******************************************************************************
 * Họ và tên: [Trần Quốc Cường]
 * MSSV:      [PS48626]
 * Lớp:       [COM108-CS21302]
 *****************************************************************************/

//  BÀI 3: SẮP XẾP MẢNG THEO THỨ TỪ GIẢM DẦN 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả mảng đã sắp xếp 

#include <stdio.h>

int main() {
    int n, i, j, temp;
    scanf("%d", &n);

    int mang[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &mang[i]); 
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (mang[i] > mang[j]) {
                temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }

    return 0;
}


