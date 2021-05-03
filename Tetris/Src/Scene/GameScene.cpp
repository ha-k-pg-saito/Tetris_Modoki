#include"GameScene.h"
#include"Scene.h"
#include"../Texture/TexManager.h"

extern SceneKind g_SceneKind;
extern SceneStep g_SceneStep;

GameScene::GameScene()
{
}

void GameScene::InitGameScene()
{
#pragma region テクスチャ読み込み
	TexManager::Instance()->Load("Res/Frame/Frame.png","Frame");
	TexManager::Instance()->Load("Res/Blocks/Block_1.png","Block_I");
	TexManager::Instance()->Load("Res/Blocks/Block_2.png","Block_O");
	TexManager::Instance()->Load("Res/Blocks/Block_3.png","Block_T");
	TexManager::Instance()->Load("Res/Blocks/Block_4.png","Block_J");
	TexManager::Instance()->Load("Res/Blocks/Block_5.png","Block_L");
	TexManager::Instance()->Load("Res/Blocks/Block_6.png","Block_S");
	TexManager::Instance()->Load("Res/Blocks/Block_7.png","Block_Z");
	
#pragma endregion
	stage.Init();
	
	CanPush = true;
	g_SceneStep = SceneStep::Run;
}

void GameScene::RunGameScene()
{
//特定のキーが押されたとき
	if (CheckHitKey(KEY_INPUT_RETURN) != 0)
	{
		if (CanPush == false)
		{
			CanPush = true;
			g_SceneStep = SceneStep::Finish;
		}
	}
	else
	{
		CanPush = false;
	}
	//ステージの描画
	stage.Draw();
}

void GameScene::FinishGameScene()
{
	TexManager::Instance()->AllRelease();

	g_SceneKind = SceneKind::SceneKind_Result;
	g_SceneStep = SceneStep::Init;
}

void GameScene::GameSceneUpdate()
{
	switch (g_SceneStep)
	{
	case SceneStep::Init:   InitGameScene();   break;
	case SceneStep::Run:    RunGameScene();    break;
	case SceneStep::Finish: FinishGameScene(); break;
	}
}
