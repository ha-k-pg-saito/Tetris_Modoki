#ifndef Scene_h_
#define Scene_h_

//�V�[���̎��
enum SceneKind
{
	SceneKind_Title,
	SceneKind_Game,
	SceneKind_Result
};

enum SceneStep
{
	Init,
	Run,
	Finish
};

void SceneUpdate();
#endif