#include <stdio.h>


void main()
{
	/* 2023-01-04

		scanf함수
		표준 입력 함수로, 여러 종류의 데이터를 다양한 서식에 맞춰 입력해주는 함수

		char alphabet = 'A';
		int value = 0;
		float decimal = 0.0;


		scanf_s("%d,%c,%f", &value, &alphabet, 1, &decimal);
		// 표준 입력 함수는 입력을 수행할 때까지 다음 작업으로 넘어갈 수 없다.

		printf("alphabet의 값 : %c\n", alphabet);
		printf("value의 값 : %d\n", value);
		printf("decimal의 값 : %f\n", decimal);

		포인터란?
		메모리의 주소 값을 저장할 수 있는 변수

		자료형 * 포인터 변수

	-------------------------------*/

	int integer = 100;
	int data = 300;


	int* ptr = &integer;



	// 포인터 변수도 자신의 메모리 공간을 가지고 있으며, 포인터 변수에 대한 변수의 주소를 저장하게 되면 해당 변수의 시작 주소를 가리킨다.

	printf("integer 변수의 주소 : %p\n", &integer);
	printf("ptr 변수의 값 : %p\n", ptr);
	printf("ptr 변수의 고유 주소 : %p\n", &ptr);

	ptr = &data;

	// 포인터 변수가 가리키는 메모리 공간의 자료형은 알 수 없으므로 포인터가 가리키는 메모리의 자료형을 선언해주어야 한다.

	printf("data 변수의 주소 : %p\n", &data);
	printf("ptr 변수의 값 : %p\n", ptr);

}