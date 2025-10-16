/*
	��¥: 2025 / 10 / 16
	�н���ǥ: �ڷ����� ����
	�ǽ���ǥ: ���� ������ �м��ؼ� �ڷ����� �����Ѵ�.
*/

// �ڷ��� Data Type
// Data: ����, �׸�, ��ȣ�� ���ǵǾ����� ���� ����
// ��ǻ�Ϳ��� ����� ������ �ʹ�
// ����ų(����), ų �� ���ھ� ����(����), ���� ����(�Ҽ�)
// �̹��� 1920 X 1080, �Ҹ�(����)

// �ڷ���� Ư¡�� ���� ���¸� �з��� �ߴ�. Type
// �ڷ���: ����, ����, �Ǽ�

// �ڷ����� �̿��ϴ� ���
// Ÿ�� "�̸�" = ��;		<-	����

// �Լ��� ����ϴ� ���
// int: ����
// float: �Ǽ�
// char: ����
// string: ���ڿ�

#include <stdio.h>				

int main()
{
	// ����ų ���ӿ� ����ϰ� �ʹ�.
	printf("����ų\n");

	// �������� ������� ���ھ ����ϰ� �ʹ�.
	printf("10 VS 25\n");

	//è�Ǿ��� ������ �ִ� ������ ����ϰ� �ʹ�.
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


	printf("\n\n�������� ����\n\n");

	printf("%d���� ����\n\n", ThreshLevel);

	printf("ü�� : %d( + %f)\n", ThreshHP, ThreshGrowHP);
	printf("���� ü�� : %f\n\n", ThreshHP + (ThreshGrowHP * (ThreshLevel - 1)));

	printf("���� : %d( + %f)\n", ThreshMana, ThreshGrowMana);
	printf("���� ���� : %f\n\n", ThreshMana + (ThreshGrowMana * (ThreshLevel - 1)));

	printf("���ݷ� : %d( + %f)\n", ThreshAttack, ThreshGrowAttack);
	printf("���� ���ݷ� : %f\n\n", ThreshAttack + (ThreshGrowAttack * (ThreshLevel - 1)));

	printf("���� �ӵ� : %f( + %f)\n", ThreshAttackSpeed, ThreshGrowAttackSpeed);
	printf("���� ���� �ӵ� : %f\n\n", ThreshAttackSpeed + (ThreshGrowAttackSpeed * (ThreshLevel - 1)));

	printf("���� : %d( + %f)\n", ThreshDefence, ThreshGrowDefence);
	printf("���� ���� : %f\n\n", ThreshDefence + (ThreshGrowDefence * (ThreshLevel - 1)));

	// �� ������ ��ǻ�Ͱ� ���� ���ϴ� ��� ���� �ߴ°�?
	// ���� VS ���� ��

	// 5�����϶�

	ThreshLevel = 5;

	printf("\n\n�������� ����\n\n");

	printf("%d���� ����\n\n", ThreshLevel);

	printf("ü�� : %d( + %f)\n", ThreshHP, ThreshGrowHP);
	printf("���� ü�� : %f\n\n", ThreshHP + (ThreshGrowHP * (ThreshLevel - 1)));

	printf("���� : %d( + %f)\n", ThreshMana, ThreshGrowMana);
	printf("���� ���� : %f\n\n", ThreshMana + (ThreshGrowMana * (ThreshLevel - 1)));

	printf("���ݷ� : %d( + %f)\n", ThreshAttack, ThreshGrowAttack);
	printf("���� ���ݷ� : %f\n\n", ThreshAttack + (ThreshGrowAttack * (ThreshLevel - 1)));

	printf("���� �ӵ� : %f( + %f)\n", ThreshAttackSpeed, ThreshGrowAttackSpeed);
	printf("���� ���� �ӵ� : %f\n\n", ThreshAttackSpeed + (ThreshGrowAttackSpeed * (ThreshLevel - 1)));

	printf("���� : %d( + %f)\n", ThreshDefence, ThreshGrowDefence);
	printf("���� ���� : %f\n\n", ThreshDefence + (ThreshGrowDefence * (ThreshLevel - 1)));

	// �ٸ� ĳ����

	int Level = 1;
	int Attack = 43;
	int Defence = 55;
	int HP = 940;
	float HealthRegen = 1.28f;
	float AttackSpeed = 0.1f;
	float MoveSpeed = 3.5f;

	float GrowAttack = 4.5f;
	float GrowDefence = 3.0f;
	float GrowHP = 95.0f;
	float GrowHealthRegen = 0.077f;
	float GrowAttackSpeed = 0.0f;
	float GrowMoveSpeed = 0.0f;

	printf("\n\n��Ű�� ����\n\n");

	printf("%d���� ����\n\n", Level);

	printf("���ݷ� : %d( + %f)\n", Attack, GrowAttack);
	printf("���� ���ݷ� : %f\n\n", Attack + (GrowAttack * (Level - 1)));

	printf("���� : %d( + %f)\n", Defence, GrowDefence);
	printf("���� ���� : %f\n\n", Defence + (GrowDefence * (Level - 1)));

	printf("ü�� : %d( + %f)\n", HP, GrowHP);
	printf("���� ü�� : %f\n\n", HP + (GrowHP * (Level - 1)));

	printf("ü�� ��� : %f( + %f)\n", HealthRegen, GrowHealthRegen);
	printf("���� ü�� ��� : %f\n\n", HealthRegen + (GrowHealthRegen * (Level - 1)));

	printf("���� �ӵ� : %f( + %f)\n", AttackSpeed, GrowAttackSpeed);
	printf("���� ���� �ӵ� : %f\n\n", AttackSpeed + (GrowAttackSpeed * (Level - 1)));

	printf("�̵� �ӵ� : %f( + %f)\n", MoveSpeed, GrowMoveSpeed);
	printf("���� �̵� �ӵ� : %f\n\n", MoveSpeed + (GrowMoveSpeed * (Level - 1)));

	// �м��غ��� ���� ������ ����, ���� ǥ��
}