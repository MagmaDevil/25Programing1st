#include <stdio.h>

/* 
* 포인터 복습
* int* num = &a; // 포인터 선언 방식 자료형(*)
* *numPtr // 주소에 저장된 값을 역참조
*/

void SelectJob(int* xPtr, int* yPtr, int amountX, int amountY);
void Test2(const int* const playerWallet);
void Inventory(const int inventorycount[], const char* inventorytext[]);
void AddInventory(int inventorycount[], int index, int amount);


int main()
{
	printf("Test1 예제 코드 구현\n");

	int playerX = 5;
	int playerY = 0;
	int* playerXPtr = &playerX;
	int* playerYPtr = &playerY;
	SelectJob(playerXPtr, playerYPtr, 2, 5);
	printf("playerX의 값: %d, playerY의 값: %d\n", playerX, playerY);

	// 상수 지시 포인터는 왜 문법적으로 존재하는가?
	const double pi = 3.14;
	const double* piPtr = &pi;
	//(*piPtr) = (*piPtr) + 2;
	printf("pi의 값: %lf\n", pi);


	//예제2: const int*로 선언된 포인터 변수는 변경 불가능
	int boxX = 10;
	const int* const boxXptr = &boxX;
	//(*boxXptr) = (*boxXptr) + 2; // 포인터에 저장되어 있는 값을 수정하지 마세요. 상수 지시 포인터 const pointer

	// 예제3: 상수 포인터. 포인터(주소) 바뀌지 않는다
	int box2 = 5;
	//boxXptr = &box2;
	printf("boxXptr의 값: %d\n", *boxXptr);

	// 예제4. 함수에 상수 포인터
	// 배열 직접 선언

	//여기부터

	int inventory1[10] = {100, 10, 5}; // 동전의 수, 레드 포션의 수, 약초의 수
	const char* inventorytext[3] = {"동전", "레드 포션", "약초"};

	int inventory2[10] = { 60, 30, 1 }; // 동전의 수, 레드 포션의 수, 약초의 수

	inventory1[0] += 100;
	inventory1[1] += 5;

	Inventory(inventory1, inventorytext);
	
	// 실습 예제1
	// 플레이어2의 인벤토리도 만들어서 출력
	
	Inventory(inventory2, inventorytext);

	// 실습 예제2
	// 플레이어의 소유한 인벤토리를 변경시키는 함수 만들기

	AddInventory(inventory2, 0, 40);
	Inventory(inventory2, inventorytext);

	//여기까지 함수로

	// 출력 -> 동전, 레드 포션, 약초

	int playerWallet = 100;
	Test2(&playerWallet);

	// 그래서 포인터를 playerWallet 주소로 넘기는 이유는?
}

// Test1 함수를 보고 이 함수가  어떤 목적으로 사용될 건지 분석
// 첫번째 요소: 주소를 전달받음: 주소를 이용해서 무엇을 할 것인가? 정수형 주소를 - 이름이 x
// 주소에 저장되어있는 값을 변경해서 사용해야겠다. 5 -> amountX 더해서 이 더 한 값으로 바꾸겠다.
// 
// 

void SelectJob(int* xPtr, int* yPtr, int amountX, int amountY)
{
	//int x = 0;   // main 전달받은 playerX 값
	//int y = 0;   // main 전달받은 playerY 값
	//int amountX = 2;
	//int amountY = 5;

	*xPtr = (*xPtr) + amountX;
	*yPtr = (*yPtr) + amountY;
}
void Test2(const int* const playerWallet)
{
	// 플레이어의 돈을 출력

	printf("플레이어의 돈: %d\n", *playerWallet);
}
void Inventory(const int inventorycount[], const char* inventorytext[])
{
	for (int i = 0; i < 3; i++)
	{
		printf("%s: %d개\t", inventorytext[i], inventorycount[i]);
	}
	printf("\n");
}
void AddInventory(int inventorycount[], int index, int amount)
{
	//몇번쨰 요소를 몇개 바꿀거냐

	inventorycount[index] += amount;
}
