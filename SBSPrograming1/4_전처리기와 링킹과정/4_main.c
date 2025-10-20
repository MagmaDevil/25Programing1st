/*
	날짜: 2025 / 10 / 20
	학습목표: 헤더 파일을 생성하고 링킹 과정을 이해한다
	실습목표:
*/
#include <stdlib.h>
#include <conio.h>  
#include <windows.h> 
#include "GameInfo.h"
#include <stdio.h>  // 이름으로 생각: include: 포함하다, std + i + o: 표준, 입력, 출력
// 표준 입출력의 머리 정보가 담겨있는 코드를 포함시키세요
// #include 헤더;
// 전처리기: 프로그램의 시작 전에 실행하라
// Why? 프로그래밍 언어 - (CPU - 명령)
// 컴퓨터 어딘가에 설치되어 있는 Windows Kit 생성된 코드를 가져와서 사용하고 싶다.
// Copy Paste “복사 붙여넣기”.

// 컴퓨터에게 입력을 받는 코드가 필요하다. => 구현해놓은 헤더파일을 참조해야겠구나.
// 컴퓨터에게 입력을 감지하는 코드가 필요하다 => AI 코드를 작성. #include < > ...

/*
	#include <이름.h>: 시스템 폴더 안에서 파일 탐색
	#include "이름.h": 프로젝트 안에서 탐색
*/

int main()
{
	printf("최대 발사 가능한 총알 수: %d\n", bulletMaxCount);

	printf("총알의 발사율: %f\n", fireRate);
}