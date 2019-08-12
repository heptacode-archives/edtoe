#pragma once

class GameScene {
	int pos[2] = { 1, 1 };
	int tile[3][3] = { {-1, -1, -1}, {-1, -1, -1}, {-1, -1, -1} };
	int turn = 0;
	int cmd = 0;
	int cmd2 = 0;
public:
	GameScene();
	void ClearGrid();
	void PrintGrid();
	void Play();
	void PrintO(int col, int line);
	void PrintX(int col, int line);
	void PrintTurn();
	~GameScene();
};
