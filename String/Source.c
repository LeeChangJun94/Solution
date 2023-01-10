#include <stdio.h>


void main()
{
	/* 2023-01-09

		문자열이란?
		연속적인 메모리 공간에 저장된 문자 변수의 집합

		문자열의 경우 포인터를 이용하여 문자열 상수를 가리키도록 할 수 있으며, 문자열 상수는 데이터 영역의 읽기 전용 공간에 저장되기 때문에 문자열의 값을 변경할 수 없다.

		문자열은 공백도 함께 메모리 공간에 포함하여 크기가 결정되며, 마지막에 문자열의 끝을 알려주는 제어 문자가 추가된다.

		const char* character = "Student";

		//character[0] = 'A';

		printf("character의 값 : %s\n", character);

		character = "Darkness";
		printf("character의 값 : %s\n", character);

		char string[] = "Con\0trol";
		// 문자열을 저장하게 되면 맨 마지막에 무효의 문자까지 메모리 공간에 저장된다.
		string[0] = 'T';
		// 문자열의 경우 서로 연속적인 메모리 공간으로 연결되어 있지만, 문자 배열 사이에 무효의 문자를 넣게 되면 무효의 문자까지만 문자열을 출력한다.
		printf("string의 값 : %s\n", string);

		최댓값
		배열 [3] = {10, 12, 5};



	-------------------------------*/

	int array[3] = { 110, 12, 5 };
	int max = 0;

	for (int i = 0; i < (sizeof(array) / sizeof(int)); i++) {
		if (array[i] > max) {
			max = array[i];
		}
	}

	printf("최대값 : %d\n", max);


}