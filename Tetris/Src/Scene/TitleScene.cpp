#include"TitleScene.h"
#include"Scene.h"

extern SceneKind g_SceneKind;
extern SceneStep g_SceneStep;

TitleScene::TitleScene()
{

}

void TitleScene::InitTitleScene()
{
	g_SceneStep = SceneStep::Run;

	CanPush = true;
}

void TitleScene::RunTitleScene()
{

	DrawString(0, 100, "TitleScene",GetColor(255, 255, 255) );

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

void TitleScene::FinishTitleScene()
{
	g_SceneKind = SceneKind::SceneKind_Game;
	g_SceneStep = SceneStep::Init;
}

void TitleScene::TitleSceneUpdate()
{

	switch (g_SceneStep)
	{
	case SceneStep::Init:   InitTitleScene();   break;
	case SceneStep::Run:    RunTitleScene();    break;
	case SceneStep::Finish: FinishTitleScene();	break;
	}

}
