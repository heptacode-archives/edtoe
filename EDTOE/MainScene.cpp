#include "MainScene.h"
#include "CustomFunctions.h"
using namespace std;

MainScene::MainScene() {
}

void MainScene::InitGame() {
	InitConsole();
	PrintLogo();
	PrintBorder();
}

void MainScene::InitConsole() {
	system("title EDTOE");
	system("mode con cols=68 lines=40");
	color(0, 7);
}

void MainScene::PrintLogo() {
	system("cls");

	color(0, 9);
	gotoxy(5, 2); // E
	cout << "������";
	gotoxy(5, 3);
	cout << "��";
	gotoxy(5, 4);
	cout << "������";
	gotoxy(5, 5);
	cout << "��";
	gotoxy(5, 6);
	cout << "������";

	gotoxy(17, 2); // D
	cout << "�����";
	gotoxy(17, 3);
	cout << "��      ��";
	gotoxy(17, 4);
	cout << "��      ��";
	gotoxy(17, 5);
	cout << "��      ��";
	gotoxy(17, 6);
	cout << "�����";

	gotoxy(29, 2); // T
	cout << "������";
	gotoxy(33, 3);
	cout << "��";
	gotoxy(33, 4);
	cout << "��";
	gotoxy(33, 5);
	cout << "��";
	gotoxy(33, 6);
	cout << "��";

	gotoxy(43, 2); // O
	cout << "����";
	gotoxy(41, 3);
	cout << "��      ��";
	gotoxy(41, 4);
	cout << "��      ��";
	gotoxy(41, 5);
	cout << "��      ��";
	gotoxy(43, 6);
	cout << "����";

	gotoxy(53, 2); // E
	cout << "������";
	gotoxy(53, 3);
	cout << "��";
	gotoxy(53, 4);
	cout << "������";
	gotoxy(53, 5);
	cout << "��";
	gotoxy(53, 6);
	cout << "������";
}

void MainScene::PrintBorder() {
	color(0, 7);
	gotoxy(2, 8);
	cout << "��";
	for (int i = 0; i < 61; i++) {
		cout << "��";
	}
	cout << "��";
	for (int i = 9; i < 38; i++) {
		gotoxy(2, i);
		cout << "��";
		gotoxy(64, i);
		cout << "��";
	}
	gotoxy(2, 38);
	cout << "��";
	for (int i = 0; i < 61; i++) {
		cout << "��";
	}
	cout << "��";

	color(0, 7);
	gotoxy(24, 23);
	cout << "Press";
	color(7, 0);
	gotoxy(30, 23);
	cout << "ANY KEY";
	color(0, 7);
	gotoxy(38, 23);
	cout << "to Begin.";
	system("pause>nul");
}

MainScene::~MainScene() {
}