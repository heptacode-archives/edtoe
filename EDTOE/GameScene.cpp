#include "CustomFunctions.h"
#include "GameScene.h"
#include "MainScene.h"

GameScene::GameScene() {
}

void GameScene::GridMgr(string s) {
	if (s == "clear") {
		gotoxy(0, 0);
		for (int i = 0; i < 43; i++) {
			for (int j = 0; j < 61; j++) {
				cout << "  ";
			}
			gotoxy(0, i);
		}
	}
	else if (s == "print") {
		for (int i = 9; i < 19; i++) {
			gotoxy(22, i);
			cout << "��";
		}
		for (int i = 9; i < 19; i++) {
			gotoxy(44, i);
			cout << "��";
		}
		gotoxy(2, 18);
		for (int i = 0; i < 63; i++) {
			if (i == 20 || i == 42) {
				cout << "��";
			}
			else {
				cout << "��";
			}
		}
		for (int i = 18; i < 28; i++) {
			gotoxy(22, i);
			cout << "��";
		}
		for (int i = 18; i < 28; i++) {
			gotoxy(44, i);
			cout << "��";
		}
		gotoxy(2, 28);
		for (int i = 0; i < 63; i++) {
			if (i == 20 || i == 42) {
				cout << "��";
			}
			else {
				cout << "��";
			}
		}
		for (int i = 28; i < 38; i++) {
			gotoxy(22, i);
			cout << "��";
		}
		for (int i = 28; i < 38; i++) {
			gotoxy(44, i);
			cout << "��";
		}
	}
}

void GameScene::Play() {
	GridMgr("clear");
	GridMgr("print");
	GameMgr("turn");
	gotoxy(43, 27);
loop:
	if (_kbhit()) {
		cmd = _getch();
		if (cmd == 0xe0) { // ARROW KEYS
			cmd2 = _getch();
			switch (cmd2) {
				case 72: // ��
					pos[0] = pos[0] > 0 ? --pos[0] : 2;
					break;

				case 75: // ��
					pos[1] = pos[1] > 0 ? --pos[1] : 2;
					break;

				case 77: // ��
					pos[1] = pos[1] < 2 ? ++pos[1] : 0;
					break;

				case 80: // ��
					pos[0] = pos[0] < 2 ? ++pos[0] : 0;
					break;
			}

			if (pos[0] == 0 && pos[1] == 0) { // (0, 0)
				gotoxy(21, 17);
			}
			else if (pos[0] == 0 && pos[1] == 1) { // (0, 1)
				gotoxy(43, 17);
			}
			else if (pos[0] == 0 && pos[1] == 2) { // (0, 2)
				gotoxy(65, 17);
			}
			else if (pos[0] == 1 && pos[1] == 0) { // (1, 0)
				gotoxy(21, 27);
			}
			else if (pos[0] == 1 && pos[1] == 1) { // (1, 1)
				gotoxy(43, 27);
			}
			else if (pos[0] == 1 && pos[1] == 2) { // (1, 2)
				gotoxy(65, 27);
			}
			else if (pos[0] == 2 && pos[1] == 0) { // (2, 0)
				gotoxy(21, 37);
			}
			else if (pos[0] == 2 && pos[1] == 1) { // (2, 1)
				gotoxy(43, 37);
			}
			else if (pos[0] == 2 && pos[1] == 2) { // (2, 2)
				gotoxy(65, 37);
			}
		}
		else if (cmd == 32) { // SPACE BAR
			if (turn == 0) { // O�� ����
				if (pos[0] == 0 && pos[1] == 0 && tile[0][0] == -1) {  // (0, 0)
					tile[0][0] = 0;
					PrintMgr("O", 2, 9);
				}
				else if (pos[0] == 0 && pos[1] == 1 && tile[0][1] == -1) {  // (0, 1)
					tile[0][1] = 0;
					PrintMgr("O", 24, 9);
				}
				else if (pos[0] == 0 && pos[1] == 2 && tile[0][2] == -1) {  // (0, 2)
					tile[0][2] = 0;
					PrintMgr("O", 46, 9);
				}
				else if (pos[0] == 1 && pos[1] == 0 && tile[1][0] == -1) {  // (1, 0)
					tile[1][0] = 0;
					PrintMgr("O", 2, 19);
				}
				else if (pos[0] == 1 && pos[1] == 1 && tile[1][1] == -1) {  // (1, 1)
					tile[1][1] = 0;
					PrintMgr("O", 24, 19);
				}
				else if (pos[0] == 1 && pos[1] == 2 && tile[1][2] == -1) {  // (1, 2)
					tile[1][2] = 0;
					PrintMgr("O", 46, 19);
				}
				else if (pos[0] == 2 && pos[1] == 0 && tile[2][0] == -1) {  // (2, 0)
					tile[2][0] = 0;
					PrintMgr("O", 2, 29);
				}
				else if (pos[0] == 2 && pos[1] == 1 && tile[2][1] == -1) {  // (2, 1)
					tile[2][1] = 0;
					PrintMgr("O", 24, 29);
				}
				else if (pos[0] == 2 && pos[1] == 2 && tile[2][2] == -1) {  // (2, 2)
					tile[2][2] = 0;
					PrintMgr("O", 46, 29);
				}
			}
			else if (turn == 1) { // X�� ����
				if (pos[0] == 0 && pos[1] == 0 && tile[0][0] == -1) {  // (0, 0)
					tile[0][0] = 1;
					PrintMgr("X", 2, 9);
				}
				else if (pos[0] == 0 && pos[1] == 1 && tile[0][1] == -1) {  // (0, 1)
					tile[0][1] = 1;
					PrintMgr("X", 24, 9);
				}
				else if (pos[0] == 0 && pos[1] == 2 && tile[0][2] == -1) {  // (0, 2)
					tile[0][2] = 1;
					PrintMgr("X", 46, 9);
				}
				else if (pos[0] == 1 && pos[1] == 0 && tile[1][0] == -1) {  // (1, 0)
					tile[1][0] = 1;
					PrintMgr("X", 2, 19);
				}
				else if (pos[0] == 1 && pos[1] == 1 && tile[1][1] == -1) {  // (1, 1)
					tile[1][1] = 1;
					PrintMgr("X", 24, 19);
				}
				else if (pos[0] == 1 && pos[1] == 2 && tile[1][2] == -1) {  // (1, 2)
					tile[1][2] = 1;
					PrintMgr("X", 46, 19);
				}
				else if (pos[0] == 2 && pos[1] == 0 && tile[2][0] == -1) {  // (2, 0)
					tile[2][0] = 1;
					PrintMgr("X", 2, 29);
				}
				else if (pos[0] == 2 && pos[1] == 1 && tile[2][1] == -1) {  // (2, 1)
					tile[2][1] = 1;
					PrintMgr("X", 24, 29);
				}
				else if (pos[0] == 2 && pos[1] == 2 && tile[2][2] == -1) {  // (2, 2)
					tile[2][2] = 1;
					PrintMgr("X", 46, 29);
				}
			}
			GameMgr("status");
		}
	}
	if(gameLoop){
		goto loop;
	}
}

