#include <stdio.h>


void main()
{
	/* 2022-12-30

		표준 출력 함수로 실수를 출력할 때 4 byte 크기의 실수형 자료형은 소수점 이하 6자리까지만 표기한다.
		8 byte 크기의 실수형 자료형은 소수점 이하 15자리까지만 표기한다.

		소수점 이하의 값은 정확하지만, 소수점 이상의 값은 반올림하여 표현하므로 정확하게 표기되지 않습니다.

		부동 소수점 오차
		무한소수, 순한소수의 경우 가수부가 표현할 수 있는 비트 수를 넘어가게 되면 손실되는 부분이 생겨서 오차가 발생하는 것

		float 23 bit

		float value = 6.25f;
		double decimal = 3.11;

		// IEEE 754
		//    float			|			double
		// 부호 지수  가수	|	부호		지수		가수
		// [1]  [8]  [23]	|	[1]		[11]	[52]
		printf("value의 값은 : %f\n", value);
		printf("decimal의 값은 : %.16lf\n", decimal);

		switch 문
		어떤 결과에 따라 그 결과부터 실행되는 명령문

		break 문이란?
		특정한 지점에서 분기를 탈출하는 제어문

		switch 문에는 조건식으로 실수형 변수와 실수형 상수를 사용할 수 없다.

		char alphabet = 'A';
		int data = 0;
		float variable = 8.75;

		// switch 문은 해당 조건이 완료되었을 때, break 문이 없으면 나머지 밑에 있는 case 문 까지 계속 실행시키다가 종료한다.
		switch (alphabet) {
			case 0: printf("마을 이동\n");
				break;
			case 1: printf("던전 이동\n");
				break;
			case 2: printf("낚시터 이동\n");
				break;
			default: printf("잘못된 값이 들어왔습니다.\n");
				break;
		}

		반복문이란?
		프로그램 내에서 특정한 작업을 반복적으로 수행하는 명령문입니다.

		증감 연산자
		피연산자를 하나씩 증가시키거나 감소시킬 때 사용하는 연산자입니다.

		전위 증감 연산자
		변수의 값을 증감시킨 후에 연산을 수행한다.

		int temp = 0;

		int memory = ++temp;

		printf("memory의 값 : %d\n", memory);

		memory = memory--;

		printf("memory의 값 : %d\n", memory);

		후위 증감 연산자
		연산을 수행한 다음 변수의 값을 증감시킨다.

		int count = 0;

		int result = count++;

		printf("result의 값 : %d\n", result);

		result = count--;

		printf("result의 값 : %d\n", result);

	-------------------------------*/




}
