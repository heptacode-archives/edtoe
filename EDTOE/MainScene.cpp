#include "MainScene.h"
#include "CustomFunctions.h"
using namespace std;

MainScene::MainScene() {
}

void MainScene::InitGame() {
	ConsoleSize();
	PrintLogo();
	PrintBorder();
}

void MainScene::ConsoleSize() {
	system("mode con cols=68 lines=40");
}

void MainScene::PrintLogo() {
	system("cls");

	color(0, 9);
	gotoxy(4, 2); // E
	cout << "¡á¡á¡á¡á¡á";
	gotoxy(4, 3);
	cout << "¡á";
	gotoxy(4, 4);
	cout << "¡á¡á¡á¡á¡á";
	gotoxy(4, 5);
	cout << "¡á";
	gotoxy(4, 6);
	cout << "¡á¡á¡á¡á¡á";

	gotoxy(16, 2); // D
	cout << "¡á¡á¡á¡á";
	gotoxy(16, 3);
	cout << "¡á      ¡á";
	gotoxy(16, 4);
	cout << "¡á      ¡á";
	gotoxy(16, 5);
	cout << "¡á      ¡á";
	gotoxy(16, 6);
	cout << "¡á¡á¡á¡á";

	gotoxy(28, 2); // T
	cout << "¡á¡á¡á¡á¡á";
	gotoxy(32, 3);
	cout << "¡á";
	gotoxy(32, 4);
	cout << "¡á";
	gotoxy(32, 5);
	cout << "¡á";
	gotoxy(32, 6);
	cout << "¡á";

	gotoxy(42, 2); // O
	cout << "¡á¡á¡á";
	gotoxy(40, 3);
	cout << "¡á      ¡á";
	gotoxy(40, 4);
	cout << "¡á      ¡á";
	gotoxy(40, 5);
	cout << "¡á      ¡á";
	gotoxy(42, 6);
	cout << "¡á¡á¡á";

	gotoxy(52, 2); // E
	cout << "¡á¡á¡á¡á¡á";
	gotoxy(52, 3);
	cout << "¡á";
	gotoxy(52, 4);
	cout << "¡á¡á¡á¡á¡á";
	gotoxy(52, 5);
	cout << "¡á";
	gotoxy(52, 6);
	cout << "¡á¡á¡á¡á¡á";
}

void MainScene::PrintBorder() {
	color(0, 7);
	gotoxy(2, 8);
	cout << "¦£";
	for (int i = 0; i < 59; i++) {
		cout << "¦¡";
	}
	cout << "¦¤";
	for (int i = 9; i < 35; i++) {
		gotoxy(2, i);
		cout << "¦¢";
		gotoxy(62, i);
		cout << "¦¢";
	}
	gotoxy(2, 35);
	cout << "¦¦";
	for (int i = 0; i < 59; i++) {
		cout << "¦¡";
	}
	cout << "¦¥";




	/*color(0, 7);
	gotoxy(20, 10);
	cout << "Press";
	color(7, 0);
	gotoxy(26, 10);
	cout << "SPACE";
	color(0, 7);
	gotoxy(32, 10);
	cout << "to Begin.";*/
}

MainScene::~MainScene() {
}