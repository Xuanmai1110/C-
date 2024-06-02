/* Viết chương trình C, nhập vào một dãy gồm N số nguyên (N nhập từ bàn phím, 0<N<2x10^9). 
Tìm và in ra màn hình vị trí các phần tử có giá trị lớn nhất trong dãy */

#include <stdio.h>
#include <limits.h>  // Để sử dụng INT_MIN và INT_MAX
#define MAX 200000
int main() 
{
    int N, i, a[MAX], max = INT_MIN, min =INT_MAX;

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
            printf("a[%ld]=",i);
            scanf("%ld",&a[i]);
            if (a[i]>max)
            {
                max = a[i];
            }
        }
        printf("Vi tri cac phan tu co gia tri lon nhat trong day: ");
        for(i=1;i<=N;i++)
        if(a[i]==max)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}