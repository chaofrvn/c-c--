#include <conio.h>
#include <stdio.h>
#include <math.h>
int power(int number, int power)
{
    int ans = 1;
    for (int i = 0; i < power; i++)
    {
        ans *= number;
    }
    return ans;
}
int main()
{
    float diem;
    scanf("%f", &diem);

    if (diem < 0 || diem > 10)
        printf("hay nhap lai");
    if (diem < 6.5 && diem >= 0)
        printf("xin chao va khong hen gap lai");
    if (diem >= 6.5 && diem < 8)
        printf("tien tien");
    if (diem >= 8 && diem <= 10)
        printf("ban la hoc sinh gioi ");

    return 0;
}