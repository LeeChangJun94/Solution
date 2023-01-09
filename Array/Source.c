#include <stdio.h>


void main()
{
	/* 2023-01-06

		배열이란?
		같은 자료형의 변수들로 이루어진 유한 집합

		배열의 경우 첫 번째 원소는 0부터 시작

		int array[5];

		array[0] = 10;
		// 배열은 각각의 원소마다 값을 넣어주어야 한다.
		array[1] = 20;
		array[2] = 30;
		array[3] = 40;
		array[4] = 50;
		// 할당박지 않은 메모리 사용 불가
		//array[5] = 60;


		// for문을 이용해서 array안에 있는 값을 전부 출력

		for (int i = 0; i <= 4; i++) {
			printf("array[%d]의 값 : %d\n", i, array[i]);
		}

		// 배열의 크기는 컴파일이 되는 시점부터 고정된 메모리 공간을 가지게 된다.
		printf("array의 크기 : %d\n", sizeof(array));

		// 배열의 메모리 공간은 프로그램이 실행 동안 변경할 수 없다.

		배열 초기화
		배열의 크기는 생략할 수 있으며, 초기화 목록에서 설정한 요소에 따라 배열의 크기가 결정된다.
		배열은 연속적인 메모리 공간을 가지며, 배열의 이름은 배열의 시작 주소를 가리킨다.

		float space[] = { 1.5f, 2.5f, 3.5f };

		for (int i = 0; i < 3; i++) {
			printf("space[%d]의 값 : %f\n", i, space[i]);
		}

		printf("space의 주소 : %p\n", space);

		논리 연산자

		int exp = 100;
		int level = 10;

		int hp = 100;
		int mp = 0;

		int attack = 10;

		if (exp >= 100 && level > 5) {
			printf("승급\n");
		}

		if (hp <= 0 || mp <= 0) {
			printf("게임 오버\n");
		}

		if (!(attack != 10)) {
			printf("무기 강화");
		}

		사분면




	-------------------------------*/

	int x = 0;
	int y = 0;

	printf("x값 입력 : ");
	scanf_s("%d", &x);
	printf("y값 입력 : ");
	scanf_s("%d", &y);


	if (x > 0 && y > 0) {
		printf("제 1사분면");
	}
	else if (x < 0 && y > 0) {
		printf("제 2사분면");
	}
	else if (x < 0 && y < 0) {
		printf("제 3사분면");
	}
	else if (x > 0 && y < 0) {
		printf("제 4사분면");
	}
	else if (x == 0 && !(y == 0)) {
		printf("y 절편");
	}
	else if (!(x == 0) && y == 0) {
		printf("x 절편");
	}
	else {
		printf("원점");
	}



}