#include <stdio.h>


void main()
{
	/* 2023-01-05

		������ ����
		������ ������ ũ��� �߾� ó�� ��ġ�� �� ���� ó���� �� �ִ� ũ��� ��������, �� ���� ó���� �� �ִ� ũ��� �ü���� ���� ũ�Ⱑ �����ȴ�.

		char* charPtr;
		int* intPtr;
		double* doublePtr;

		//printf("charPtr�� ũ�� : %u\n", sizeof(charPtr));
		//printf("intPtr�� ũ�� : %u\n", sizeof(intPtr));
		//printf("doublePtr�� ũ�� : %u\n", sizeof(doublePtr));

		char variable = 'A';
		int value = 100;
		double decimal = 17.86;

		// ������ ������ �����ϱ� ���� ���� ������ ������ �ڷ����� ������ ������ �ڷ����� ��ġ�ؾ� �Ѵ�.
		charPtr = &variable;
		intPtr = &value;
		doublePtr = &decimal;

		*doublePtr = 62.14;


		printf("intPtr�� ����Ű�� �� : %d\n", *intPtr);
		printf("doublePtr�� ����Ű�� �� : %f\n", *doublePtr);
		printf("decimal ������ �� : %f\n", decimal);

		printf("charPtr�� �ּ� : %p\n", charPtr);
		printf("intPtr�� �ּ� : %p\n", intPtr);
		printf("doublePtr�� �ּ� : %p\n", doublePtr);

		printf("charPtr + 1�� �ּ� : %p\n", charPtr + 1);
		printf("intPtr + 1�� �ּ� : %p\n", intPtr + 1);
		printf("doublePtr + 1�� �ּ� : %p\n", doublePtr + 1);

		��� ���� ������

		int resource = 30;
		int data = 9999;

		// ������ ������ ����� ����Ű�� �����ͷ� ����
		const int* ptr = &resource;

		// ptr ������ �����Ͽ� ���� ������ �� ����.
		//*ptr = 1111;

		printf("ptr�� ����Ű�� �� : %d\n", *ptr);
		printf("ptr ������ �� : %p\n", ptr);

		ptr = &data;

		printf("ptr�� ����Ű�� �� : %d\n", *ptr);
		printf("ptr ������ �� : %p\n", ptr);

		������ ���

		float volume = 5.66;
		float signal = 8.23;

		float* const ptr = &volume;

		//ptr = &signal;
		*ptr = 3.14;

		printf("volume�� �ּ� : %p\n", &volume);
		printf("ptr�� ����Ű�� �� : %f\n", *ptr);
		printf("ptr�� �� : %p\n", ptr);

		��Ȳ ������

		int number1 = 10;
		int number2 = 20;
		int result = 0;

		//				����			��		����
		result = number1 > number2 ? number1 : number2;

		printf("result ������ �� : %d\n", result);



	-------------------------------*/






}