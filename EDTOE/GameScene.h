#pragma once
#include <string>
using namespace std;

class GameScene {
	int pos[2] = { 1, 1 };
	int tile[3][3] = { {-1, -1, -1}, {-1, -1, -1}, {-1, -1, -1} };
	int turn = 0;
	int cmd = 0;
	int cmd2 = 0;
	int gameLoop = 1;
	int turnCnt = 0;
public:
	GameScene();
	void GridMgr(string s);
	void Play();
	void PrintMgr(string s, int col, int line);
	void GameMgr(string s);
	void GameOver(int i);
	~GameScene();
};
