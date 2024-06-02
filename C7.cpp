/* Viết chương trình C, nhập vào một dãy gồm N số nguyên (N nhập từ bàn phím, 0<N<2x10^9). 
Tính và in ra màn hình giá trị lớn nhất, nhỏ nhất trong dãy */

#include <stdio.h>
#include <limits.h>  // Để sử dụng INT_MIN và INT_MAX

int main() 
{
    int N, i, num, max = INT_MIN, min =INT_MAX;

    printf("Nhap so so nguyen N (0<N<2x10^9): ");
    scanf("%d", &N);
    if (N <= 0 || N >= 2e9) 
    {
        printf("Vui long nhap lai.\n");
    }
    else
    {
        printf("Nhap tung phan tu:\n");
        for (i = 1; i <= N; i++) 
        {
            scanf("%d",&num);
            if (num>max)
            {
                max = num;
            }
            if (num<min)
            {
                min = num;
            }
        }
    }

    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);

    return 0;
}