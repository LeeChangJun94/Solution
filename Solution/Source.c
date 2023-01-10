#include <stdio.h>

void Function() {
	for (int i = 0; i < 5; i++) {
		printf("Academy\n");
	}
}

float Calculator() {

	// 반환형이란?
	// 함수가 실행을 마치고 돌려주는 결과값의 자료형
	return 9.998f;

	// 함수의 경우 자료형과 반환하는 값의 형태가 일치하지 않으면 원하는 값을 얻을수 없으며, 같은 이름의 함수를 중복으로 선언할 수 없다.
}
// 매개변수란?
// 함수의 정의에서 전달받은 인수를 함수 내부로 전달하기 위해 사용하는 변수
int Damage(int x) {
	// 매개변수는 여러개를 생성할 수 있으며, 함수 내부에서만 연산이 이루어진다.
	printf("매개변수 x의 값 : %d\n", x);
	return x;
}



int main()
{
	/* 2023-01-10

		함수란?
		하나의 특별한 목적의 작업을 수행하기 위해 독립적으로 설계된 코드의 집합

		함수의 선언
		자료형 함수의 이름 (매개변수)

		Function();
		printf("Calculator 함수의 값 : %f\n", Calculator());

		int attack = 10;

		// 인수란?
		// 함수가 호출될 때 매개변수에 실제로 전달되는 값
		Damage(attack);

		두 변수의 값 바꾸기


	-------------------------------*/
	
	int x = 10;
	int y = 20;
	int temporary = 0;

	temporary = x;
	x = y;
	y = temporary;

	printf("x의 값 : %d\n", x);
	printf("y의 값 : %d\n", y);




	return 0;
}