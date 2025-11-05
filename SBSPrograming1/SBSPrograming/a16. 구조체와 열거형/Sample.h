#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#ifndef JOB_H

#define JOB_H

typedef enum
{
	전사,
	마법사,
	힐러,
	무직 = 100
}JOB;

#endif // !1

void SelectJob(JOB* jobPtr);

void JobStat(JOB selectjob, int * HPPtr, int * ATTACKPtr, int * MPPtr);