//(a) �־��� ������ ¦���̸� 1�� ��ȯ�ϰ� Ȧ���̸� 0�� ��ȯ�ϴ� �Լ� int even(int n)
//(b) �־��� ������ ������ ���ϴ� �Լ� int absolute(int n)
//(c) �־��� ������ �����̸� -1��, ����̸� 1�� 0�̸� 0�� ��ȯ�ϴ� �Լ� int sign(int n)

#include <stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main()
{
	int n;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &n);
	printf("even()�� ���: %d\n", even(n));
	printf("absolute()�� ���: %d\n", absolute(n));
	printf("sign()�� ���: %d\n", sign(n));
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