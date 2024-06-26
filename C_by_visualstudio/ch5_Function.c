//(a) 주어진 정수가 짝수이면 1을 반환하고 홀수이면 0을 반환하는 함수 int even(int n)
//(b) 주어진 정수의 절댓값을 구하는 함수 int absolute(int n)
//(c) 주어진 정수가 음수이면 -1을, 양수이면 1을 0이면 0을 반환하는 함수 int sign(int n)

#include <stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main()
{
	int n;
	printf("정수를 입력하시오:");
	scanf_s("%d", &n);
	printf("even()의 결과: %d\n", even(n));
	printf("absolute()의 결과: %d\n", absolute(n));
	printf("sign()의 결과: %d\n", sign(n));
	return 0;
}

int even(int n)
{
	return (n % 2 == 0) ? 1 : 0;
}

int absolute(int n)
{
	return (n > 0) ? n : -n;
}

int sign(int n)
{
	return (n > 0) ? 1 : -1;
}