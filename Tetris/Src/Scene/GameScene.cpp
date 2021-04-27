#include"GameScene.h"
#include"Scene.h"

extern SceneKind g_SceneKind;
extern SceneStep g_SceneStep;

GameScene::GameScene()
{
}

void GameScene::InitGameScene()
{
	CanPush = true;
	g_SceneStep = SceneStep::Run;
}

void GameScene::RunGameScene()
{
//����̃L�[�������ꂽ�Ƃ�
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
	//�X�e�[�W�̕`��
	stage.Draw();
}

void GameScene::FinishGameScene()
{
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
