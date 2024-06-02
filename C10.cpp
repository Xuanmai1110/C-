/* Viết chương trình C, nhập vào một dãy gồm N số nguyên (N nhập từ bàn phím, 0<N<2x10^9)
Tính và in ra màn hình các số là số hoàn hảo trong dãy vừa nhập
Số hoàn hảo là số có tổng các ước không kể nó bằng chính nó. (VD: 6=1+2+3)*/

#include <stdio.h>

int isPerfect(long num);  // Khai báo trước hàm isPerfect

int main() 
{
    long N, i;

    printf("Nhap so so nguyen N (0<N<2x10^9): ");
    scanf("%ld", &N);  
    if (N <= 0 || N >= 2000000000) 
    {
        printf("Vui long nhap lai.\n");
        return 1;  
    }

    long a[N];  
    printf("Nhap tung phan tu:\n");
    for (i = 1; i <= N; i++) 
    {
        printf("a[%ld]=", i);
        scanf("%ld", &a[i]);  
    }

    printf("Cac so hoan hao trong day: \n");
    for (i = 1; i <= N; i++)
    {
        if (isPerfect(a[i]))  
        {
            printf("%ld\t", a[i]);
        }
    }
    printf("\n");  
    return 0;
}

int isPerfect(long num) 
{
    if (num < 2) 
    {
        return 0;
    }
    long i, sum = 1;  
    for (i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) 
        {
            if (i * i != num) 
            {
                sum += i + num / i;
            } 
            else 
            {
                sum += i;
            }
        }
    }
    return sum == num;
}