/* ���ϸ�: assignment-02.c
* ����: PA02. ȭ�� �µ�(F)�� �Ǽ��� �Է¹޾� ���� �µ�(C)�� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ���: �����
* ��¥: 2025.4.9
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment02();
double temperature(double x);

int main()
{
	assignment02();
	return 0;
}

void assignment02()
{
	double fahrenheit = 0;

	printf("ȭ���µ�? ");
	scanf("%lf", &fahrenheit);

	double celsius = temperature(fahrenheit);

	printf("%.2lf F = %.2lf C", fahrenheit, celsius);
}

double temperature(double x)
{
	double celsius = (x - 32) * 5 / 9;
	return celsius;
}