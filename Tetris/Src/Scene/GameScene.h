#ifndef GameScene_h_
#define GameScene_h_

#include"DxLib.h"
#include"../Stage/Stage.h"

class GameScene
{
public:
	GameScene();
	~GameScene() {}

public:
	void InitGameScene();
	void RunGameScene();
	void FinishGameScene();

public:
	void GameSceneUpdate();

private:
	//押されたかどうか
	bool CanPush;
	//インスタンス
	Stage stage;

};

#endif