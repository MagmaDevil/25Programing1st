#include "GameInput.h"

void gotoxy(short x, short y) {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = { x, y };               // Ŀ�� ��ġ ����ü
    SetConsoleCursorPosition(hOut, pos); // ���� Ŀ�� �̵�
}