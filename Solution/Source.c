#include <stdio.h>


void main()
{
	/* 2022-12-29

		�� ��ȯ�̶�?
		���� �ٸ� �ڷ����� ������ �ִ� �������� ������ �̷���� �� ������ �����ߴ� �ڷ����� �ٸ� �ڷ������� ��ȯ�ϴ� ����

		sizeof() �����ڶ�?
		�ǿ������� ũ�⸦ ����Ʈ ������ ��ȯ�ϴ� ������

		printf("char �ڷ����� ũ�� : %d\n", sizeof(char));
		printf("short �ڷ����� ũ�� : %d\n", sizeof(short));
		printf("int �ڷ����� ũ�� : %d\n", sizeof(int));
		printf("long �ڷ����� ũ�� : %d\n", sizeof(long));
		printf("float �ڷ����� ũ�� : %d\n", sizeof(float));
		printf("double �ڷ����� ũ�� : %d\n", sizeof(double));
		printf("long double �ڷ����� ũ�� : %d\n", sizeof(long double));

		�Ϲ��� �� ��ȯ�̶�?
		���� �ٸ� �ڷ������� ������ �̷���� �� �ڷ����� ũ�Ⱑ ū �ڷ������� ��ȯ�Ǵ� ����


		// ���� ���� ���� �� �߻��ϴ� �Ϲ��� �� ��ȯ
		int integer = 10;
		float result = integer;

		printf("result ������ �� : %f\n", result);

		float data = 3.678;
		int memory = data;

		// ǥ�������� ���� �����Ϳ� ǥ�������� ū �����͸� �����ϰ� �Ǹ� �Ϲ������� ������ �ս��� �߻��Ѵ�.
		printf("memory ������ �� : %d\n", memory);

		������ �°�
		char box1 = 10;
		short box2 = 20;

		printf("box1�� box2�� ������ ��� : %d\n", box1 + box2);
		printf("box1�� box2�� ������ ũ�� : %d\n", sizeof(box1 + box2));

		�ǿ������� �ڷ��� ����ġ�� �߻��ϴ� �ڵ� �� ��ȯ
		float number = 2.93f + 14;

		printf("number�� ������ �� : %f", number);

		����� �� ��ȯ�̶�?
		������ �̷������ ���� ����ڰ� ���� �ڷ����� ��ȯ�ϴ� ����


	-------------------------------*/
	
	int health = 5;
	int damage = 2;

	float result = (float)health / damage;

	// ������ �������� ������ �����ϰ� �Ǹ� ������ ������� ���� �� �ִ�.
	printf("result ������ �� = %f", result);
	

}
