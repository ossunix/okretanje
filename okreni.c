#include <stdio.h>
#include <math.h>

int okreni(int n, int r)
{
    if(n==0)
        return r;
    return   okreni(n / 10, r * 10 + n % 10);
}

int main()
{
	int broj = 123456;
    printf("%d", okreni(broj, 0));
}