#include <stdio.h>


void main()
{
	/* 2022-12-26
		
		비트란?
		데이터를 나타내는 최소의 단위이며, 0 또는 1의 조합으로 논리 계산을 수행하는 단위
	
		10진수 15를 2진수로 표현
		15(10) -> 1111(2)
		
		비트 연산자란?
		비트 단위로 논리 연산을 수행하기 위해 사용하는 연산자

		AND 연산자
		두 개의 피연산자가 모두 1이면 1을 반환하는 연산자
		char x = 7;   //  00000111
		char y = 11;  //  00001011
					  //  00000011 -> 3

		printf("x와 y를 AND 연산한 결과 : %d", x & y);

		
		OR 연산자
		두 개의 피연산자 중에서 하나라도 1이 있다면 1을 반환하는 연산자
		char x = 8;     //  00001000
		char y = 4;     //  00000010
						//  00001010 -> 12

		printf("x와 y를 OR 연산한 결과 : %d", x | y);


		XOR 연산자
		두 개의 피연산자가 서로 같으면 0을 반환하고 다르면 1을 반환하는 연산자
		char x = 6;     //  00000110
		char y = 16;    //  00010000
						//  00010110 -> 22

		printf("x와 y를 XOR 연산한 결과 : %d", x ^ y);
	
		NOT 연산자
		하나의 피연산자 비트를 반전시키는 연산자
	
	-----------------------------------*/

	char x = 1;     // 00000001
	                // 11111110 -> -2

	// 2의 7승은 부호를 나타내는 비트
	// 0은 양수, 1은 음수를 의미
	printf("x를 NOT 연산한 결과 : %d", ~x);

}