/*
	��¥: 2025 / 10 / 17
	�н���ǥ: ����� ���� ����غ���
	�ǽ���ǥ: 
*/

#include <stdio.h>    // �ڵ带 �ۼ��� �� ǥ�� ����� ���
					  // C���� �ܼ�â�� ���ڸ� ��� �Ϸ��� �� ���

void Example()
{
	printf("3��° ���� ����!\n");

	Example();

	int num1;						// ������ �����͸� �����ϴ� num1�̶�� ������ ����

	num1 = 10;						// num1�� ��������� 10�̶�� ���ڸ� �����ϰڴ�.

	int num2 = num1 * 1 + 10;

	num1 = num2;

	printf("num1: %d\n", num1);

	////////////////////////////////////////////////////////

	// ����

	// �ڷ���: �޸��� ũ�Ⱑ �󸶳� �Ǵ°� + �ڷ��� ������ �����ΰ�?
	// char: -128 ~ 127

	int num3 = 200;

	char charMaxValue = 127;       // 7f

	char num4 = 200;			   // ������ �ִ� �� �˰ڴµ�, �׷��� ��� ���ľ� �ұ�?

	// ��Ʈ, ���α׷���, ��ȹ
	// '�޸�' <- ����ȭ
	// �׷����� �پ ����� <- �뷮�� Ŀ��, ���� ���� �� ���ư���

	printf("num3: %d\n", num3);

	printf("num4: %d\n\n\n\n", num4);

	short num5 = 200;

	long num6 = 200;

	long long num7 = 200;


}

/*

	����: ���ӿ��� �����ϰ� ���� ��� �����

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
	printf("%d�� �ǰ�! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP);
}

int main()
{
	
	// ���ӿ��� �����Լ� �������� �� �� �ִ� ����

	int Level = 1;
	int HP = 1000000;
	int NowHP = HP;
	int Hit = 100;
	int Damage = 0;
	int Defence = 5;
	int HitCombo = 0;

	//����� 1 ~ 10�ܰ�� ������ ���

	HitCombo += 1;
	Damage = Hit * (HitCombo * HitCombo) - (Level * Defence);
	NowHP = NowHP - Damage;
	printf("%d�� �ǰ�! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP);
	
	HitCombo += 1;
	Damage = Hit * (HitCombo * HitCombo) - (Level * Defence);
	NowHP = NowHP - Damage;
	printf("%d�� �ǰ�! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP);

	HitCombo += 1;
	Damage = Hit * (HitCombo * HitCombo) - (Level * Defence);
	NowHP = NowHP - Damage;
	printf("%d�� �ǰ�! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP);

	HitCombo += 1;
	Damage = Hit * (HitCombo * HitCombo) - (Level * Defence);
	NowHP = NowHP - Damage;
	printf("%d�� �ǰ�! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP);

	HitCombo += 1;
	Damage = Hit * (HitCombo * HitCombo) - (Level * Defence);
	NowHP = NowHP - Damage;
	printf("%d�� �ǰ�! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP);

	HitCombo += 1;
	Damage = Hit * (HitCombo * HitCombo) - (Level * Defence);
	NowHP = NowHP - Damage;
	printf("%d�� �ǰ�! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP); 
	
	HitCombo += 1;
	Damage = Hit * (HitCombo * HitCombo) - (Level * Defence);
	NowHP = NowHP - Damage;
	printf("%d�� �ǰ�! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP); 
	
	HitCombo += 1;
	Damage = Hit * (HitCombo * HitCombo) - (Level * Defence);
	NowHP = NowHP - Damage;
	printf("%d�� �ǰ�! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP); 
	
	HitCombo += 1;
	Damage = Hit * (HitCombo * HitCombo) - (Level * Defence);
	NowHP = NowHP - Damage;
	printf("%d�� �ǰ�! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP);
	
	HitCombo += 1;
	Damage = Hit * (HitCombo * HitCombo) - (Level * Defence);
	NowHP = NowHP - Damage;
	printf("%d�� �ǰ�! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP); 
	
	HitCombo += 1;
	Damage = Hit * (HitCombo * HitCombo) - (Level * Defence);
	NowHP = NowHP - Damage;
	printf("%d�� �ǰ�! %d Damage... HP: %d\n\n", HitCombo, Damage, NowHP);
}