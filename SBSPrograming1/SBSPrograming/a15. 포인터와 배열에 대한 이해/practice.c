#include "practice.h"

void Func(const char* Group[]);

void SelectJob()
{
	printf("Test1 실습 예제입니다.\n\n");

	int numarr[10];

	// 배열 안의 값을 반복문으로 [0]은 0, [1]은 1이 대응되도록

	for(int i = 0; i < 10; i++)
	{
		numarr[i] = i;
		printf("배열의 값: %d\n", numarr[i]);
	}

	printf("\n");

	for (int i = 0; i < 10; i++)
	{
		//주소의 연산 방식으로 표현, [0]는 9, [1]은 8 

		*(numarr + i) = (10 - 1) - i;

		printf("배열의 값: %d\n", numarr[i]);
	}

	printf("\n");
}

void Test2()
{
	printf("Test2 실습 예제입니다.\n\n");

	const char* Group1[3] = {"A", "B", "C"};
	const char* Group2[3] = {"사과", "바나나", "포도"};
	const char* Group3[3] = {"전사", "마법사", "승려"};

	// 배열을 인자로 받는 함수 선언
	// 또 다른 배열의 주소를 가져오는 포인터 선언

	Func(Group1);   // A B C
	Func(Group2);   // 사과 바나나 포도
	Func(Group3);   // 전사 마법사 승려
}

void Func(const char* Group[])
{
	for(int i = 0; i < 3; i++)
	{
		printf("%s\n", Group[i]);		
	}

	printf("\n");
}