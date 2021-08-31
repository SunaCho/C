#include <stdio.h>

int main(void)
{
	long a, b, c;
	int res = 1;
	scanf("%ld %ld %ld", &a, &b, &c);

	if (b>=c)
    {
        printf("-1");
        return 0;
    }
	res = a / (c - b)+1;
	printf("%d", res);
    return 0;
}