void GameScene::PrintMgr(string s, int col, int line) {
	if (s == "O") {
		color(0, 2);
		gotoxy(col, line);
		cout << "    �������";
		gotoxy(col, ++line);
		cout << "  ��            ��";
		gotoxy(col, ++line);
		cout << "��                ��";
		gotoxy(col, ++line);
		cout << "��                ��";
		gotoxy(col, ++line);
		cout << "��                ��";
		gotoxy(col, ++line);
		cout << "��                ��";
		gotoxy(col, ++line);
		cout << "��                ��";
		gotoxy(col, ++line);
		cout << "  ��            ��";
		gotoxy(col, ++line);
		cout << "    �������";

		turn = turn == 0 ? 1 : 0;
		GameMgr("turn");
		turnCnt++;
		gotoxy(col + 19, line);
	}
	else if (s == "X") {
		color(0, 4);
		gotoxy(col, line);
		cout << "��                ��";
		gotoxy(col, ++line);
		cout << "  ��            ��";
		gotoxy(col, ++line);
		cout << "    ��        ��";
		gotoxy(col, ++line);
		cout << "      ��    ��";
		gotoxy(col, ++line);
		cout << "        ���";
		gotoxy(col, ++line);
		cout << "      ��    ��";
		gotoxy(col, ++line);
		cout << "    ��        ��";
		gotoxy(col, ++line);
		cout << "  ��            ��";
		gotoxy(col, ++line);
		cout << "��                ��";

		turn = turn == 0 ? 1 : 0;
		GameMgr("turn");
		turnCnt++;
		gotoxy(col + 19, line);
	}
}

