/* Viết chương trình C nhập vào một số nguyên N (0<N<100). 
Liệt kê ra màn hình tất cả các xâu nhị phân độ dài N */

#include <stdio.h>
#include <math.h>

int main() 
{
    int N;
    printf("Nhap vao so nguyen N (0 < N < 100): ");
    scanf("%d", &N);
    if (N <= 0 || N >= 100) 
    {
        printf("N khong hop le. Vui long nhap lai.\n");
    }
    else
    {
        int total = pow(2, N); // Tổng số xâu nhị phân độ dài N là 2^N
        for (int i = 0; i < total; i++) 
        {
            for (int j = N - 1; j >= 0; j--) 
            {
                printf("%d", (i >> j) & 1); // In ra bit thứ j của số i
            }
            printf("\n"); // Xuống dòng sau khi in hết một xâu nhị phân
        }
    }
    return 0;
}