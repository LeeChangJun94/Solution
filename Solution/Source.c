#include <stdio.h>


void main()
{
	/* 2022-12-29

		형 변환이란?
		서로 다른 자료형을 가지고 있는 변수끼리 연산이 이루어질 때 기존에 저장했던 자료형을 다른 자료형으로 변환하는 과정

		sizeof() 연산자란?
		피연산자의 크기를 바이트 단위로 변환하는 연산자

		printf("char 자료형의 크기 : %d\n", sizeof(char));
		printf("short 자료형의 크기 : %d\n", sizeof(short));
		printf("int 자료형의 크기 : %d\n", sizeof(int));
		printf("long 자료형의 크기 : %d\n", sizeof(long));
		printf("float 자료형의 크기 : %d\n", sizeof(float));
		printf("double 자료형의 크기 : %d\n", sizeof(double));
		printf("long double 자료형의 크기 : %d\n", sizeof(long double));

		암묵적 형 변환이란?
		서로 다른 자료형으로 연산이 이루어질 떄 자료형의 크기가 큰 자료형으로 변환되는 과정


		// 대입 연산 과정 시 발생하는 암묵적 형 변환
		int integer = 10;
		float result = integer;

		printf("result 변수의 값 : %f\n", result);

		float data = 3.678;
		int memory = data;

		// 표현범위가 작은 데이터에 표현범위가 큰 데이터를 저장하게 되면 암묵적으로 데이터 손실이 발생한다.
		printf("memory 변수의 값 : %d\n", memory);

		정수의 승격
		char box1 = 10;
		short box2 = 20;

		printf("box1과 box2를 연산한 결과 : %d\n", box1 + box2);
		printf("box1과 box2를 연산한 크기 : %d\n", sizeof(box1 + box2));

		피연산자의 자료형 불일치로 발생하는 자동 형 변환
		float number = 2.93f + 14;

		printf("number의 변수의 값 : %f", number);

		명시적 형 변환이란?
		연산이 이루어지기 전에 사용자가 직접 자료형을 변환하는 과정


	-------------------------------*/
	
	int health = 5;
	int damage = 2;

	float result = (float)health / damage;

	// 정수형 변수끼리 연산을 수행하게 되면 정수의 결과값만 가질 수 있다.
	printf("result 변수의 값 = %f", result);
	

}
