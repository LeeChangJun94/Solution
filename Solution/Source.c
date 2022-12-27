#include <stdio.h>


void main()
{
	/* 2022-12-27
	
		산술 연산자 (+, -, *, /, %)
		
		1. 변수 + 변수
		2. 변수 + (리터럴)상수
		3. 변수 - (심볼릭)상수
		4. 리터럴 상수 - 리터럴 상수
		5. 리터럴 상수 * 심볼릭 상수
		6. 심볼릭 상수 / 심볼릭 상수
		
		printf("변수 + 변수 : %d", )

		int value1 = 10;
		int value2 = 20;
		const int value3 = 30;
		const int value4 = 7;

		printf("1. 변수 + 변수 : %d\n", value1 + value2);
		printf("2. 변수 + (리터럴)상수 : %d\n", value1 + 40);
		printf("3. 변수 - (심볼릭)상수 : %d\n", value1 - value3);
		printf("4. 리터럴 상수 - 리터럴 상수 : %d\n", 40 - 50);
		printf("5. 리터럴 상수 * 심볼릭 상수 : %d\n", 40 * value3);
		printf("6. 심볼릭 상수 / 심볼릭 상수 : %d", value3 / value4);

		복합 대입 연산자(+=, -=, *=, /=, %=, |=, ^=)
		int result = 5;

		printf("result 변수의 값 : %d\n", result);
		result += 10;
		printf("result 변수의 값 : %d\n", result);
		result -= 5;
		printf("result 변수의 값 : %d\n", result);
		result *= 3;
		printf("result 변수의 값 : %d\n", result);
		result /= 10;
		printf("result 변수의 값 : %d\n", result);

		부호 없는 자료형
		unsigned char data = 128;

		// [1] [0] [0] [0] [0] [0] [0] [0]
		printf("data의 값 : %d", data);

		오버플로우
		특정한 자료형이 표현할 수 있는 최댓값의 범위를 넘어서 연산을 수행하는 과정
		
				최솟값			최댓값
		char	-128			+127
		short	-32768			+32767
		int		-2147483648		+2147483647

		실수일 때 오버플로우가 발생하면 infinity라는 값으로 출력

		언더플로우
		특정한 자료형이 표현할 수 있는 최솟값의 범위를 넘어서 연산을 수행하는 과정





	-------------------------------*/
	
	char signal = -129;
	printf("signal 변수의 값 : %d", signal);




	

}