#pragma once

int Ű();

int Ű()
{
    char avatar = '@'; // ȭ�鿡 ǥ���� ����
    SMALL_RECT win = get_window_rect(); // �ܼ� â ũ�� Ȯ��
    short x = (win.Left + win.Right) / 2; // ȭ�� �߾� x��ǥ
    short y = (win.Top + win.Bottom) / 2; // ȭ�� �߾� y��ǥ
    short px = x, py = y; // ���� ��ġ ����� ����

    system("title C �ܼ� �̵� - ����Ű + WASD (����: Q)"); // â ���� ����
    hide_cursor(1); // Ŀ�� �����

    gotoxy(x, y);      // Ŀ�� �̵�
    putchar(avatar);   // '@' ���
    fflush(stdout);    // ��� ȭ�� �ݿ�

    // ����������������������������������������������������������������������������������������������
    // 5. ���� ���� (�Է� ���� ������ ��ġ ����)
    for (;;) {
        if (_kbhit()) {   // Ű�� ���ȴ��� Ȯ�� (�Է� ���� ������� ������ true)
            int ch = _getch(); // Ű �Է�(���, ���� ����)

            // ���� ����Ű ó�� ����������������������������������������������������������
            if (ch == 224 || ch == 0) {   // ����Ű�� 2����Ʈ�� ����
                int arrow = _getch();      // �� ��° ����Ʈ �б�
                switch (arrow) {
                case 72: y--; break; // �� ���� �̵�
                case 80: y++; break; // �� �Ʒ��� �̵�
                case 75: x--; break; // �� �������� �̵�
                case 77: x++; break; // �� ���������� �̵�
                default: break;
                }
            }
            // ���� �Ϲ� Ű(WASD) ó�� ��������������������������������������������
            else {
                switch (ch) {
                case 'w': case 'W': y--; break; // ���� �̵�
                case 's': case 'S': y++; break; // �Ʒ��� �̵�
                case 'a': case 'A': x--; break; // �������� �̵�
                case 'd': case 'D': x++; break; // ���������� �̵�

                    // Q �Է� �� ����
                case 'q': case 'Q':
                    hide_cursor(0); // Ŀ�� �ٽ� ���̱�
                    gotoxy(0, get_window_rect().Bottom); // Ŀ���� �Ʒ��� �̵�
                    printf("\n�����մϴ�.\n");
                    return 0;
                default: break;
                }
            }

            // ���� �ܼ� ũ�� ���� �� �ٽ� Ȯ�� ����������������������������
            win = get_window_rect();

            // ���� ��� ó�� (ȭ�� ������ ������ �ʰ�) ������������
            if (x < win.Left)  x = win.Left;
            if (x > win.Right) x = win.Right;
            if (y < win.Top)   y = win.Top;
            if (y > win.Bottom)y = win.Bottom;

            // ���� ���� ��ġ ����� ����������������������������������������������
            gotoxy(px, py); putchar(' '); // �������� ���� ����

            // ���� �� ��ġ �׸��� ������������������������������������������������
            gotoxy(x, y); putchar(avatar);
            fflush(stdout); // ��� �ݿ�

            // ���� ���� ��ġ�� ���� �������� ���� ��ġ�� ����
            px = x;
            py = y;
        }

        Sleep(1); // �ʹ� ���� �ݺ� ���� (CPU ������ ���߱�)
    }
}

