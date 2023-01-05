#include <stdio.h>


void main()
{
	/* 2023-01-05

		포인터 연산
		포인터 변수의 크기는 중앙 처리 장치가 한 번에 처리할 수 있는 크기로 정해지며, 한 번에 처리할 수 있는 크기는 운영체제에 따라 크기가 결정된다.

		char* charPtr;
		int* intPtr;
		double* doublePtr;

		//printf("charPtr의 크기 : %u\n", sizeof(charPtr));
		//printf("intPtr의 크기 : %u\n", sizeof(intPtr));
		//printf("doublePtr의 크기 : %u\n", sizeof(doublePtr));

		char variable = 'A';
		int value = 100;
		double decimal = 17.86;

		// 포인터 변수를 저장하기 위해 값을 저장할 변수의 자료형과 포인터 변수의 자료형이 일치해야 한다.
		charPtr = &variable;
		intPtr = &value;
		doublePtr = &decimal;

		*doublePtr = 62.14;


		printf("intPtr이 가리키는 값 : %d\n", *intPtr);
		printf("doublePtr이 가리키는 값 : %f\n", *doublePtr);
		printf("decimal 변수의 값 : %f\n", decimal);

		printf("charPtr의 주소 : %p\n", charPtr);
		printf("intPtr의 주소 : %p\n", intPtr);
		printf("doublePtr의 주소 : %p\n", doublePtr);

		printf("charPtr + 1의 주소 : %p\n", charPtr + 1);
		printf("intPtr + 1의 주소 : %p\n", intPtr + 1);
		printf("doublePtr + 1의 주소 : %p\n", doublePtr + 1);

		상수 지시 포인터

		int resource = 30;
		int data = 9999;

		// 포인터 변수는 상수를 가리키는 포인터로 선언
		const int* ptr = &resource;

		// ptr 변수를 참조하여 값을 변경할 수 없다.
		//*ptr = 1111;

		printf("ptr이 가리키는 값 : %d\n", *ptr);
		printf("ptr 변수의 값 : %p\n", ptr);

		ptr = &data;

		printf("ptr이 가리키는 값 : %d\n", *ptr);
		printf("ptr 변수의 값 : %p\n", ptr);

		포인터 상수

		float volume = 5.66;
		float signal = 8.23;

		float* const ptr = &volume;

		//ptr = &signal;
		*ptr = 3.14;

		printf("volume의 주소 : %p\n", &volume);
		printf("ptr이 가리키는 값 : %f\n", *ptr);
		printf("ptr의 값 : %p\n", ptr);

		삼황 연산자

		int number1 = 10;
		int number2 = 20;
		int result = 0;

		//				조건			참		거짓
		result = number1 > number2 ? number1 : number2;

		printf("result 변수의 값 : %d\n", result);



	-------------------------------*/






}