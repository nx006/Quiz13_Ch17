#include <stdio.h>

void Swap1(int* pt1, int* pt2) // num1, num2�� ���� �ٲٴ� �Լ�
{
	int temp = *pt1;
	*pt1 = *pt2;
	*pt2 = temp;
}

void Swap2(int** dp1, int** dp2) // num1, num2�� �ٲ��� �ʰ�, �̸� ����Ű�� ������(ptr[0], ptr[1])�� swap
{
	int* temp = *dp1;
	*dp1 = *dp2;
	*dp2 = temp;
}

void Swap3(int** dp1, int** dp2) // Swap1�� ���� num1, num2�� ���� �ٲٴ� �Լ�
{
	int temp = **dp1;
	**dp1 = **dp2;
	**dp2 = temp;
}

void printResult(int num1, int num2, int** ptr)
{
	printf("num1 num2: %d %d\n", num1, num2);
	printf("ptr0 ptr1: %d %d\n", *ptr[0], *ptr[1]);
}

int main(void)
{
	int num1 = 10, num2 = 20;
	int* ptr[] = { &num1, &num2 };

	printf("<before Swap>\n");
	printResult(num1, num2, ptr);

	Swap1(ptr[0], ptr[1]);
	printf("<after Swap1>\n");
	printResult(num1, num2, ptr);

	Swap2(&ptr[0], &ptr[1]);
	printf("<after Swap2>\n");
	printResult(num1, num2, ptr);

	Swap3(&ptr[0], &ptr[1]);
	printf("<after Swap3>\n");
	printResult(num1, num2, ptr);

	return 0;
}