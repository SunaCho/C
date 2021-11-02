// for문
#include <stdio.h>

int main(void)
{
	int input_number;
	int i;

	printf("숫자를 입력하세요 : ");
	scanf("%d", &input_number);

	printf("%d의 약수 : ", input_number);
	
	for(i = 1; i <= input_number; i++)
	{
		if(input_number % i == 0)
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}

