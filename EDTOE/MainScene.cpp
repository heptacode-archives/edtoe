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
	system("mode con cols=66 lines=40");
}

void MainScene::PrintLogo() {
	system("cls");

	color(0, 9);
	gotoxy(4, 2); // E
	cout << "﹥﹥﹥﹥﹥";
	gotoxy(4, 3);
	cout << "﹥";
	gotoxy(4, 4);
	cout << "﹥﹥﹥﹥﹥";
	gotoxy(4, 5);
	cout << "﹥";
	gotoxy(4, 6);
	cout << "﹥﹥﹥﹥﹥";

	gotoxy(16, 2); // D
	cout << "﹥﹥﹥﹥";
	gotoxy(16, 3);
	cout << "﹥      ﹥";
	gotoxy(16, 4);
	cout << "﹥      ﹥";
	gotoxy(16, 5);
	cout << "﹥      ﹥";
	gotoxy(16, 6);
	cout << "﹥﹥﹥﹥";

	gotoxy(28, 2); // T
	cout << "﹥﹥﹥﹥﹥";
	gotoxy(32, 3);
	cout << "﹥";
	gotoxy(32, 4);
	cout << "﹥";
	gotoxy(32, 5);
	cout << "﹥";
	gotoxy(32, 6);
	cout << "﹥";

	gotoxy(42, 2); // O
	cout << "﹥﹥﹥";
	gotoxy(40, 3);
	cout << "﹥      ﹥";
	gotoxy(40, 4);
	cout << "﹥      ﹥";
	gotoxy(40, 5);
	cout << "﹥      ﹥";
	gotoxy(42, 6);
	cout << "﹥﹥﹥";

	gotoxy(52, 2); // E
	cout << "﹥﹥﹥﹥﹥";
	gotoxy(52, 3);
	cout << "﹥";
	gotoxy(52, 4);
	cout << "﹥﹥﹥﹥﹥";
	gotoxy(52, 5);
	cout << "﹥";
	gotoxy(52, 6);
	cout << "﹥﹥﹥﹥﹥";
}

void MainScene::PrintBorder() {
	color(0, 7);
	gotoxy(2, 8);
	cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖";
	for (int i = 9; i < 35; i++) {
		gotoxy(2, i);
		cout << "弛";
		gotoxy(62, i);
		cout << "弛";
	}
	gotoxy(2, 35);
	cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎";










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