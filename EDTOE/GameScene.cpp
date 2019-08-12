#include "GameScene.h"
#include "CustomFunctions.h"
#include "MainScene.h"
#include "Player.h"
using namespace std;

GameScene::GameScene() {
}

void GameScene::ClearGrid() {
	gotoxy(2, 8);
	for (int i = 8; i < 40; i++) {
		for (int j = 0; j < 61; j++) {
			cout << " ";
		}
		gotoxy(2, i);
	}
}

void GameScene::PrintGrid() {
	for (int i = 9; i < 19; i++) {
		gotoxy(22, i);
		cout << "¦¢";
	}
	for (int i = 9; i < 19; i++) {
		gotoxy(44, i);
		cout << "¦¢";
	}
	gotoxy(2, 18);
	for (int i = 0; i < 61; i++) {
		if (i == 20 || i == 42) {
			cout << "¦«";
		}
		else {
			cout << "¦¡";
		}
	}
	for (int i = 18; i < 28; i++) {
		gotoxy(22, i);
		cout << "¦¢";
	}
	for (int i = 18; i < 28; i++) {
		gotoxy(44, i);
		cout << "¦¢";
	}
	gotoxy(2, 28);
	for (int i = 0; i < 61; i++) {
		if (i == 20 || i == 42) {
			cout << "¦«";
		}
		else {
			cout << "¦¡";
		}
	}
	for (int i = 29; i < 39; i++) {
		gotoxy(22, i);
		cout << "¦¢";
	}
	for (int i = 29; i < 39; i++) {
		gotoxy(44, i);
		cout << "¦¢";
	}
	gotoxy(1, 1);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << tile[i][j];
		}
		cout << "\n";
	}
}

void GameScene::Play() {
	ClearGrid();
	PrintGrid();
loop:
	if (_kbhit()) {
		cmd = _getch();
		cmd2 = 0;
		if (cmd == 0xe0) {
			cmd2 = _getch();
			/*
				»ó	72
				ÁÂ	75
				¿ì	77
				ÇÏ	80
			*/
			switch (cmd2) {
				case 72:
					cout << "»ó";
					pos[1] = pos[1] < 2 ? ++pos[1] : 0;
					break;

				case 75:
					cout << "ÁÂ";
					pos[0] = pos[0] > 0 ? --pos[0] : 2;
					break;

				case 77:
					cout << "¿ì";
					pos[0] = pos[0] < 2 ? ++pos[0] : 0;
					break;

				case 80:
					cout << "ÇÏ";
					pos[1] = pos[1] > 0 ? --pos[1] : 2;
					break;
			}
			cout << pos[0] << ", " << pos[1];
		}
	}
	goto loop;
}

GameScene::~GameScene() {
}