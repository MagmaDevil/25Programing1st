#include "Sample.h"

void SelectJob(JOB* jobPtr)
{
	int input = 0;

	printf("직업을 선택하세요.\n");
	scanf("%d", &input);

	*jobPtr = input;
	JOB tempJob = *jobPtr;

	//if(job == 전사)
	//{
	//	printf("전사를 선택하셨습니다.\n");
	//}
	//
	//else
	//{
	//	printf("잘못된 선택입니다.\n");
	//}
	switch (tempJob)
	{
	case 전사:
		printf("나는 직업이 전사입니다\n");
		break;
	case 마법사:
		printf("나는 직업이 마법사입니다\n");
		break;
	case 힐러:
		printf("나는 직업이 힐러입니다\n");
		break;
	
	default: tempJob = 무직;
		break;
	}
}

void JobStat(JOB selectjob, int* HPPtr, int* ATTACKPtr, int* MANAPtr)
{
	// JOB 열거형으로 스탯 만들기

	switch (selectjob)
	{
	case 전사:
		*HPPtr = 20;
		*ATTACKPtr = 20;
		*MANAPtr = 3;
		printf("HP: %d\nATTACK: %d\nMP: %d\n", *HPPtr, *ATTACKPtr, *MANAPtr);
		break;
	case 마법사:
		*HPPtr = 5;
		*ATTACKPtr = 10;
		*MANAPtr = 20;
		printf("HP: %d\nATTACK: %d\nMP: %d\n", *HPPtr, *ATTACKPtr, *MANAPtr);
		break;
	case 힐러:
		*HPPtr = 7;
		*ATTACKPtr = 5;
		*MANAPtr = 15;
		printf("HP: %d\nATTACK: %d\nMP: %d\n", *HPPtr, *ATTACKPtr, *MANAPtr);
		break;

	default: selectjob = 무직;
		*HPPtr = 1;
		*ATTACKPtr = 1;
		*MANAPtr = 0;
		printf("HP: %d\nATTACK: %d\nMP: %d\n", *HPPtr, *ATTACKPtr, *MANAPtr);
		break;
	}
}