#pragma once
#include "GameScene.h"

class MainScene {
public:
	GameScene gameScene;
	MainScene();
	void InitGame();
	void ConsoleSize();
	void PrintLogo();
	void PrintBorder();
	~MainScene();
};