/*
	날짜: 2025 / 10 / 16
	학습목표: 자료형과 변수
	실습목표: 실제 게임을 분석해서 자료형을 이해한다.
*/

// 자료형 Data Type
// Data: 숫자, 그림, 기호등 정의되어있지 않은 정보
// 컴퓨터에게 명령을 내리고 싶다
// 더블킬(문자), 킬 수 스코어 정보(정수), 스탯 정보(소수)
// 이미지 1920 X 1080, 소리(파장)

// 자료들의 특징에 따라서 형태를 분류를 했다. Type
// 자료형: 문자, 정수, 실수

// 자료형을 이용하는 방법
// 타입 "이름" = 값;		<-	변수

// 함수를 사용하는 방법
// int: 정수
// float: 실수
// char: 문자
// string: 문자열

#include <stdio.h>				

int main()
{
	// 더블킬 게임에 출력하고 싶다.
	printf("더블킬\n");

	// 레드팀과 블루팀의 스코어를 출력하고 싶다.
	printf("10 VS 25\n");

	//챔피언이 가지고 있는 스텟을 출력하고 싶다.
	printf("AD : 10\n");
	////////////////////////////////////////////////////////
	int ThreshLevel = 1;
	int ThreshHP = 620;
	int ThreshMana = 273;
	int ThreshAttack = 56;
	float ThreshAttackSpeed = 0.625f;
	int ThreshDefence = 33;

	float ThreshGrowHP = 120.0f;
	float ThreshGrowMana = 44.0f;
	float ThreshGrowAttack = 2.0f;
	float ThreshGrowAttackSpeed = 3.5f;
	float ThreshGrowDefence = 0.0f;


	printf("\n\n쓰레쉬의 정보\n\n");

	printf("%d레벨 정보\n\n", ThreshLevel);

	printf("체력 : %d( + %f)\n", ThreshHP, ThreshGrowHP);
	printf("현재 체력 : %f\n\n", ThreshHP + (ThreshGrowHP * (ThreshLevel - 1)));

	printf("마나 : %d( + %f)\n", ThreshMana, ThreshGrowMana);
	printf("현재 마나 : %f\n\n", ThreshMana + (ThreshGrowMana * (ThreshLevel - 1)));

	printf("공격력 : %d( + %f)\n", ThreshAttack, ThreshGrowAttack);
	printf("현재 공격력 : %f\n\n", ThreshAttack + (ThreshGrowAttack * (ThreshLevel - 1)));

	printf("공격 속도 : %f( + %f)\n", ThreshAttackSpeed, ThreshGrowAttackSpeed);
	printf("현재 공격 속도 : %f\n\n", ThreshAttackSpeed + (ThreshGrowAttackSpeed * (ThreshLevel - 1)));

	printf("방어력 : %d( + %f)\n", ThreshDefence, ThreshGrowDefence);
	printf("현재 방어력 : %f\n\n", ThreshDefence + (ThreshGrowDefence * (ThreshLevel - 1)));

	// 이 정보를 컴퓨터가 내가 원하는 대로 실행 했는가?
	// 만족 VS 조금 더

	// 5레벨일때

	ThreshLevel = 5;

	printf("\n\n쓰레쉬의 정보\n\n");

	printf("%d레벨 정보\n\n", ThreshLevel);

	printf("체력 : %d( + %f)\n", ThreshHP, ThreshGrowHP);
	printf("현재 체력 : %f\n\n", ThreshHP + (ThreshGrowHP * (ThreshLevel - 1)));

	printf("마나 : %d( + %f)\n", ThreshMana, ThreshGrowMana);
	printf("현재 마나 : %f\n\n", ThreshMana + (ThreshGrowMana * (ThreshLevel - 1)));

	printf("공격력 : %d( + %f)\n", ThreshAttack, ThreshGrowAttack);
	printf("현재 공격력 : %f\n\n", ThreshAttack + (ThreshGrowAttack * (ThreshLevel - 1)));

	printf("공격 속도 : %f( + %f)\n", ThreshAttackSpeed, ThreshGrowAttackSpeed);
	printf("현재 공격 속도 : %f\n\n", ThreshAttackSpeed + (ThreshGrowAttackSpeed * (ThreshLevel - 1)));

	printf("방어력 : %d( + %f)\n", ThreshDefence, ThreshGrowDefence);
	printf("현재 방어력 : %f\n\n", ThreshDefence + (ThreshGrowDefence * (ThreshLevel - 1)));

	// 다른 캐릭터

	int Level = 1;
	int Attack = 43;
	int Defence = 55;
	int HP = 940;
	float HealthRegen = 1.28f;
	int Stamina = 430;
	float StaminaRegen = 3.2f;
	float AttackSpeed = 0.1f;
	float MoveSpeed = 3.5f;

	float GrowAttack = 4.5f;
	float GrowDefence = 3.0f;
	float GrowHP = 95.0f;
	float GrowHealthRegen = 0.077f;
	float GrowStamina = 15.0f;
	float GrowStaminaRegen = 0.02f;
	float GrowAttackSpeed = 0.0f;
	float GrowMoveSpeed = 0.0f;

	printf("\n\n재키의 정보\n\n");

	printf("%d레벨 정보\n\n", Level);

	printf("공격력 : %d( + %f)\n", Attack, GrowAttack);
	printf("현재 공격력 : %f\n\n", Attack + (GrowAttack * (Level - 1)));

	printf("방어력 : %d( + %f)\n", ThreshAttack, ThreshGrowAttack);
	printf("현재 방어력 : %f\n\n", ThreshAttack + (ThreshGrowAttack * (ThreshLevel - 1)));

	printf("체력 : %d( + %f)\n", ThreshAttack, ThreshGrowAttack);
	printf("현재 체력 : %f\n\n", ThreshAttack + (ThreshGrowAttack * (ThreshLevel - 1)));

	printf("체력 재생 : %d( + %f)\n", ThreshAttack, ThreshGrowAttack);
	printf("현재 체력 재생 : %f\n\n", ThreshAttack + (ThreshGrowAttack * (ThreshLevel - 1)));

	printf("스태미나 : %d( + %f)\n", ThreshAttack, ThreshGrowAttack);
	printf("현재 스태미나 : %f\n\n", ThreshAttack + (ThreshGrowAttack * (ThreshLevel - 1)));

	printf("스태미나 재생 : %d( + %f)\n", ThreshAttack, ThreshGrowAttack);
	printf("현재 스태미나 재생 : %f\n\n", ThreshAttack + (ThreshGrowAttack * (ThreshLevel - 1)));

	printf("공격 속도 : %d( + %f)\n", ThreshAttack, ThreshGrowAttack);
	printf("현재 공격 속도 : %f\n\n", ThreshAttack + (ThreshGrowAttack * (ThreshLevel - 1)));

	printf("이동 속도 : %d( + %f)\n", ThreshAttack, ThreshGrowAttack);
	printf("현재 이동 속도 : %f\n\n", ThreshAttack + (ThreshGrowAttack * (ThreshLevel - 1)));

	// 분석해보고 싶은 게임의 정보, 수식 표현
}