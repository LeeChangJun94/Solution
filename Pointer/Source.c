#include <stdio.h>


void main()
{
	/* 2023-01-04

		scanf�Լ�
		ǥ�� �Է� �Լ���, ���� ������ �����͸� �پ��� ���Ŀ� ���� �Է����ִ� �Լ�

		char alphabet = 'A';
		int value = 0;
		float decimal = 0.0;


		scanf_s("%d,%c,%f", &value, &alphabet, 1, &decimal);
		// ǥ�� �Է� �Լ��� �Է��� ������ ������ ���� �۾����� �Ѿ �� ����.

		printf("alphabet�� �� : %c\n", alphabet);
		printf("value�� �� : %d\n", value);
		printf("decimal�� �� : %f\n", decimal);

		�����Ͷ�?
		�޸��� �ּ� ���� ������ �� �ִ� ����

		�ڷ��� * ������ ����

	-------------------------------*/

	int integer = 100;
	int data = 300;


	int* ptr = &integer;



	// ������ ������ �ڽ��� �޸� ������ ������ ������, ������ ������ ���� ������ �ּҸ� �����ϰ� �Ǹ� �ش� ������ ���� �ּҸ� ����Ų��.

	printf("integer ������ �ּ� : %p\n", &integer);
	printf("ptr ������ �� : %p\n", ptr);
	printf("ptr ������ ���� �ּ� : %p\n", &ptr);

	ptr = &data;

	// ������ ������ ����Ű�� �޸� ������ �ڷ����� �� �� �����Ƿ� �����Ͱ� ����Ű�� �޸��� �ڷ����� �������־�� �Ѵ�.

	printf("data ������ �ּ� : %p\n", &data);
	printf("ptr ������ �� : %p\n", ptr);

}