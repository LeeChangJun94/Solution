#include <stdio.h>


void main()
{
	/* 2023-01-06

		�迭�̶�?
		���� �ڷ����� ������� �̷���� ���� ����

		�迭�� ��� ù ��° ���Ҵ� 0���� ����

		int array[5];

		array[0] = 10;
		// �迭�� ������ ���Ҹ��� ���� �־��־�� �Ѵ�.
		array[1] = 20;
		array[2] = 30;
		array[3] = 40;
		array[4] = 50;
		// �Ҵ���� ���� �޸� ��� �Ұ�
		//array[5] = 60;


		// for���� �̿��ؼ� array�ȿ� �ִ� ���� ���� ���

		for (int i = 0; i <= 4; i++) {
			printf("array[%d]�� �� : %d\n", i, array[i]);
		}

		// �迭�� ũ��� �������� �Ǵ� �������� ������ �޸� ������ ������ �ȴ�.
		printf("array�� ũ�� : %d\n", sizeof(array));

		// �迭�� �޸� ������ ���α׷��� ���� ���� ������ �� ����.

		�迭 �ʱ�ȭ
		�迭�� ũ��� ������ �� ������, �ʱ�ȭ ��Ͽ��� ������ ��ҿ� ���� �迭�� ũ�Ⱑ �����ȴ�.
		�迭�� �������� �޸� ������ ������, �迭�� �̸��� �迭�� ���� �ּҸ� ����Ų��.

		float space[] = { 1.5f, 2.5f, 3.5f };

		for (int i = 0; i < 3; i++) {
			printf("space[%d]�� �� : %f\n", i, space[i]);
		}

		printf("space�� �ּ� : %p\n", space);

		�� ������

		int exp = 100;
		int level = 10;

		int hp = 100;
		int mp = 0;

		int attack = 10;

		if (exp >= 100 && level > 5) {
			printf("�±�\n");
		}

		if (hp <= 0 || mp <= 0) {
			printf("���� ����\n");
		}

		if (!(attack != 10)) {
			printf("���� ��ȭ");
		}

		��и�




	-------------------------------*/

	int x = 0;
	int y = 0;

	printf("x�� �Է� : ");
	scanf_s("%d", &x);
	printf("y�� �Է� : ");
	scanf_s("%d", &y);


	if (x > 0 && y > 0) {
		printf("�� 1��и�");
	}
	else if (x < 0 && y > 0) {
		printf("�� 2��и�");
	}
	else if (x < 0 && y < 0) {
		printf("�� 3��и�");
	}
	else if (x > 0 && y < 0) {
		printf("�� 4��и�");
	}
	else if (x == 0 && !(y == 0)) {
		printf("y ����");
	}
	else if (!(x == 0) && y == 0) {
		printf("x ����");
	}
	else {
		printf("����");
	}



}