void GameScene::GameMgr(string s) {
	if (s == "turn") {
		color(0, 0);
		gotoxy(4, 2);
		for (int i = 1; i < 9; i++) {
			for (int j = 0; j < 32; j++) {
				cout << "  ";
			}
			gotoxy(4, i);
		}
		color(0, 6);
		gotoxy(24, 2);
		cout << "��       ��     �����";
		gotoxy(24, 3);
		cout << " ��     ��    ��";
		gotoxy(24, 4);
		cout << "  ��   ��       ����";
		gotoxy(24, 5);
		cout << "   �� ��              ��";
		gotoxy(24, 6);
		cout << "    ��        �����";

		color(0, 7);
		if (turn == 0) { // O�� ����
			gotoxy(4, 1);
			cout << "    �����";
			gotoxy(4, 2);
			cout << "  ��        ��";
			gotoxy(4, 3);
			cout << "  ��        ��";
			gotoxy(4, 4);
			cout << "  ��        ��";
			gotoxy(4, 5);
			cout << "  ��        ��";
			gotoxy(4, 6);
			cout << "    �����";
		}
		else if (turn == 1) { // X�� ����
			gotoxy(52, 1);
			cout << "��         ��";
			gotoxy(52, 2);
			cout << "  ��     ��";
			gotoxy(52, 3);
			cout << "    �� ��";
			gotoxy(52, 4);
			cout << "    �� ��";
			gotoxy(52, 5);
			cout << "  ��     ��";
			gotoxy(52, 6);
			cout << "��         ��";
		}
	}
	else if (s == "status") {
		for (int i = 0; i < 3; i++) {
			// ���� �Ǻ�
			if (tile[i][0] == 0 && tile[i][1] == 0 && tile[i][2] == 0) { // O ��
				GameOver(0);
				return;
			}
			else if (tile[i][0] == 1 && tile[i][1] == 1 && tile[i][2] == 1) { // X ��
				GameOver(1);
				return;
			}
			// ���� �Ǻ�
			else if (tile[0][i] == 0 && tile[1][i] == 0 && tile[2][i] == 0) { // O ��
				GameOver(0);
				return;
			}
			else if (tile[0][i] == 1 && tile[1][i] == 1 && tile[2][i] == 1) { // X ��
				GameOver(1);
				return;
			}
		}
		// �밢�� �Ǻ�
		if (tile[0][0] == 0 && tile[1][1] == 0 && tile[2][2] == 0) { // O ��
			GameOver(0);
			return;
		}
		else if (tile[0][0] == 1 && tile[1][1] == 1 && tile[2][2] == 1) { // X ��
			GameOver(0);
			return;
		}
		else if (tile[0][2] == 0 && tile[1][1] == 0 && tile[2][0] == 0) { // O ��
			GameOver(0);
			return;
		}
		else if (tile[0][2] == 1 && tile[1][1] == 1 && tile[2][0] == 1) { // X ��
			GameOver(1);
			return;
		}
		// ���º� �Ǻ�
		if (turnCnt >= 9) {
			GameOver(-1); // ���º�
			return;
		}
	}
}

void GameScene::GameOver(int i = -1) {
	gameLoop = 0;
	color(0, 0);
	gotoxy(4, 2);
	for (int i = 1; i < 9; i++) {
		for (int j = 0; j < 32; j++) {
			cout << "  ";
		}
		gotoxy(4, i);
	}
	if (i == 0) { // O ��
		color(0, 7);
		gotoxy(1, 1);
		cout << "    �����";
		gotoxy(1, 2);
		cout << "  ��        ��";
		gotoxy(1, 3);
		cout << "  ��        ��";
		gotoxy(1, 4);
		cout << "  ��        ��";
		gotoxy(1, 5);
		cout << "  ��        ��";
		gotoxy(1, 6);
		cout << "    �����";
	}
	else if (i == 1) { // X ��
		color(0, 7);
		gotoxy(2, 1);
		cout << "��         ��";
		gotoxy(2, 2);
		cout << "  ��     ��";
		gotoxy(2, 3);
		cout << "    �� ��";
		gotoxy(2, 4);
		cout << "    �� ��";
		gotoxy(2, 5);
		cout << "  ��     ��";
		gotoxy(2, 6);
		cout << "��         ��";
	}
	else if (i == -1) { // ���º�
		color(0, 6);
		gotoxy(8, 1);
		cout << "�����      �����          ��      ��        ��";
		gotoxy(8, 2);
		cout << "��      ��    ��      ��      ��  ��    ��        ��";
		gotoxy(8, 3);
		cout << "��      ��    ��      ��     ��    ��   ��        ��";
		gotoxy(8, 4);
		cout << "��      ��    �����      ������  ��   ��   ��";
		gotoxy(8, 5);
		cout << "��      ��    ��      ��    ��      ��  �� ��  �� ��";
		gotoxy(8, 6);
		cout << "�����      ��       ��   ��      ��  ��        ��";

	}
	if (i >= 0) {
		color(0, 9);
		gotoxy(16, 1);
		cout << "��        ��  ����  ��       ��    �����   ��";
		gotoxy(16, 2);
		cout << "��        ��    ��    ��    �� ��  ��           ��";
		gotoxy(16, 3);
		cout << "��        ��    ��    ��   ��  ��    ����     ��";
		gotoxy(16, 4);
		cout << "��   ��   ��    ��    ��  ��   ��          ��   ��";
		gotoxy(16, 5);
		cout << "�� ��  �� ��    ��    �� ��    ��          ��";
		gotoxy(16, 6);
		cout << "��        ��  ����  ��       ��  �����     ��";
	}
	gotoxy(66, 38);
	system("pause>nul & exit");
}

GameScene::~GameScene() {
}