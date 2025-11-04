#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "practice.h"

int main()
{
	printf("포인터 복습");

	// 포인터 변수 선언하기. 정수형(int)
	// 정수 값의 주소 저장. 주소 연산자 사용
	// 포인터 변수로부터 값을 가져와서 출력. 역참조 연산

	int num = 10;
	int* numPtr = &num;
	printf("포인터 변수의 역참조 값: %d\n", *numPtr);

	// 주소에 대한 이해
	// 컴퓨터는 데이터 저장
	// 주소의 시작점을 기준으로 자료형에 정의된 범위만큼 정해진 방식으로 읽는다

	// int * : 주소? 시작 주소 4바이트

	printf("numPtr의 값: %p\n", numPtr);

	float num2 = 0.2;
	float* num2Ptr = &num2;

	numPtr = num2Ptr;

	printf("numPtr의 현재 주소로부터 읽은 값: %d\n", *numPtr);

	printf("2.포인터와 배열\n");

	int numarr[5] = { 0, }; // 시작 주소로부터 4바이트, 5개니까 20바이트

	printf("numarr의 바이트 크기: %d\n", sizeof(numarr));
	printf("numarr의 시작 주소: %p\n", numarr);

	numarr[1] = 1;
	*(numarr + 1) = 2; //식이 수정할 수 있는 lvalue여야 합니다.

	// numarr[n]은 *(numarr + n)을 알아서 처리해주고 있다(완전히 같지는 않음)
	// 그냥 포인터는 주소가 바뀌지만 배열은 주소가 바뀌면 뒤의 값들을 잃어서 바꿀 수 없다

	printf("numarr[1]의 값: %d\n", numarr[1]);

	// 배열의 크기의 증가를 원함

	printf("3.배열과 상수 포인터\n");

	// 배열은 포인터다

	const char* const inventorytext[3] = {"나무", "바위", "칼"};
	printf("%s\n", inventorytext[0]);
	printf("%s\n", inventorytext[1]);
	printf("%s\n", inventorytext[2]);
	printf("포인터의 크기: %d\n", sizeof(char*)); // 8바이트 운영체제에서는 4바이트가 돌아가지만 4바이트에서 8바이트는 안 돌아간다

	// 기본적으로 배열은 상수 포인터: 주소 변경 불가
	// 저장할 수 있는 자료형을 상수로 표현

	Test1();
	Test2();
}
	