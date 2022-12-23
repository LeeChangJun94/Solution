#include <stdio.h>
#include "Header.h"

void main()
{
	/* 2022-12-23
	
		상수란?
		프로그램이 실행되는 동안 더 이상 변경할 수 없는 메모리 공간
	
		상수는 메모리 공간을 생성하는 동시에 초기화를 해야한다.

		const -> 한 번 저장된 값은 더 이상 변경할 수 없다.

		const int box = 10;
		리터럴 상수 : 메모리 공간을 가지고 있지 않은 상수
		ex) 10
		심볼릭 상수 : 메모리 공간을 가지고 있는 상수
		ex) box
		int variable = 0;
		variable = box;
	
		헤더 파일
		컴파일러에 의해 다른 소스 파일에 자동으로 포함된 소스 코드의 파일

		파일 처리 전처리문 (#include)
		시스템 파일이나 사용자 정의 파일을 프로그램 소스에 삽입하여 사용하기 위한 선언문

		파일 처리 전처리문의 경우 라이브러리 파일을 참조할 때는 <외부파일.h>로 가져오며,
		현재 경로에서 외부 파일을 참조할 때는 "외부 파일.h"로 가져온다.

		표준 출력 함수
		일련의 데이터를 형식 문자열에 지정되어 있는 형태로 출력하는 함수
		printf();
		표준 출력 함수의 경우 출력할 변수를 사용하려면 서식이라는 특수한 문자를 받도록 설정해야한다.
	
		서식 지정자
		출력하기 위한 자료형의 정보를 명시적으로 지정해주는것
		정수 서식 : %d
		실수 서식 : %f
		문자 서식 : %c



	------------------------*/
	int variable = 0;
	const int box = 10;
	variable = box;

	//box = 50;

	alphabet = 'G';

	int value = 10;

	printf("안녕하세요.");

	printf("%d", value);
	printf("%c", alphabet);
	printf("%f", 5.157);
}