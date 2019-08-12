#include "MainScene.h"

int main() {
	MainScene mainScene;
	mainScene.InitGame();		// 게임 초기화
	mainScene.gameScene.Play();		// 게임 진행
}