#pragma once

//�ҽ� �ڵ�. ���� ���డ���� �ڵ�� ��ȯ�Ѵ�
//�ҽ� ���ϸ��� object �����ؼ� ���������� ������ �Ѵ�. ���� �ð��� ���� �߻��Ѵ�
//

//Ű������ �Է��� �����ϴ� ���

#include <conio.h>      // _kbhit(), _getch() : Ű �Է� ������ �Է��� ���� �� �ʿ��� �Լ�
#include <windows.h>    // �ܼ� ȭ�� ����� (Ŀ�� �̵� ��) ������ Ű�� ���� �Է�
#include <stdio.h>

//������ ���� �ڵ���� �����Ѵ� �� �ڵ带 �����ؼ� �Ѱ���� ��� �ڵ带 �ѱ� �ʿ䰡 ����
//h���ϰ� c���� ����� h���ϸ� �����Ѵ� ���� ������ C���Ͽ��� �ۼ��Ѵ�

void hide_cursor(int hide) {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE); // �ܼ� �ڵ�(��¿�) ��������
    CONSOLE_CURSOR_INFO ci;
    ci.dwSize = 25;                 // Ŀ�� �β� (0~100)
    ci.bVisible = hide ? FALSE : TRUE; // 0�̸� ���̰� 1�̸� ����
    SetConsoleCursorInfo(hOut, &ci);   // Ŀ�� ���� ����
}

// ����������������������������������������������������������������������������������������������
// 2. (x, y) ��ǥ�� Ŀ���� �̵��ϴ� �Լ�
void gotoxy(short x, short y);

// ����������������������������������������������������������������������������������������������
// 3. ���� �ܼ� â ũ��(��� ������ ����) ��������
SMALL_RECT get_window_rect(void) {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(hOut, &info); // �ܼ� ���� ��������
    return info.srWindow;   // ���� â�� �»��, ���ϴ� ��ǥ ��ȯ
}



//���� �߻��ϴ� ������ �����

int bulletMaxcount = 8;
float fireRate = 0.2f;
