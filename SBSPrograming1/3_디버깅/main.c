/*
	날짜: 2025 / 10 / 17
	학습목표: 디버깅 도구 사용해보기
	실습목표: 
*/

#include <stdio.h>    // 코드를 작성할 때 표준 입출력 헤더
					  // C언어로 콘솔창에 글자를 출력 하려면 이 헤더

void Example()
{
	printf("3번째 강의 시작!\n");

	Example();

	int num1;						// 정수형 데이터를 저장하는 num1이라는 변수를 선언

	num1 = 10;						// num1의 저장공간에 10이라는 숫자를 저장하겠다.

	int num2 = num1 * 1 + 10;

	num1 = num2;

	printf("num1: %d\n", num1);

	////////////////////////////////////////////////////////

	// 정수

	// 자료형: 메모리의 크기가 얼마나 되는가 + 자료의 정보가 무엇인가?
	// char: -128 ~ 127

	int num3 = 200;

	char charMaxValue = 127;       // 7f

	char num4 = 200;			   // 문제가 있는 건 알겠는데, 그래서 어떻게 고쳐야 할까?

	// 아트, 프로그래밍, 기획
	// '메모리' <- 최적화
	// 그래픽이 뛰어난 결과물 <- 용량이 커짐, 옛날 폰은 안 돌아간다

	printf("num3: %d\n", num3);

	printf("num4: %d\n\n\n\n", num4);

	short num5 = 200;

	long num6 = 200;

	long long num7 = 200;


}

/*

	과제: 게임에서 구현하고 싶은 기능 만들기

*/

void Hitting()
{
	int Level = 1;
	int HP = 1000000;
	int NowHP = HP;
	int Hit = 100;
	int Damage = 0;
	int Defence = 5;
	int HitCombo = 0;

	HitCombo += 1;
	Damage = Hit * (HitCombo * HitCombo) - (Level * Defence);
	NowHP = NowHP - Damage;
	printf("%d대 피격! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP);
}

int main()
{
	
	// 게임에서 이차함수 공식으로 쓸 수 있는 예제

	int Level = 1;
	int HP = 1000000;
	int NowHP = HP;
	int Hit = 100;
	int Damage = 0;
	int Defence = 5;
	int HitCombo = 0;

	//결과를 1 ~ 10단계로 나눠서 출력

	HitCombo += 1;
	Damage = Hit * (HitCombo * HitCombo) - (Level * Defence);
	NowHP = NowHP - Damage;
	printf("%d대 피격! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP);
	
	HitCombo += 1;
	Damage = Hit * (HitCombo * HitCombo) - (Level * Defence);
	NowHP = NowHP - Damage;
	printf("%d대 피격! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP);

	HitCombo += 1;
	Damage = Hit * (HitCombo * HitCombo) - (Level * Defence);
	NowHP = NowHP - Damage;
	printf("%d대 피격! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP);

	HitCombo += 1;
	Damage = Hit * (HitCombo * HitCombo) - (Level * Defence);
	NowHP = NowHP - Damage;
	printf("%d대 피격! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP);

	HitCombo += 1;
	Damage = Hit * (HitCombo * HitCombo) - (Level * Defence);
	NowHP = NowHP - Damage;
	printf("%d대 피격! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP);

	HitCombo += 1;
	Damage = Hit * (HitCombo * HitCombo) - (Level * Defence);
	NowHP = NowHP - Damage;
	printf("%d대 피격! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP); 
	
	HitCombo += 1;
	Damage = Hit * (HitCombo * HitCombo) - (Level * Defence);
	NowHP = NowHP - Damage;
	printf("%d대 피격! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP); 
	
	HitCombo += 1;
	Damage = Hit * (HitCombo * HitCombo) - (Level * Defence);
	NowHP = NowHP - Damage;
	printf("%d대 피격! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP); 
	
	HitCombo += 1;
	Damage = Hit * (HitCombo * HitCombo) - (Level * Defence);
	NowHP = NowHP - Damage;
	printf("%d대 피격! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP);
	
	HitCombo += 1;
	Damage = Hit * (HitCombo * HitCombo) - (Level * Defence);
	NowHP = NowHP - Damage;
	printf("%d대 피격! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP); 
	
	HitCombo += 1;
	Damage = Hit * (HitCombo * HitCombo) - (Level * Defence);
	NowHP = NowHP - Damage;
	printf("%d대 피격! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP);
}