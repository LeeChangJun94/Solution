#include <stdio.h>


void main()
{
	/* 2022-12-28

		조건문이란?
		어떤 조건이 주어질 때 해당 조건에 따라 동작을 수행하도록 실행하는 명령문

		printf("10은 0보다 크다. 관계 연산자의 값 : %d\n", 10 > 0);
		printf("10은 0보다 작다. 관계 연산자의 값 : %d\n", 10 < 0);

		printf("10은 0보다 크거나 같다. 관계 연산자의 값 : %d\n", 10 >= 0);
		printf("10은 0보다 작거나 같다. 관계 연산자의 값 : %d\n", 10 <= 0);

		printf("10은 10과 같다. 관계 연산자의 값 : %d\n", 10 == 10);
		printf("10은 10과 같지 않다. 관계 연산자의 값 : %d\n", 10 != 10);

		관계 연산자는 조건이 맞을 떄 1이라는 값을 반환하며, 조건이 틀릴 때 0이라는 값으로 반환한다.

		if문이란?
		어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는 명령문

		int health = 100;

		if(health > 0) {
			printf("Player는 살아있는 상태입니다.");
		}

		else if문이란?
		if문의 조건이 틀릴 때 else if문의 조건이 맞다면 실행되는 명령문
		if문에 연결된 모든 조건문의 조건이 맞을 때 가장 위에 있는 조건문만 실행된다.

		int money = 100;

		if (money > 500) {
			printf("아이템 구매");
		}
		else if (money > 50) {
			printf("아이템 정보 표시");
		}
		else if (money == 100) {
			printf("아이템 대여");
		}

		else문이란?
		if문과 else if문의 조건이 다 틀리면 실행되는 명령문

		int stage = 1;

		if (stage == 1) {
			printf("첫 번째 스테이지입니다.");
		}
		else if (stage == 2) {
			printf("두 번째 스테이지입니다.");
		}
		else {
			printf("비밀의 방에 도착하였습니다.");
		}

		카멜 표기법
		각 단어의 첫 문자를 대문자로 표기하되, 이름의 첫 문자는 소문자로 작성하는 표기법
		int camelCase = 10;

		파스칼 표기법
		각 단어의 첫 문자를 대문자로 표기하는 표기법
		int CountDown, PascalCase = 50;

		스네이크 표기법
		각 단어의 사이를 '_'로 구분해주는 표기법
		int Snake_Case = 100;

		헝가리안 표기법
		이름 앞에 변수의 타입을 접두어로 넣어주는 표기법
		ch(char), i(int), db(double)
		int idata = 1000;

		시프트 연산자
		비트값을 왼쪽 또는 오른쪽으로 이동시키는 연산자

		int value = 10; // 0000 1010

		// value << 2 -> 0010 1000
		printf("value 변수를 왼쪽 2칸 시프트 연산한 결과 : %d\n", value <<= 2);
		// 0010 1000
		printf("value 변수의 값 : %d\n", value);
		// 0001 0100 = 20
		printf("value 변수를 오른쪽 1칸 시프트 연산한 결과 : %d\n", value >> 1);

		printf("value 변수의 값 : %d\n", value);


	-------------------------------*/




}