#pragma once

class GameScene {
	int pos[2] = { 1, 1 };
	int tile[3][3] = { {1,2,3},{4,5,6}, {7,8,9} };
	int cmd = 0;
	int cmd2 = 0;
public:
	GameScene();
	void ClearGrid();
	void PrintGrid();
	void Play();
	~GameScene();
};
