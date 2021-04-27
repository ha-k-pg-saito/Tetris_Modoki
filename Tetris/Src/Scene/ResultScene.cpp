#include"ResultScene.h"
#include"Scene.h"

extern SceneKind g_SceneKind;
extern SceneStep g_SceneStep;

ResultScene::ResultScene()
{
	
}

void ResultScene::InitResultScene()
{
	g_SceneStep = SceneStep::Run;

	CanPush = true;
}

void ResultScene::RunResultScene()
{
	DrawString(0, 100,"ResultScene",GetColor(255, 255, 255));

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
}

void ResultScene::FinishResultScene()
{
	g_SceneKind = SceneKind::SceneKind_Title;
	g_SceneStep = SceneStep::Init;
}

void ResultScene::ResultSceneUpdate()
{
	switch (g_SceneStep)
	{
	case SceneStep::Init:   InitResultScene();   break;
	case SceneStep::Run:    RunResultScene();    break;
	case SceneStep::Finish: FinishResultScene(); break;
	}
}
