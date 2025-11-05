#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Sample.h"

/*
* 구조체
*/

/*
* 열거형
* 상수: 값을 고정시키겠다
* const 변수 선언;
* #define PI 3.14
*/

// 열거형: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9

// 열거형을 쉽게 쓰는 typedef

// 조건문과 열 거형을 같이 쓰는 방식

#define	MONSTERCOUNT 5
#define	MONSTERRACE 5

typedef enum
{
	점수,
	동전,
	체력
}GameText;

typedef enum  // 무명 형식
{
	ORC,
    HUMAN,
	UNDEAD,
	ANGEL,
	DEVIL,
	UNDEFINED = 100
}Race;

int main()
{
	// enum GameText GameText = SCORE;

	// 상수는 값을 고정시켜서 바꾸지 못 하게 하는 방법
	const int count = 10;
	printf("몬스터의 수: %d\n", MONSTERCOUNT);
	printf("몬스터의 수: %d\n", count);

	const char* inventorytext[3] = { "점수", "동전", "체력" };
	const char* Monstertext[3] = { "ORC", "HUMAN", "UNDEAD" };

	printf("%s\n", inventorytext[점수]); // 숫자를 어떤 의미를 가지도록 약속했다
	printf("%s\n", Monstertext[ORC]);

	GameText newGameText = 점수;

	newGameText = 동전;

	//if(newGameText == 점수)
	//{
	//	printf("점수를 출력하는 예제입니다.\n");
	//}
	//
	//else if(newGameText == 동전)
	//{
	//	printf("동전을 출력하는 예제입니다.\n");
	//}
	//
	//else if (newGameText == 체력)
	//{
	//	printf("체력을 출력하는 예제입니다.\n");
	//}

	Race race = ORC;

	switch(race)
	{
	case ORC:
		printf("나는 종족이 오크입니다\n");
		break;
	case HUMAN:
		printf("나는 종족이 사람입니다\n");
		break;
	case UNDEAD:
		printf("나는 종족이 언데드입니다\n");
		break;
	case ANGEL:
		printf("나는 종족이 천사입니다\n");
		break;
	case DEVIL:
		printf("나는 종족이 악마입니다\n");
		break;
	default: race = UNDEFINED;
		break;
	}

	JOB job = 무직;
	int baseHP = 10;
	int baseATTACK = 10;
	int baseMP = 10;

	int* baseHPptr = &baseHP;
	int* baseATTACKptr = &baseATTACK;
	int* baseMPptr = &baseMP;

	SelectJob(&job); // 직업을 선택하는 함수
	JobStat(job, baseHPptr, baseATTACKptr, baseMPptr);

	// job에 따른 스탯 변화
}

// 심화 과제
// 열거형으로 턴제 시스템
// 플레이어 -> 행동 -> 적 -> 행동
// TURNSYSTEM 플레이어 턴?
// TURNSYSTEM 행동
// TURNSYSTEM 적 턴?
// TURNSYSTEM 행동